/*

输入字符串，输出字符串中指定字符个数。
例如：  串:a12341213b2  输入:1  输出：3

*/

#include<stdio.h>
#include<string.h>

/* 
    describe:处理串的函数
    input:串，指定字符
    output:字符在串中个数
*/
int fun(char *str,char ch){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ch)
            count++;
    }
    return count;
}

void main(){
    char str[100] ;
    int n ;
    char ch;
    printf("Enter string\n");
    gets(str);
    printf("Enter char\n");
    ch = getchar();
    n = fun(str,ch);
    printf("%d",n);
}