#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double X[],int Y,double Z[]){
    Z[4] = INT_MIN; Z[5] = INT_MAX;
    Z[1] = 0; Z[2] = 1;
    for(int i = 0 ; i < Y ; i++){ 
    Z[0] += X[i];
    Z[2] *= X[i];
    Z[3] += (1/X[i]);
    if(X[i] > Z[4]) Z[4] = X[i];
    if(X[i] < Z[5]) Z[5] = X[i];
    }
    Z[0] /= Y;
    for(int i=0 ; i<Y ; i++) Z[1] += pow(X[i]-Z[0],2);
    Z[1] = sqrt((Z[1])/(Y));
    Z[2] = pow(Z[2],1.0/Y);
    Z[3] = Y/Z[3];

}