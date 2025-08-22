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
    FILE *fp;
    fp = fopen("History.txt","w");
    printf("----------//Welcome to Temperature Conversion Calculator\\\\----------\n\n");
    while (1)
    {
        printf("Chose type of conversion you need:\n");
        printf("1  - Celsius to Fahrenheit\n");
        printf("2  - Celsius to Kelvin\n");
        printf("3  - Celsius to Rankine\n");
        printf("4  - Fahrenheit to Celsius\n");
        printf("5  - Fahrenheit to Kelvin\n");
        printf("6  - Fahrenheit to Rankine\n");
        printf("7  - Kelvin to Celsius\n");
        printf("8  - Kelvin to Fahrenheit\n");
        printf("9  - Kelvin to Rankine\n");
        printf("10 - Rankine to Celsius\n");
        printf("11 - Rankine to Fahrenheit\n");
        printf("12 - Rankine to Kelvin\n");
        printf("0  - If you want to exit\n");
        printf("----------------------------------------------------------------------\n");
        printf("Enter number according to your choice: ");
        scanf("%d",&n);
        printf("----------------------------------------------------------------------\n");
        switch (n)
        {
        case 0:
            printf("Thank you.\n");
            break;
        case 1:
            printf("Enter the temperature in Celsius : ");
            scanf("%f",&temp);
            printf("The temperature in Fahrenheit    : %.2f\n",convert1(temp));
            fprintf(fp,"%.2f Celsius \t\t- %.2f Fahrenheit\n",temp,convert1(temp));
            break;
        case 2:
            printf("Enter the temperature in Celsius : ");
            scanf("%f",&temp);
            printf("The temperature in Kelvin        : %.2f\n",convert3(temp));
            fprintf(fp,"%.2f Celsius \t\t- %.2f Kelvin\n",temp,convert3(temp));
            break;
        case 3:
            printf("Enter the temperature in Celsius : ");
            scanf("%f",&temp);
            printf("The temperature in Rankine       : %.2f\n",convert7(temp));
            fprintf(fp,"%.2f Celsius \t\t- %.2f Rankine\n",temp,convert7(temp));
            break;
        case 4:
            printf("Enter the temperature in Fahrenheit : ");
            scanf("%f",&temp);
            printf("The temperature in Celsius          : %.2f\n",convert2(temp));
            fprintf(fp,"%.2f Fahrenheit \t- %.2f Celsius\n",temp,convert2(temp));
            break;
        case 5:
            printf("Enter the temperature in Fahrenheit : ");
            scanf("%f",&temp);
            printf("The temperature in Kelvin           : %.2f\n",convert5(temp));
            fprintf(fp,"%.2f Fahrenheit \t- %.2f Kelvin\n",temp,convert5(temp));
            break;
        case 6:
            printf("Enter the temperature in Fahrenheit : ");
            scanf("%f",&temp);
            printf("The temperature in Rankine          : %.2f\n",convert9(temp));
            fprintf(fp,"%.2f Fahrenheit \t- %.2f Rankine\n",temp,convert9(temp));
            break;
        case 7:
            printf("Enter the temperature in Kelvin : ");
            scanf("%f",&temp);
            printf("The temperature in Celsius      : %.2f\n",convert4(temp));
            fprintf(fp,"%.2f Kelvin \t\t- %.2f Celsius\n",temp,convert4(temp));
            break;
        case 8:
            printf("Enter the temperature in Kelvin : ");
            scanf("%f",&temp);
            printf("The temperature in Fahrenheit   : %.2f\n",convert6(temp));
            fprintf(fp,"%.2f Kelvin \t\t- %.2f Fahrenheit\n",temp,convert6(temp));
            break;
        case 9:
            printf("Enter the temperature in Kelvin : ");
            scanf("%f",&temp);
            printf("The temperature in Rankine      : %.2f\n",convert11(temp));
            fprintf(fp,"%.2f Kelvin \t\t- %.2f Rankine\n",temp,convert11(temp));
            break;
        case 10:
            printf("Enter the temperature in Rankine : ");
            scanf("%f",&temp);
            printf("The temperature in Celsius       : %.2f\n",convert8(temp));
            fprintf(fp,"%.2f Rankine \t\t- %.2f Celsius\n",temp,convert8(temp));
            break;
        case 11:
            printf("Enter the temperature in Rankine : ");
            scanf("%f",&temp);
            printf("The temperature in Fahrenheit    : %.2f\n",convert10(temp));
            fprintf(fp,"%.2f Rankine \t\t- %.2f Fahrenheit\n",temp,convert10(temp));
            break;
        case 12:
            printf("Enter the temperature in Rankine : ");
            scanf("%f",&temp);
            printf("The temperature in Kelvin        : %.2f\n",convert12(temp));
            fprintf(fp,"%.2f Rankine \t\t- %.2f Kelvin\n",temp,convert12(temp));
            break;
        default:
            printf("Wrong Entry\n");
            printf("----------------------------------------------------------------------\n");
            printf("Choice carefully\n");
        }
        printf("----------------------------------------------------------------------\n");
        if (n==0)
            break;
        printf("Do you want to calculate another conversion?\n");
        printf("1 - Yes\n");
        printf("0 - No\n");
        printf("----------------------------------------------------------------------\n");
        printf("Make your choice: ");
        scanf("%d",&n);
        if (n==0)
        {
            printf("----------------------------------------------------------------------\n");
            printf("Thank you.\n");
            break;
        }
        else
        {
            printf("----------------------------------------------------------------------\n");
            continue;
        }
    }
    fclose(fp);
    printf("\n----------------------------------------------------------------------\n");
    printf("Here's the history:\n");
    printf("----------------------------------------------------------------------\n");
    char ch;
    fclose(fp);
    fp = fopen("History.txt","r");
    while (!feof(fp))
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
