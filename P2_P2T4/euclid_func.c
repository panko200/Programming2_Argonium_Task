#include <stdio.h>

int gcd(int m,int n){
    int r = m%n;
    if(r==0)return n;
    else gcd(n,r);
}