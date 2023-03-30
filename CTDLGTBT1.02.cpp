#include <stdio.h>
#include <conio.h>
#include <Math.h> 
double S(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * S(n - 1);
    }
}


int main() {
    int n;
    float x;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("nhap vao x ");
    scanf("%f",&x);
    double Tong = 0;
    for (int i = 1 ; i <= n ; i++){
        Tong += (pow(x,i) / S(i));
    }
    printf ("Tong la : %f", Tong ) ;
    return 0;
}
