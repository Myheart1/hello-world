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
            printf("%d �� %d =",c,e);
            break;
        }
        scanf("%d",&f);
        switch(x)
        {
        case 0:
            if(f==c+e)
            {
                printf("������ȷ!\n");right++;
            }
            else
            {
                printf("�������!\n");wrong++;
            }
            break;
        case 1:
            if(f==c-e)
            {
                printf("������ȷ!\n");right++;
            }
            else
            {
                printf("�������!\n");wrong++;
            }
            break;
        case 2:
            if(f==c*e)
            {
                printf("������ȷ!\n");right++;
            }
            else
            {
                printf("�������!\n");wrong++;
            }
            break;
        case 3:
            if(f==c/e)
            {
                printf("������ȷ!\n");right++;
            }
            else
            {
                printf("�������!\n");wrong++;
            }
            break;
        }
        printf("�������������q���˳�!\n");
    //    scanf("%d",&quit);
    //    if(quit==0)
        fflush(stdin);
        if(getchar()=='q')
            break;
    }
    printf("�����%d���⣬�����%d����\n",right,wrong);
}