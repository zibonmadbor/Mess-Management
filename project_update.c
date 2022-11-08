#include <stdio.h>
float rpp(int a, int b, int c, int d, int n)
{
    float um;
    um =(float)(a+b+c+d)/n;
    return um;
}

int main()
{
    printf("\n\n--------------------------Mess Management--------------------------");
    printf("\n\nWhat do you want to know??");
    printf("\n\n\t\t\t1.Meal");
    printf("\n\t\t\t2.House rent and accessories");
    printf("\n\t\t\t3.Both");

    char ch;
    printf("\nEnter the point you want to know: ");
    scanf("%c", &ch);

    if (ch == '1')
    {
        int people,i,j,k, bazar[100], ml[100], sum=0, meal=0;
    float mrate,due;

    printf("Enter total number of people : ");
    scanf("%d", &people);

    for (i = 0; i<people; i++)
    {
        printf("No %d gave for bazar : ", i+1);
        scanf("%d", &bazar[i]);
        sum += bazar[i];
    }

    printf("\nTotal bazar : %d  ", sum);

    for (j = 0; j<people; j++)
    {
        printf("\nNo %d total meal : ", j+1);
        scanf("%d", &ml[j]);
        meal += ml[j];
    }

    printf("\nTotal meal : %d  ", meal);

    mrate = (float)sum/meal;
    printf("\nMeal rate : %0.2f", mrate);

    for (k=0 ; k<people; k++)
    {
        due=(float) ml[k]*mrate-bazar[k];

        if (due>0)
        {
            printf("\n No %d pay the mess : %.2f", k+1, due );
        }
        else
        {
            printf("\n No %d take money to the mess : %.2f", k+1,-due );
        }
    }


    }

    else if(ch == '2')
    {
        int p,q,r,s,t;
        float v;
        printf("Enter the house rent:");
        scanf("%d", &p);

        printf("Enter the utility bill:");
        scanf("%d", &q);

        printf("Enter the wifi bill:");
        scanf("%d", &r);

        printf("Enter the maid salary:");
        scanf("%d", &s);

        printf("Enter total people:");
        scanf("%d", &t);

        printf("Total cost : %d\n", p+q+r+s);

        v = rpp(p,q,r,s,t);
        printf("cost per person: %.2f", v);

    }

    else if(ch == '3')
    {
        int rent,util,people,i,j,k, bazar[100], ml[100], sum=0, meal=0;
        float mrate,due;

        int p,q,r,s,t;
        float v;
        printf("Enter the house rent:");
        scanf("%d", &p);

        printf("Enter the utility bill:");
        scanf("%d", &q);

        printf("Enter the wifi bill:");
        scanf("%d", &r);

        printf("Enter the maid salary:");
        scanf("%d", &s);

        printf("Enter total number of people : ");
        scanf("%d", &people);

    for (i = 0; i<people; i++)
    {
        printf("No %d gave for bazar : ", i+1);
        scanf("%d", &bazar[i]);
        sum += bazar[i];
    }

    printf("\nTotal bazar : %d  ", sum);

    for (j = 0; j<people; j++)
    {
        printf("\nNo %d total meal : ", j+1);
        scanf("%d", &ml[j]);
        meal += ml[j];
    }

    printf("\nTotal meal : %d  ", meal);

    mrate = (float)sum/meal;
    printf("\nMeal rate : %0.2f", mrate);

    v = rpp(p,q,r,s,people);
    printf("\n Rent per person: %.2f", v);

    for (k=0 ; k<people; k++)
    {
        due=(float) ml[k]*mrate+v-bazar[k];
        printf("\nFinal due for no %d person is : %.2f", k+1,due );
    }


    }

    else
    {
        printf("Please Enter the right point");
    }

}
