#include <iostream>

using namespace std;
int lsearch(int n, int x[40], int item);

int main()
{
   int a[40],n,item, pos;
   cout<<"enter number of elements in data"<<endl;
   cin>>n;
   cout<<"enter data"<<endl;
   for(int j=0;j<n;j++)
        cin>>a[j];
   cout<<"enter item to look for"<<endl;
   cin>>item;
   pos = lsearch(n,a,item);
   cout<<"the position of your element is:  "<<pos<<endl;

   return 0;
}
int lsearch(int n, int x[40], int item)
{
    int position=0;
    for(int i=0;i<n;i++)
        {
            if(x[i]==item)
                position= i+1;
            else
                continue;
        }
    return position;
}
