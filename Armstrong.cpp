// Armstrong.cpp
#include<iostream> 
#include<cmath> 
using namespace std; 
int main() 
{ 
    int num,num1,num2,r,sum=0, digit=0; 
    cout<<"Enter No: "; 
    cin>>num; 
    num1=num; 
    num2 = num;
    
    while(num != 0)
    {
        r=num%10;
        num=num/10;
        digit ++;
    }
  
    while(num2!=0) 
    { 
    r=num2%10; 
    sum=sum+pow(r,digit); 
    num2=num2/10; 
    } 

    if(sum==num1) 
    cout<<"Number is Armstong number"; 
    else 
    cout<<"Number is not Armstong number"; 
    return 0; 
} 
