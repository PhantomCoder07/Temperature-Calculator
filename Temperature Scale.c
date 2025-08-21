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
    int n,m,c[1000];
    char in,out;
    float given[1000],res[1000];
    char sres[5][15]={"Celsius","Fahrenheit","Kelvin","Rankine"};
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
            if (in==out && (in=='c' || in=='C' || in=='f' || in=='F' || in=='k' || in=='K' || in=='r' || in=='R'))
            {
                printf("The result: %.2f\n",temp);
                res[i]=temp;
                if (in=='c' || in=='C')
                {
                    c[i]=13;
                }
                else if (in=='f' || in=='F')
                {
                    c[i]=14;
                }
                else if (in=='k' || in=='K')
                {
                    c[i]=15;
                }
                else if (in=='r' || in=='R')
                {
                    c[i]=16;
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
                    else if (out=='r' || out=='R')
                    {
                        printf("The result: %.2f\n",convert7(temp));
                        res[i]=convert7(temp);
                        c[i]=3;
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
                        c[i]=4;
                    }
                    else if (out=='k' || out=='K')
                    {
                        printf("The result: %.2f\n",convert5(temp));
                        res[i]=convert5(temp);
                        c[i]=5;
                    }
                    else if (out=='r' || out=='R')
                    {
                        printf("The result: %.2f\n",convert9(temp));
                        res[i]=convert9(temp);
                        c[i]=6;
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
                        c[i]=7;
                    }
                    else if (out=='f' || out=='F')
                    {
                        printf("The result: %.2f\n",convert6(temp));
                        res[i]=convert6(temp);
                        c[i]=8;
                    }
                    else if (out=='r' || out=='R')
                    {
                        printf("The result: %.2f\n",convert11(temp));
                        res[i]=convert11(temp);
                        c[i]=9;
                    }
                    else
                    {
                        printf("Wrong entry\n");
                        c[i]=0;
                    }
                }
                else if (in=='r' || in=='R')
                {
                    if (out=='c' || out=='C')
                    {
                        printf("The result: %.2f\n",convert8(temp));
                        res[i]=convert8(temp);
                        c[i]=10;
                    }
                    else if (out=='f' || out=='F')
                    {
                        printf("The result: %.2f\n",convert10(temp));
                        res[i]=convert10(temp);
                        c[i]=11;
                    }
                    else if (out=='k' || out=='K')
                    {
                        printf("The result: %.2f\n",convert12(temp));
                        res[i]=convert12(temp);
                        c[i]=12;
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
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[0],res[i],sres[1]);
        else if (c[i]==2)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[0],res[i],sres[2]);
        else if (c[i]==3)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[0],res[i],sres[3]);
        else if (c[i]==4)
            printf("%.2f %s\t %.2f %s\n",given[i],sres[1],res[i],sres[0]);
        else if (c[i]==5)
            printf("%.2f %s\t %.2f %s\n",given[i],sres[1],res[i],sres[2]);
        else if (c[i]==6)
            printf("%.2f %s\t %.2f %s\n",given[i],sres[1],res[i],sres[3]);
        else if (c[i]==7)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[2],res[i],sres[0]);
        else if (c[i]==8)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[2],res[i],sres[1]);
        else if (c[i]==9)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[2],res[i],sres[3]);
        else if (c[i]==10)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[3],res[i],sres[0]);
        else if (c[i]==11)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[3],res[i],sres[1]);
        else if (c[i]==12)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[3],res[i],sres[2]);
        else if (c[i]==13)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[0],res[i],sres[0]);
        else if (c[i]==14)
            printf("%.2f %s\t %.2f %s\n",given[i],sres[1],res[i],sres[1]);
        else if (c[i]==15)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[2],res[i],sres[2]);
        else if (c[i]==16)
            printf("%.2f %s\t\t %.2f %s\n",given[i],sres[3],res[i],sres[3]);
        else if (c[i]==0)
            printf("Entry was wrong\n");
    }
    return 0;
}
