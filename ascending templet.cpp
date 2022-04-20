//ascending order ma sort garney
#include<iostream>
using namespace std;
class Sort
{
 	int num[10];
 	public:
 		template<typename S>
 		S sorting()
		{
 			S i,j,temp;
 			cout<<endl<<"Sort 10 numbers";
 			for(i=0;i<10;i++)
				{
					cin>>num[i];
				}
		
			
			for(i=0;i<10;i++)
			{
				temp=0;
				for(j=i+1;j<10;j++)
				{
					if(num[i]>num[j])
					{
						temp=num[i];
						num[i]=num[j];
						num[j]=temp;
					}
				}
			}
			for(i=0;i<10;i++)
			{
				cout<<endl<<"The Ascending order will be"<<endl<<num[i];
			}
 		}
 		
};
int main()
{
	Sort obj1;
	obj1.sorting<int>();
	
}
