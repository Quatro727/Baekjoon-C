/*baekjoon 2941.c*/
#include <stdio.h>
#include <string.h>

#define STRLEN 101

int main(){
    char str[STRLEN];

    //1. fgets로 문자열 입력받기
    fgets(str, STRLEN, stdin);

    //2. 개행문자 제거
    int i=0;
    while(*(str+i)!='\0'){
        if(*(str+i)=='\n'){
            *(str+i)='\0';
            break;
        }
        i++;
    }

    //3. 크로아티아 알파벳 세기
    int cnt=0;
    for(i=0;*(str+i)!='\0';i++){
        if(*(str+i)=='c'){
            if(*(str+i+1)=='='||*(str+i+1)=='-'){
                cnt++;
            }
        }
        if(*(str+i)=='d'){
            if(*(str+i+1)=='-'){
                cnt++;
            }
            else if(*(str+i+1)=='z'&&*(str+i+2)=='='){
                cnt++;
                //'dz='인 경우 3글자 이므로 i를 1번 더 증가시켜야 함
                i++;
            }
        }
        if(*(str+i)=='l'){
            if(*(str+i+1)=='j'){
                cnt++;
            }
        }
        if(*(str+i)=='n'){
            if(*(str+i+1)=='j'){
                cnt++;
            }
        }
        if(*(str+i)=='s'){
            if(*(str+i+1)=='='){
                cnt++;
            }
        }
        if(*(str+i)=='z'){
            if(*(str+i+1)=='='){
                cnt++;
            }
        }
    }
    //printf("%d\n", strlen(str));
    printf("%d\n",strlen(str)-cnt);

    return 0;
}
