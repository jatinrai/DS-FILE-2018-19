/* Write a program to accept N numbers from the user and store them in an array.
Then, accept another number from the user and search that using Linear Search. */

#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,ele,flag=0;
cout<<"Enter the size of array: ";
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"\nEnter the element to search: ";
cin>>ele;
for(i=0;i<n;i++)
{
    if(a[i]==ele)
    {
        cout<<"\nPosition of "<<ele<<" is: "<<i+1;
        flag=1;
        break;
    }
}
if(flag==0)
    cout<<"\nElement not found\n";
return 0;
}
