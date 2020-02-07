#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[])
{
    double av=0 , sd=0 , max=A[0] , min = A[0], sum=0 , avs=0;
    
    for (int i = 0; i < N ; i++)
    {
        
     sum+=A[i];
 		if (A[i]>max) max= A[i];
		if (A[i]<min) min= A[i];  
    avs+=pow(A[i],2);
         }
    
    av=sum/N; 
    
    sd = sqrt( (avs/N)-pow(av,2) );


    B[0]=av;
    B[1]=sd;
    B[2]=max;
    B[3]=min;


}