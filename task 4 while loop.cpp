#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=3)
    {
        cout<<"week"<<i<<endl;
        int j=1;
        while(j<=7)
        {
            cout<<"days"<<j<<endl;
            j++;
        }
      
        i++;
    }
    return 0;
}