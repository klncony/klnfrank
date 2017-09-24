#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void hello();
void help();
void quit();
void bigger();
void add();
void sub();
void multi();
void divi();
int main(){
	char cmd[256];
	while(1){
		scanf("%s",cmd);
		if(strcmp(cmd,"help")==0){
			help();
		}
		else if(strcmp(cmd,"quit")==0){
			quit();
		}
		else if(strcmp(cmd,"hello")==0){
			hello();
		}
		else if (strcmp(cmd, "bigger") == 0){
            bigger();
        }
        else if (strcmp(cmd, "add") == 0){
            add();
        }
        else if (strcmp(cmd, "sub") == 0){
            sub();
        }
        else if (strcmp(cmd, "multi") == 0){
            multi();
        }
        else if (strcmp(cmd, "div") == 0){
            divi();
        }
        else{
            printf("Error Command!\n\n");
            help();
        }
	}
	return 0;
}
void help(){
	printf("+--------+---------------------------------+\n");
    printf("+ name   + desciption                      +\n");
    printf("+--------+---------------------------------+\n");
    printf("+ help   + cmd tips                        +\n");
    printf("+ quit   + exit cmd                        +\n");
    printf("+ hello  + welcome                         +\n");
    printf("+ bigger + bigger of two numbers           +\n");
    printf("+ add    + addition of two numbers         +\n");
    printf("+ sub    + subtraction of two numbers      +\n");
    printf("+ multi  + multiplication of two numbers   +\n");
    printf("+ div    + division of two numbers         +\n");
    printf("+--------+---------------------------------+\n");
}
void quit(){
	exit(0);
}
void hello(){
	printf("+-------*--------*--------*--------*-------+\n");
	printf("Hi~My name is He Jinhuixuan\n");
    printf("Thank you for coming!\n");
}
void bigger(){
    double num1,num2,num3;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Bigger!\nplease input two numbers:");
    scanf("%lf %lf",&num1,&num2);
    num3 = num1 > num2 ? num1 : num2;
    printf("%lf is bigger than the other\n",num3);
}
void add(){
	double num1,num2,num3;
	printf("+-------*--------*--------*--------*-------+\n");
    printf("Addition!\nplease input two numbers:");
    scanf("%lf %lf",&num1, &num2);
    num3 = num1 + num2;
    printf("%lf + %lf = %lf \n",num1, num2, num3);
}
void sub(){
    double num1,num2,sub;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Subtraction!\n please input two numbers:");
    scanf("%lf %lf",&num1, &num2);
    sub = num1 - num2;
    printf("%lf - %lf = %lf\n",num1, num2, sub);
}
void multi(){
    double num1,num2,multi;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Multiplcation!\n please input two numbers:");
    scanf("%lf %lf",&num1, &num2);
    multi = num1 * num2;
    printf("%lf * %lf = %lf\n",num1, num2, multi);
}
void divi(){
    double num1,num2,div;
    printf("+-------*--------*--------*--------*-------+\n");
    printf("Division!\n please input two numbers:");
    scanf("%lf %lf",&num1, &num2);
    if (num2 == 0)
    {
        printf("Error:divisor can not be zero!\n");
    }
    else
    {
        div = num1 / num2;
        printf("%lf / %lf = %lf\n",num1, num2, div);
    }
}

