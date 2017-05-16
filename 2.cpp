/*一个文件夹可以加入文件，binding 20；也可以摘除文件，remove 10；
如果摘除文件数目大于加入文件数目，则显示文件夹文件数目为current 0；
当输入end结束命令时显示当前文件个数。(大体意思这样，数字可能有出入)
输入样例：binding 20

                  remove 10

                  binding 30

                  remove 10

                  end

输出样例：current 30*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int num;
	int current_num=0;
	while(1)
	{
		cin>>s;
		if(s=="binding")
		{
			cin>>num;
			current_num=current_num+num;
		}
		if(s=="remove")
		{
			cin>>num;
			if(num>current_num)
				current_num=0;
			else
			{
				current_num=current_num-num;
			}
		}
		if(s=="end"){
			cout<<"current "<<current_num<<endl;
		}
	}
}
