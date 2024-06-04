#include <iostream>
#include <math.h>
using namespace std;
int det(int b[][1000],int n) 
{
 int i,j,sum = 0,c[n][1000];
 if(n==2)
  {                                        
    sum = b[0][0]*b[1][1] - b[0][1]*b[1][0];
    return sum;
  }
 for(int p=0;p<n;p++)
 {
  int h = 0,k = 0;
  for(i=1;i<n;i++)
  {
    for( j=0;j<n;j++)
    {
     if(j==p)
      continue;
     c[h][k] = b[i][j];
     k++;
     if(k == n-1)
      {
         h++;
         k = 0;
      }
       sum = sum + b[0][p]*pow(-1,p)*det(c,n-1);

    }
}}
 return sum;

}
int main()
{
	int n,m,q,p;
	cout<<"enter n , m , p , q : ";
	cin>>n>>m>>q>>p;
	int A[n][m];
	int B[q][p];
	
while(1)
{
		cout<<"1)Get the matrix A\n2)Get the matrix B\n3)Transfer to A to B\n4)Transfer to B to A\n5)A=A*B\n6)A=A+B\n7)A=A/B\n8)A=A-B\n9)A=a*A\n10)det A\n11)detB\n12)print A\n13)print B\n";
	int select;
	cin>>select;
	if (select==1)
	{
		cout<<"maghadir A : \n";
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>A[i][j];
	}
	else
	if (select==2)
	{
		for(int i=0;i<q;i++)
		for(int j=0;j<p;j++)
		cin>>B[i][j];
	}
	else
	if (select==3)
	{
		if (n!=q || m!=p)
		{
			cout<<"error!\n";
		}
			
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				B[i][j]=A[i][j];
			}
		cout<<"anjam shod!\n\n\n";
		}
	
	else
	if (select==4)
	{
			if (n!=q || m!=p)
			cout<<"error!";
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				A[i][j]=B[i][j];
			}
			cout<<"anjam shod !\n\n\n";
		}
	else
	if (select==5)
	{
		if (m!=q)
		cout<<"error!";
		else
		{
			int c[m][q]={0};
	   for(int i = 0; i < n; i++){
        for( int j = 0; j < q; j++){
            for(int k = 0; k < m; k++)
                c[i][j] +=A[i][k] * B[k][j];
        }
    }
    cout<<"A*B : \n";
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<q;j++)
    	cout<<c[i][j];
    	cout<<endl;
	}
		}
	}
	else
	if (select==6)
	{
		if (n!=q || m!=p)
			cout<<"error!\n";
			else
			{
			
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
			A[i][j]=A[i][j]+B[i][j];
			}
			cout<<"A+B anjam shod !\n\n\n";
		}
	}
		else
	if (select==7)
	{
			if (n!=q || m!=p)
		
		    cout<<"error!\n";
		    else{
			
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				A[i][j]=A[i][j]/B[i][j];
			}
			cout<<"A/B anjam shod !\n\n\n";
		}
		
	}
			else
	if (select==8)
	{
			if (n!=q || m!=p)
			cout<<"error!";
			else
			{
			
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				A[i][j]=A[i][j]-B[i][j];
			}
			cout<<"A-B anjam shod!\n\n\n";
		}
			
		}
	
			else
	if (select==9)
	{
		int a;
		cout<<"Enter a : ";
		cin>>a;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			A[i][j]*=a;
		}
		cout<<a<<" *A anjam shod!\n\n\n";
	}
	else
	if (select==10)
	{
		if (n!=m)
		cout<<"error!";
		else
		{
			int a[n][1000];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				a[i][j]=A[i][j];
			}
		cout<<"detA : "<<det(a,n);
		}
	}
	else
	if (select==11)
	{
	if (p!=q)
		cout<<"error!";
		else
		{
			int b[q][1000];
			for(int i=0;i<q;i++)
			{
				for(int j=0;j<p;j++)
				b[i][j]=B[i][j];
			}
		cout<<"detB : "<<det(b,q);
		}	
	}
	else
	if (select==12)
	
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
	if (select==13)
	
	{
		for(int i=0;i<q;i++)
		{
			for(int j=0;j<p;j++)
			{
				cout<<B[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}


}
