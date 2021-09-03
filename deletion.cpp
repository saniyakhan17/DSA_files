#include<iostream>
#include<stdlib.h>
using namespace std;
void deletion(int ar[], int size) {
    int pos,j;
    cout<<"\nEnter the position of the element you want to delete";
    cin>>pos;
    if (pos>=size+1)
    {
        cout<<"\nDeletion is not possible!";
        exit(0);
    }
    else
    {
        for(j=pos-1;j<size-1;j++)
            ar[j]=ar[j+1];
        cout<<"\nResultant array: ";
        for(j=0;j<size-1;j++)
        cout<<ar[j]<<" ";
    }
    
}
int main()
{
    int a[50], i, s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    cout<<"\nEnter the elements of the array: ";
    for(i=0;i<s;i++)
    cin>>a[i];
    cout<<"\nCheck the entered values: ";
    for(i=0;i<s;i++)
    cout<<a[i]<<" ";
    deletion(a,s);
    return 0;
}
