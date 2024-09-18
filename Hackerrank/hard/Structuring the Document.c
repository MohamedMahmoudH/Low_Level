#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;//denotes number of words in a sentence
};

struct paragraph {
    struct sentence* data  ;
    int sentence_count;//denotes number of sentences in a paragraph
};

struct document {
    struct paragraph* data;
    int paragraph_count;//denotes number of paragraphs in a document
};



/***************************************************************************************************************************************************/
struct document get_document(char* text) {
    struct document Doc;
    int len = strlen(text);

    int MAX_SENTENCES = 0 , MAX_WORDS = 0;
    for(int i = 0 , ind = 0; i < len; ++i)
    {
        switch (text[i])
        {
            case '.' : ++MAX_SENTENCES;
            case ' ' : ++MAX_WORDS; // every '.' can replaced with ' ' to get number of all words in the text "MAX_WORDS"
        }
    }

    Doc.data = (struct paragraph *)calloc(MAX_PARAGRAPHS , sizeof(struct paragraph));
    Doc.data[Doc.paragraph_count].data = (struct sentence *)calloc(MAX_SENTENCES , sizeof(struct sentence));
    Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data = (struct word *)calloc(MAX_WORDS , sizeof(struct word));
    Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data[Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count].data = (char *)calloc(MAX_CHARACTERS , sizeof(char));
    for(int i = 0 , ind = 0; i < len; ++i)
    {
        switch (text[i])
        {
            case ' ' : 
                ++Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count;
                ind = 0;
                
                Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data[Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count].data = (char *)calloc(MAX_CHARACTERS , sizeof(char));
                
                break;
            case '.' :
                ++Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count;
                ++Doc.data[Doc.paragraph_count].sentence_count;
                ind = 0;
                
                Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data = (struct word *)calloc(MAX_WORDS , sizeof(struct word));
                Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data[Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count].data = (char *)calloc(MAX_CHARACTERS , sizeof(char));
                
                break;
            case '\n' :
                ++Doc.paragraph_count;
                ind = 0;
                
                Doc.data[Doc.paragraph_count].data = (struct sentence *)calloc(MAX_SENTENCES , sizeof(struct sentence));
                Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data = (struct word *)calloc(MAX_WORDS , sizeof(struct word));
                Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data[Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count].data = (char *)calloc(MAX_CHARACTERS , sizeof(char));
                
                break;
            default :
                Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].data[Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count].data[ind++] = text[i];
        }
    }
    ++Doc.paragraph_count; // as the last paragraph doesn't have '\n'
    return Doc;
}

// Doc.
// data[Doc.paragraph_count].
// data[Doc.data[Doc.paragraph_count].sentence_count].
// data[Doc.data[Doc.paragraph_count].data[Doc.data[Doc.paragraph_count].sentence_count].word_count]

struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
    return Doc.data[--n].data[--m].data[--k];
}

struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
    return Doc.data[--m].data[--k];
}

struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[--k];
}
/***************************************************************************************************************************************************/




void print_word(struct word w) {
    printf("%s", w.data);
}

void print_sentence(struct sentence sen) {
    for(int i = 0; i < sen.word_count; i++) {
        print_word(sen.data[i]);
        if (i != sen.word_count - 1) {
            printf(" ");
        }
    }
}

void print_paragraph(struct paragraph para) {
    for(int i = 0; i < para.sentence_count; i++){
        print_sentence(para.data[i]);
        printf(".");
    }
}

void print_document(struct document doc) {
    for(int i = 0; i < doc.paragraph_count; i++) {
        print_paragraph(doc.data[i]);
        if (i != doc.paragraph_count - 1)
            printf("\n");
    }
}

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

int main() 
{
    char* text = get_input_text();
    struct document Doc = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            struct word w = kth_word_in_mth_sentence_of_nth_paragraph(Doc, k, m, n);
            print_word(w);
        }

        else if (type == 2) {
            int k, m;
            scanf("%d %d", &k, &m);
            struct sentence sen= kth_sentence_in_mth_paragraph(Doc, k, m);
            print_sentence(sen);
        }

        else{
            int k;
            scanf("%d", &k);
            struct paragraph para = kth_paragraph(Doc, k);
            print_paragraph(para);
        }
        printf("\n");
    }     
}
