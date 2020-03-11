#include<iostream>
using namespace std;

int main()
{

    int a[50],i,j,n,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";

    for(i=0;i<n;++i)
    cin>>a[i];

    for(i=0;i<n;++i)
    {

        for(j=0;j<(n-1);++j)
            if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    cout<<"Sorted elements: ";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
    return 0;
}
