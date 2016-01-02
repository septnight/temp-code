#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int recursiveMiniment(int p[],int n,int m)
{
	int x=p[n];
	if(n==m) return x;
	else
	{
		if(x>=p[n+1])
			return recursiveMiniment(p, n+1, m);
		else{
			p[n+1]=p[n];
			return recursiveMiniment(p, n+1, m);
		}
	}
}

int main()
{
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(1,1000);//initialize a random engine
	
	int body[10]={};
	for (int &item:body)
	{
		item=randomInt(engine);
	}
	for (int item:body)
	{
		cout<<item<<" ";
	}
	cout<<"The minimum number is:"<<recursiveMiniment(body, 0, 9)<<endl;
}

