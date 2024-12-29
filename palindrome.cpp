#include<iostream>
using namespace std;
bool cp(int num){

    int rem=0;
    int rev=0;
    int n=num;
    
    for(num;num!=0;){

        rem=num%10;
        rev=(rev*10)+rem;
        num=(int)num/10;

    }
   
    if(n!=rev||n<0){
        return false;
    }
    else{

        return true;

    }

}
int main(){

    int num;
    cin>>num;
    if(cp(num)){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }

return 0;

}

//aayushhh