#include<stdio.h>
#include<string.h>
#include<ctype.h>
//An Anagram is a word or phrase which is formed by rearranging the letters of another word or phrase.
//Example : Listen = silent
int check_anagram(char *w1, char *w2){
    int len1 = strlen(w1);
    int len2 = strlen(w2);
    int w1lc[26] = {0};
    int w2lc[26] = {0};
    for(int i=0;i<len1;i++){
        int lower = tolower(w1[i]);
        w1lc[lower - 'a']++;
    }
    for(int i=0;i<len2;i++){
        int lower = tolower(w2[i]);
        w2lc[lower - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(w1lc[i] != w2lc[i]) return 0;
    }
    return 1;
}
int main(){
    char w1[20],w2[20];
    gets(w1);
    gets(w2);
    if(check_anagram(w1,w2)){
        printf("It is an Anagram");
    }
    else printf("Not an Anagram");
}