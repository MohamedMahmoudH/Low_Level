#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b)
{
    int x = strcmp(a , b);
    if(x < 0) return 1;
    else      return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b)
{
    int x = strcmp(a , b);
    if(x > 0) return 1;
    else      return 0;
}

int freq[27];
int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
    int sz1 = strlen(a) , sz2 = strlen(b);
    short dist1 = 0 , dist2 = 0;
    memset(freq , 0 , sizeof freq);
    for(int i =   0; i < sz1; ++i) freq[a[i] - 'a']++;
    for(int i =   0; i < 26 ; ++i) if(freq[i])dist1++;
    memset(freq , 0 , sizeof freq);
    for(int i =   0; i < sz2; ++i) freq[b[i] - 'a']++;
    for(int i =   0; i < 26 ; ++i) if(freq[i])dist2++;
    if(dist1 < dist2) return 1;
    else if(dist2 < dist1) return 0;
    else{
        int x = lexicographic_sort(a , b);
        return x;
    }
}

int sort_by_length(const char* a, const char* b)
{
    int sz1 = strlen(a);
    int sz2 = strlen(b);
    if(sz1 < sz2) return 1;
    else if(sz1 > sz2) return 0;
    else{
        int x = lexicographic_sort(a , b);
        return x;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    for(int i = 0; i < len; ++i){
        for(int j = 0; j < len - 1; ++j){
            if(!cmp_func(arr[j] , arr[j+1]))
            {
                char *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
