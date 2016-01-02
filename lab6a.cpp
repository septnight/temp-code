#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
using namespace std;

double caculate(double y)//计算总共的薪水
{
	y=y*0.09+200;
	return y;
}

void stat(int *s,double y)//用数组统计薪水分布
{
	int x=y/100;
	switch (x)
	{
		case 2:
			s[0]++;
			break;
		case 3:
			s[1]++;
			break;
		case 4:
			s[2]++;
			break;
		case 5:
			s[3]++;
			break;
		case 6:
			s[4]++;
			break;
		case 7:
			s[5]++;
			break;
		case 8:
			s[6]++;
			break;
		case 9:
			s[7]++;
			break;
		default:
			s[8]++;
			break;
	}
}
int main()
{
	int status[9]={};//声明用于统计分布的数组
	double x;
	while (true)
	{
		cout<<"Enter employee gross sales (-1 to end): ";
		cin>>x;
		if(x==-1) break;//以输入-1作为结束输入的标志
		else{
			cout<<"Employee Commission is $"<<setprecision(2)<<fixed<<caculate(x)<<endl;
			double y=caculate(x);
			stat(status,y);
		}
	}
	cout<<"Employees in the range:"<<endl;
	for (int i=0;i<8;i++)
	{
		cout<<"$"<<i+2<<"00-$"<<i+2<<"99 :"<<status[i]<<endl;
	}
	cout<<"Over $1000: "<<status[8]<<endl;;
}