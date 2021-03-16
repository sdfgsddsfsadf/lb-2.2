#include <stdio.h> //conenct lib
#include<locale.h>
#include<math.h>



int main(void) {
int x;
printf("\n zadaite chuslo x=");
scanf("%d",&x);
int y;
printf("\n zadaite chuslo y=");
scanf("%d",&y);
int z;
printf("\n zadaite chuslo z=");
scanf("%d",&z);
float f;

f = (pow(x,2)+pow(z,2))/sqrt(x+y)+(pow(x, 1./3)+pow(y, 1./3)+pow(z, 1./3));
    printf("\t f \n");
    printf("\t %f\n",f);
    return 0;
}