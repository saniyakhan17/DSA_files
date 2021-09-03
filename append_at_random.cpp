#include<iostream>
using namespace std;
void append(int ar[], int size) {
    int ap,j,pos;
    cout<<"\nTo enter an element at a position of your choice:\n";
    cout<<"\nEnter the position: ";
    cin>>pos;
    cout<<"\nEnter the element to append: ";
    cin>>ap;
    for(j=size-1; j>=pos-1;j--)
    {
        ar[j+1]=ar[j];
    }
    ar[pos-1]=ap;
    cout<<"\nThe new array is: ";
    for(j=0;j<=size;j++)
    cout<<ar[j]<<" ";
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
    append(a,s);
    return 0;
}
