#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h> 
void main()
{
	int a,b,i=20,j=0,x,f,h,right=0,wrong=0,s;
	float c,d,k;
    srand( (unsigned)time( NULL ) );
	printf("��-----------��������-----------��\n");
	printf("��ӭ��������׶� \n");
	do
	
	{ 
		
		a=rand()%100+1;
		b=rand()%100+1;
		x=rand()%4;
		switch(x)
		{
			
		case 0:
			printf("%d+%d=",a,b);
			scanf("%d",&f);
			if(f==a+b)
			{
				printf("������ȷ!\n");right++;
			}
			else
			{
				printf("�������!\n");wrong++;
			}
			break;
			
		case 1:
			printf("%d-%d=",a,b);
			scanf("%d",&f);
			if(f==a-b)
			{
				printf("������ȷ!\n");right++;
			}
			else
			{
				printf("�������!\n");wrong++;
			}
			break;
		case 2:
			printf("%d*%d=",a,b);
			scanf("%d",&f);
			if(f==a*b)
			{
				printf("������ȷ!\n");right++;
			}
			else
			{
				printf("�������!\n");wrong++;
			}
			break;
		case 3:
			printf("%d/%d=",a,b);
			scanf("%d",&f);
			if(f==a/b)
			{
				printf("������ȷ!\n");right++;
			}
			else
			{
				printf("�������!\n");wrong++;
			}
			break;
		}
		
	}
	while(right!=i);
	
	printf("��ϲ����ȷ���20��������Ŀ������Ҫ��ɸ����Ѷȵ���������y/n \n");
	scanf("%d",&s);
	if(getchar()=='y')
	{
		printf("����Ҫ��ս���ٵ��⣺");
		scanf("%d",&h);
		for(j=0;j<h;j++)
		{
			c=float(rand()*0.001+1);
			d=float(rand()*0.001+1);
			x=rand()%4;
			
			switch(x)
			{
			case 0:printf("%.3f+%.3f=\n",c,d);
				
				
				k=c+d;
				k=int(k*100+0.5)/100.0;
				Sleep (6000);
				printf("%.2f\n",k);
				break;
			case 1:printf("%.3f-%.3f=\n",c,d);
				k=c-d;
				if(k>0)
				{
					k = int(k*100+0.5)/100.0;
				}
				else
				{
					k = int(k*100-0.5)/100.0;
				}
			Sleep (6000);
				
				printf("%.2f\n",k);break;
			case 2:printf("%.3f*%.3f=\n",c,d);
				k=c*d;
				k=int(k*100+0.5)/100.0;
				Sleep (6000);
				printf("%.2f\n",k);
				break;
				
			case 3:printf("%.3f/%.3f=\n",c,d);
				k=c/d;
				k=int(k*100+0.5)/100.0;
				Sleep (6000);
				
				printf("%.2f\n",k);break;
				
				
				
			}

		}
			printf("�������\n");
	}
	
	else{
		printf("�ڴ�����´η��ʣ�\n");
	}
	
}
