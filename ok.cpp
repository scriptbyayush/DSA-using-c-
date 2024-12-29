#include <iostream>
using namespace std;


int demo()
{

     int arr[]={1,2,3,4,5};

    int narr[]={};

    int j=4;


    for(int i=0;i<5;i++)
    {
        narr[i]=arr[j];
        j--;
    }

   for(int i=0;i<5;i++)
   {
    cout<<narr[i]<<"\n";
   }
    return 0;
}

int main() {

    demo();
  int arr[]={1,2,3,4,5};

    int narr[]={};

    int j=4;


    for(int i=0;i<5;i++)
    {
        narr[i]=arr[j];
        j--;
    }

   for(int i=0;i<5;i++)
   {
    cout<<narr[i]<<"\n";
   }

    return 0;
}
