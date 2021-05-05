#include <math.h>
#include<stdio.h>
#define PI 3.14159265

float fcos(float sdt){

 float  ret, val;

  
   val = PI / 180;
   ret =cos(sdt*val);

return ret;
}
float fsin(float sdt){

 float  ret, val;

  
   val = PI / 180;
   ret =sin(sdt*val);

return ret;
}
int main(){
float v0,v0x,v0y,t,xt,yt;
float g=9.8;
	printf("masukkan nilai v0 = ");
	scanf("%f",&v0);
	printf("masukkan nilai t=");
		scanf("%f",&t);
	v0x=v0*fcos(45);
	v0y=v0*fsin(45);
	xt=v0x*t;
	yt=v0y*t-0.5*g*t*t;
	printf("Posisi gerak dalam x adalah = %1f \n",xt);
		printf("Posisi gerak dalam y adalah = %1f",yt);

	
}
