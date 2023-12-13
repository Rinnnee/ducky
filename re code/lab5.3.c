#include<stdio.h>

void check_letter(char);
void to_uppercase(char);
void to_lowercase(char);

int main(){
    char c;
    printf("Enter a character> ");
    scanf("%c",&c);
    check_letter(c);
}

void check_letter(char c){
    if('a'<= c && c<='z'){
        to_uppercase(c);
    }
    else if('A'<= c && c<='Z'){
        to_lowercase(c);
    }
    else{
        printf("%c is not a character.",c);
    }
}

void to_uppercase(char c){
    printf("%c is converted to %c.",c,c-32);
}

void to_lowercase(char c){
    printf("%c is converted to %c.",c,c+32);
}