#include<iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}

    int main()
    {
        int n,i;
        cout<<"\nEnter the number of elements to be sorted: ";
        cin>>n;




        int arr[n];
            cout<<"Enter elements of the array: ";
             for(i=0;i<n;i++)
             {
             cin>>arr[i];
             }

        selectionSort(arr,n);
        cout<<"\nSorted Elements: ";
        for(i=0;i<n;i++)
            cout<<" "<<arr[i];
        return 0;
    }

