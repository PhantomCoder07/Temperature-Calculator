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
int main()
{
    float temp;
    int n,m,c[1000];
    char in,out;
    float given[1000],res[1000];
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
            given[i]=temp;
            printf("Enter the first letter of the temperature you want to convert: ");
            scanf(" %c",&out);
            if (in==out && (in=='c' || in=='C' || in=='f' || in=='F' || in=='k' || in=='K'))
            {
                printf("The result: %.2f\n",temp);
                res[i]=temp;
                if (in=='c' || in=='C')
                {
                    c[i]=7;
                }
                else if (in=='f' || in=='F')
                {
                    c[i]=8;
                }
                else if (in=='k' || in=='K')
                {
                    c[i]=9;
                }
            }
            else
            {
                if (in=='c' || in=='C')
                {
                    if (out=='f' || out=='F')
                    {
                        printf("The result: %.2f\n",convert1(temp));
                        res[i]=convert1(temp);
                        c[i]=1;
                    }
                    else if (out=='k' || out=='K')
                    {
                        printf("The result: %.2f\n",convert3(temp));
                        res[i]=convert3(temp);
                        c[i]=2;
                    }
                    else
                    {
                        printf("Wrong entry\n");
                        c[i]=0;
                    }
                }
                else if (in=='f' || in=='F')
                {
                    if (out=='c' || out=='C')
                    {
                        printf("The result: %.2f\n",convert2(temp));
                        res[i]=convert2(temp);
                        c[i]=3;
                    }
                    else if (out=='k' || out=='K')
                    {
                        printf("The result: %.2f\n",convert5(temp));
                        res[i]=convert5(temp);
                        c[i]=4;
                    }
                    else
                    {
                        printf("Wrong entry\n");
                        c[i]=0;
                    }
                }
                else if (in=='k' || in=='K')
                {
                    if (out=='c' || out=='C')
                    {
                        printf("The result: %.2f\n",convert4(temp));
                        res[i]=convert4(temp);
                        c[i]=5;
                    }
                    else if (out=='f' || out=='F')
                    {
                        printf("The result: %.2f\n",convert6(temp));
                        res[i]=convert6(temp);
                        c[i]=6;
                    }
                    else
                    {
                        printf("Wrong entry\n");
                        c[i]=0;
                    }
                }
                else
                {
                    printf("Wrong entry\n");
                    c[i]=0;
                }
            }
            printf("-----------------------------------------------------------------\n");
        }
        else if (n==0)
        {
            printf("Thank you\n");
            m=i;
            break;
        }
        else
        {
            printf("Wrong entry\n");
            continue;
        }
    }
    printf("\n-----------------------------------------------------------------\n");
    printf("Here is the history:\n");
    printf("Input temperature\t Output temperature\n");
    for (int i=0; i<m; i++)
    {
        if (c[i]==1)
            printf("%.2f Celsius\t\t %.2f Fahrenheit\n",given[i],res[i]);
        else if (c[i]==2)
            printf("%.2f Celsius\t\t %.2f Kelvin\n",given[i],res[i]);
        else if (c[i]==3)
            printf("%.2f Fahrenheit\t %.2f Celsius\n",given[i],res[i]);
        else if (c[i]==4)
            printf("%.2f Fahrenheit\t %.2f Kelvin\n",given[i],res[i]);
        else if (c[i]==5)
            printf("%.2f Kelvin\t\t %.2f Celsius\n",given[i],res[i]);
        else if (c[i]==6)
            printf("%.2f Kelvin\t\t %.2f Fahrenheit\n",given[i],res[i]);
        else if (c[i]==7)
            printf("%.2f Celsius\t\t %.2f Celsius\n",given[i],res[i]);
        else if (c[i]==8)
            printf("%.2f Fahrenheit\t %.2f Fahrenheit\n",given[i],res[i]);
        else if (c[i]==9)
            printf("%.2f Kelvin\t\t %.2f Kelvin\n",given[i],res[i]);
        else if (c[i]==0)
            printf("Entry was wrong\n");
    }
    return 0;
}
