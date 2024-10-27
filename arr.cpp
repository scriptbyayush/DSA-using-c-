#include<iostream>
using namespace std;

int cal(int f,int s,int t){
if(f+s==t){
    return true;
}else{

    return false;
}
 
}

int main()
{

int count;
cin>>count;

int arr[]={};

for(int i=0;i<count;i++){

cout<<"enter the "<<i+1<<" element :";
cin>>arr[i];
cout<<"\n";
        
}
int target;
cout<<"enter the target sum :";

cin>>target;

int flag=0;

for(int i=0;i<9;i++)
{
    for(int j=0;j<9;j++)
    {
    if(cal(arr[i],arr[j],target)){

        cout<<i<<j<<"\n";
        break;
        flag=1;
    }else{

       
    }
    }
    

}

return 0;
}