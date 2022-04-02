#include <iostream>  
using namespace std;  
int main(){  
    int array[10];
    int num;
    int index;    
    cout<<"Enter the number what you want to see as binary: ";    
    cin>>num;    
for(index=0; num>0; index++){    
    array[index]=num%2;    
    num= num/2;  
}  
cout<<"Binary of the number that you entered:";    
for(index=index-1 ;index>-1 ;index--){    
    cout<<array[index];    
}

}  
