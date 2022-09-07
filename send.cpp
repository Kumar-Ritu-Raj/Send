#include <iostream>
using namespace std;
int main()
{
    string str[100];
    int u[100];
    int g[100];
    int q[100];
    int price=0;
    int max=0;
    int now=0,a,count=1;
    for(int i=0;i<4;i++)
    {
        cout<<count<<" Product = ";
        cin>>str[i];
        cout<<"Unit= ";
        cin>>u[i];
        cout<<"GST= ";
        cin>>g[i];
        cout<<"Quantity= ";
        cin>>q[i];
        count++;
    }
    for(int i=0;i<4;i++)
    {
       price=price+ (u[i]+u[i]*g[i]/100)*q[i];
       if(g[i]>=max)
       {
           max=g[i];
       }
    }
    cout<<"Price = "<<price<<"\n"<<"Max =" <<max;
    cout<<"Do you want to add more data? \n Press 1";
    cin>>now;
    if(now==1)
    {
        cout<<"\nHow many data you want to add";
        cin>>a;
            for(int i=4;i<a+4;i++)
    {
        cout<<count<<" Product = ";
        cin>>str[i];
        cout<<"Unit ";
        cin>>u[i];
        cout<<"GST ";
        cin>>g[i];
        cout<<"Quantity ";
        cin>>q[i];
        count++;
    }
    cout<<"\nProducts details are these :- \n"
      for(int i=0;i<a+4;i++)
    {
        
        cout<<str[i]<<" "<<u[i]<<" "<<g[i]<<" "<<q[i]<<"\n";
    }
        
    }
    return 0;
}

