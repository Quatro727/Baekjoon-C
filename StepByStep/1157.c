/*bakjoon 1157.c*/
#include <stdio.h>

#define STRLEN 1000001
int main(){
    char str[STRLEN];
    int alpha[26]={0,};
    int i=0;

    //1. fgets로 문자열 입력받기
    fgets(str, STRLEN, stdin);

    //2. 개행문자 제거
    while(*(str+i)!='\0'){
        if(*(str+i)=='\n'){
            *(str+i)='\0';
            break;
        }
        i++;
    }

    //3. 입력받은 문자열에서 알파벳 개수 세기
    i=0;
    while(*(str+i)!='\0'){
        if(*(str+i)>='a'&&*(str+i)<='z'){
            alpha[*(str+i)-'a']++;
        }
        else if(*(str+i)>='A'&&*(str+i)<='Z'){
            alpha[*(str+i)-'A']++;
        }
        i++;
    }
    //4. 가장 많이 사용된 알파벳 찾기
    int max=0;
    char max_alpha;
    for(i=0;i<26;i++){
        if(alpha[i]>max){
            max=alpha[i];
            max_alpha=i+'A';
        }
        else if(alpha[i]==max){
            max_alpha='?';
        }
    }
    printf("%c\n", max_alpha);
    return 0;
}