#include <stdio.h>
#include <conio.h>
int k=0,result;
int menu()
{
    int ch;
    printf("\n\n\t\tResult=%d\n\n",result);
    printf("\n1 Add");
    printf("\n2 Sub");
    printf("\n3 Mul");
    printf("\n4 Div");
    printf("\n5 Rem");
    printf("\n6 Clear");
    printf("\n7 Exit");
    printf("\n\nEnter your choice :- ");
    scanf("%d",&ch);
    return(ch);
}
void add()
{
    int a,b;
    if(k)
    {
        printf("Enter a number :-");
        scanf("%d",&a);
        result=result+a;
        printf("\nResult=%d",result);
    }
    else
    {
        printf("Enter two number :-\n");
        scanf("%d%d",&a,&b);
        result=a+b;
        printf("\nResult=%d",result);
    }
}
void sub()
{
    int a,b;
    if(k)
    {
        printf("Enter a number :-");
        scanf("%d",&a);
        result=result-a;
        printf("\nResult=%d",result);
    }
    else
    {
        printf("Enter two number :-\n");
        scanf("%d%d",&a,&b);
        result=a-b;
        printf("\nResult=%d",result);
    }
}
void mul()
{
    int a,b;
    if(k)
    {
        printf("Enter a number :-");
        scanf("%d",&a);
        result=result*a;
        printf("\nResult=%d",result);
    }
    else
    {
        printf("Enter two number :-\n");
        scanf("%d%d",&a,&b);
        result=a*b;
        printf("\nResult=%d",result);
    }
}
void div()
{
    int a,b;
    if(k)
    {
        printf("Enter a number :-");
        scanf("%d",&a);
        result=result/a;
        printf("\nResult=%d",result);
    }
    else
    {
        printf("Enter two number :-\n");
        scanf("%d%d",&a,&b);
        result=a/b;
        printf("\nResult=%d",result);
    }
}
void rem()
{
    int a,b;
    if(k)
    {
        printf("Enter a number :-");
        scanf("%d",&a);
        result=result%a;
        printf("\nResult=%d",result);
    }
    else
    {
        printf("Enter two number :-\n");
        scanf("%d%d",&a,&b);
        result=a%b;
        printf("\nResult=%d",result);
    }
}
void clear()
{
    printf("\nOld data clear");
    result=0;
    k=0;
}

void main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
        case 1:
            add();
            k=1;
            break;
        case 2:
            sub();
            k=1;
            break;
        case 3:
            mul();
            k=1;
            break;
        case 4:
            div();
            k=1;
            break;
        case 5:
            rem();
            k=1;
            break;
        case 6:
            clear();
            k=0;
            break;
        case 7:
            exit(0);
        default:
            printf("\nInvalid Choice");
        }
        getch();
    }
}


