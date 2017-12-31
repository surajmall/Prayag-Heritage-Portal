#include <iostream>
using namespace std;

int main()
{
int a,b,t,c,n,num=0;
cin >> t;
while(t--)
{
cin >> a >> b >> c >> n;
int x[n];
x[0]=a;
x[1]=b;
for(int i=2;i<n;i++)
{
x[i]= (x[i-1]*c + x[i-2]) % 10;
}
for(int i=0;i<n;i++)
{
num = num*10 +x[i];
}
if(num % 41 == 0)
cout << "YES" <<endl;
else
cout << "NO" << endl;
num=0;
}
return 0;
}

