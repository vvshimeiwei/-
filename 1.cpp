/*将一串字符串中的大写字母找出，原有空格保留，并按原有格式输出，如果原字
符串中相邻两个大写字母有两个或两个以上的空格按照一个输出。*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char X[100];
	int i,n;
	for(i=0;;i++)
	{
		scanf("%c",&X[i]);
		if(X[i]=='\n')
			break;
	}
	n=i+1;
	for(i=0;i<n;i++)
        printf("%c",X[i]);
	for(i=0;i<n;i++)
	{
		if(X[i]>='A'&&X[i]<='Z')
			printf("%c",X[i]);
		else if((X[i]==' '&&X[i-1]!=' '&&(i-1)>=0)||X[0]==' ')
			printf("%c",X[i]);
	}
	return 0;
}
