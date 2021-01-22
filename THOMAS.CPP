#include<iostream.h>
//using namespace std;
int main()
{
    int n;
    double a[50],b[50],c[50],d[50],e[50],f[50],u[50];
    cout<<"Entre the number of equations: "<<endl;
    cin>>n;
    a[1]=0,c[n]=0;
    cout<<"Entre the values of a's: "<<endl;
    for(int i=2;i<=n;i++)
       cin>>a[i];
    cout<<"Entre the values of b's: "<<endl;
    for(int j=1;j<=n;j++)
       cin>>b[j];
    cout<<"Entre the values of c's: "<<endl;
    for(int k=1;k<=n-1;k++)
       cin>>c[k];
    cout<<"Entre the values of d's: "<<endl;
    for(int l=1;l<=n;l++)
       cin>>d[l];
    e[1]=c[1]/b[1];
    f[1]=d[1]/b[1];
    for(int m=2;m<=n;m++)
    {
       e[m]=c[m]/(b[m]-a[m]*e[m-1]);
       f[m]=(d[m]-a[m]*f[m-1])/(b[m]-a[m]*e[m-1]);
    }
    u[n]=f[n];
    for(int p=n-1;p>=1;p--)
       u[p]=f[p]-e[p]*u[p+1];
    cout<<"The unknown values are: "<<endl;
    for(int i1=1;i1<=n;i1++)
	 cout<<u[i1]<<endl;
    return 0;
}





