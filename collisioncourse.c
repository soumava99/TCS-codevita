#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int Cars,x,y,velocity,time[100],count=0,i=0,j=0;
	scanf("%d",&Cars);
	for(i=0;i<Cars;i++)
	{
		scanf("%d %d %d",&x,&y,&velocity);
		time[i] = (sqrt(x*x + y*y))/velocity;
			
	}
	for(i=0;i<Cars;i++)	
	{
		for(j=0;j<Cars;j++)
		{
			if(i==j)
				continue;
			if(time[i]==time[j])
				count++;
		}
	}
	printf("%d",count/2);
	return 0;
}

