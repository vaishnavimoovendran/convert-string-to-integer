#include<stdio.h>
#include<stdlib.h>
fn(char *in1){
int g=atoi(in1);
int d=g%11;
printf("%d",d);
}

int main(){
    char a[100];
    char *in1=a;
    scanf("%s",in1);
 fn(in1);
}
