#include <stdio.h>
float convert1 (float c)
{
    return ((9*c)/5)+32;
}
float convert2 (float f)
{
    return ((f-32)*5)/9;
}
float convert3 (float c)
{
    return c+273.15;
}
float convert4 (float k)
{
    return k-273.15;
}
float convert5 (float f)
{
    return (((f-32)*5)/9)+273.15;
}
float convert6 (float k)
{
    return (((k-273.15)*9)/5)+32;
}
float convert7 (float c)
{
    return ((c*9)/5)+491.67;
}
float convert8 (float r)
{
    return ((r-491.67)*5)/9;
}
float convert9 (float f)
{
    return f+459.67;
}
float convert10 (float r)
{
    return r-459.67;
}
float convert11 (float k)
{
    return (k*9)/5;
}
float convert12 (float r)
{
    return (r*5)/9;
}
int main()
{
    float temp;
    int n;
    char in,out;
    for (int i=0; ; i++)
    {
        printf("Enter 1 for continue and 0 for terminate: ");
        scanf("%d",&n);
        printf("-----------------------------------------------------------------\n");
        if (n==1)
        {
            printf("Enter the input temperature's first letter: ");
            scanf(" %c",&in);
            printf("Enter the temperature: ");
            scanf("%f",&temp);
            printf("Enter the first letter of the temperature you want to convert: ");
            scanf(" %c",&out);
            if (in==out)
                printf("The result: %.2f\n",temp);
            else
            {
                if (in=='c' || in=='C')
                {
                    if (out=='f' || out=='F')
                        printf("The result: %.2f\n",convert1(temp));
                    else if (out=='k' || out=='K')
                        printf("The result: %.2f\n",convert3(temp));
                    else if (out=='r' || out=='R')
                        printf("The result: %.2f\n",convert7(temp));
                    else
                        printf("Wrong entry\n");
                }
                else if (in=='f' || in=='F')
                {
                    if (out=='c' || out=='C')
                        printf("The result: %.2f\n",convert2(temp));
                    else if (out=='k' || out=='K')
                        printf("The result: %.2f\n",convert5(temp));
                    else if (out=='r' || out=='R')
                        printf("The result: %.2f\n",convert9(temp));
                    else
                        printf("Wrong entry\n");
                }
                else if (in=='k' || in=='K')
                {
                    if (out=='c' || out=='C')
                        printf("The result: %.2f\n",convert4(temp));
                    else if (out=='f' || out=='F')
                        printf("The result: %.2f\n",convert6(temp));
                    else if (out=='r' || out=='R')
                        printf("The result: %.2f\n",convert11(temp));
                    else
                        printf("Wrong entry\n");
                }
                else if (in=='r' || in=='R')
                {
                    if (out=='c' || out=='C')
                        printf("The result: %.2f\n",convert8(temp));
                    else if (out=='f' || out=='F')
                        printf("The result: %.2f\n",convert10(temp));
                    else if (out=='k' || out=='K')
                        printf("The result: %.2f\n",convert12(temp));
                    else
                        printf("Wrong entry\n");
                }
                else
                    printf("Wrong entry\n");
            }
            printf("-----------------------------------------------------------------\n");
        }
        else if (n==0)
        {
            printf("Thank you\n");
            break;
        }
        else
        {
            printf("Wrong entry\n");
            continue;
        }
    }
    return 0;
}
