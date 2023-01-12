//condition "ar[I]=ar[ar[I]]". 
#include"iostream"
using namespace std;
int main()
{
    int n=0,i=0;
    cout<<"size of an array: ";
    cin>>n;
    int ar[n],arr[n],a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i]=ar[i];
    }
    cout<<"Rearranged array is: ";
    for(i=0;i<n;i++)
    {
        a[i]=arr[ar[i]];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
