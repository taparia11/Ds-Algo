#include <iostream>
using namespace std;

char hexaDeciNum[100];
int i=0;
void decToHexa(int n)
{
    
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
        if(n==0)
        temp=0;
        else
        decToHexa(n);
}


int main(){
    int a=1953;
    decToHexa(a);
    cout<<hexaDeciNum;
    return 0;
}


