#include<stdio.h>
#include<stdlib.h>
void main()
{
    int b=0,c,d=0,e,f;
    int x,right=0,wrong=0;
    while(1)
    {
    x=rand()%4;
    c=rand()%100;
    e=rand()%100;
        switch(x)
        {
        case 0:
            printf("%d + %d =",c,e);
            break;
        case 1:
            printf("%d - %d =",c,e);
            break;
        case 2:
            printf("%d * %d =",c,e);
            break;
        case 3:
            printf("%d ÷ %d =",c,e);
            break;
        }
        scanf("%d",&f);
        switch(x)
        {
        case 0:
            if(f==c+e)
            {
                printf("计算正确!\n");right++;
            }
            else
            {
                printf("计算错误!\n");wrong++;
            }
            break;
        case 1:
            if(f==c-e)
            {
                printf("计算正确!\n");right++;
            }
            else
            {
                printf("计算错误!\n");wrong++;
            }
            break;
        case 2:
            if(f==c*e)
            {
                printf("计算正确!\n");right++;
            }
            else
            {
                printf("计算错误!\n");wrong++;
            }
            break;
        case 3:
            if(f==c/e)
            {
                printf("计算正确!\n");right++;
            }
            else
            {
                printf("计算错误!\n");wrong++;
            }
            break;
        }
        printf("按任意键继续，q则退出!\n");
    //    scanf("%d",&quit);
    //    if(quit==0)
        fflush(stdin);
        if(getchar()=='q')
            break;
    }
    printf("共答对%d道题，共答错%d道题\n",right,wrong);
}