#include<stdio.h>

int sum(int a,int b);

int main(){
    int a, b;
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    int ketQua= sum(a,b);
    printf("tổng của a và b là: %d\n", ketQua);

    return 0;

}


int sum(int a, int b){
    return a+b;
};