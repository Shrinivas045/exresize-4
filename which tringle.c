
// Online C compiler to run C program online
#include <stdio.h>

int main() {
int side1,side2,side3;
printf("enter a side1:-");
scanf("%d",&side1);
printf("enter a side2:-");
scanf("%d",&side2);
printf("enter a side3:-");
scanf("%d",&side3);

  if( (side1==side2) && (side2==side3) && (side3==side1)) {
printf("it is Equilateral trangle");
}
else if((side1==side2) || (side2==side3) || (side3==side1)) {
    printf("it is Isosceles tringle");
} 
else if((side3*side3)==(side2*side2)+(side1*side1) || (side2*side2)==(side1*side1)+(side3*side3) || (side1*side1)==(side2*side2)+(side3*side3))
{
    printf("it is Right angle tringle");
}
else if((side1!=side2) || (side2!=side3) || (side3!=side1)) {
    printf("it is Scalene tringle");
}
    return 0;
}