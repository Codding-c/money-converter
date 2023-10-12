#include<stdio.h>
int main(){
	float rupes;
	printf("Enter The Value in Rupee: \n");
	scanf("%f",&rupes);
	printf("\a=%f dollar\n",0.012*rupes );
	printf("\a=%f Ruble\n",1.17*rupes);
	printf("\a=%f Yen\n",1.80*rupes);
	return 0;
	}
