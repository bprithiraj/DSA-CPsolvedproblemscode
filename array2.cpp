#include<iostream>
int main()
{
	int n;
	std::cin >>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		std::cout<<array[i];
	}
	int max=array[0],min=array[0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(array[j]>max)
				max=array[j];
			if(array[j]<min)
				min=array[j];
		}
	}
		std::cout<<max<<"\n"<<min;
    

}