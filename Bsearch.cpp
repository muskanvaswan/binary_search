#include <iostream>

using namespace std;

int Bsearch(int n, int x[40], int item);

int main()
{
   int a[40],n,item, pos;
   cout<<"enter number of elements in data"<<endl;
   cin>>n;
   cout<<"enter data(in ascending order)"<<endl;
   for(int j=0;j<n;j++)
        cin>>a[j];
   cout<<"enter item to look for"<<endl;
   cin>>item;
   pos = Bsearch(n,a,item);
   cout<<"the position of your element is:"<<pos+1<<endl;

   return 0;
}
int Bsearch(int n, int x[40], int item)
{
    int position=0,mid,u=0,f,flag=0;
    f=n-1;
    mid=(u+f)/2;
    for(mid=n/2;mid>=0&&mid<=n;mid=(u+f)/2)
    {
        if(item==x[mid])
        {
            position=mid;
            flag=1;
            break;
        }
    else if(item>x[mid])
        {
            u=mid+1;
        }
    else
        {
           f=mid-1;
        }
    }
    if(flag==0)
        cout<<"iten is not a part of data"<<endl;
    return position;
}
