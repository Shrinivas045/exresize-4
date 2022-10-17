#include <stdio.h>
int main()
{

    int side_1, side_2, side_3;

    printf("enter a side_1:-");
    scanf("%d", &side_1);
    printf("enter a side_2:-");
    scanf("%d", &side_2);
    printf("enter a side_3:-");
    scanf("%d", &side_3);
    if ((side_1 + side_2 > side_3) && (side_2 + side_3 > side_1) && (side_3 + side_1 > side_2))
    {
        printf("valid tringle");
    }
    else
    {
        printf("not valid trangle");
    }
    return 0;
}