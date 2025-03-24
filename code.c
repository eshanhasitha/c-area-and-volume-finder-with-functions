#include<stdio.h>
//function prototype
float t_area(float width,float height);
float r_area(float width,float height);
float s_area(float side);
float c_area(float r);
int main(){

//take inputs
    char option;
    printf("Enter a to find area of triangle\n");
    printf("Enter b to find area of rectangle\n");
    printf("Enter c to find area of square\n");
    printf("Enter d to find area of circle\n");
    scanf("%c", &option);

//function call and take other inputs
    
    switch (option)
    {
    case 'a':
        
        float width;
        float height;
        printf("enter width: ") ;
        scanf("%f",&width);
        printf("enter height: ") ;
        scanf("%f",&height);
        printf("area of triangle is: %f",t_area(width,height));
        break;
    
    case 'b':
        printf("enter width: ") ;
        scanf("%f",&width);
        printf("enter height: ") ;
        scanf("%f",&height);
        printf("area of rectangle is: %f",r_area(width,height));
        break;
    
    case 'c':
        float side;
        printf("enter the length of one side of squre: ") ;
        scanf("%f",&side);
        printf("area of squre is: %f",s_area(side));
        break;

    case 'd':
        float r;
        printf("enter the r of circle: ");
        scanf("%f",&r);
        printf("area of circle is: %f",c_area(r));
        break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}

//function for calculate area of triangle
float t_area(float width,float height){
    float result=(width*height)/2;
    return result;
}

//function for caclulate area of rectangle
float r_area(float width,float height){
    float result=width*height;
    return result;
}

//function for calculate area of square
float s_area(float side){
    float result=side*side;
    return result;
}
//function for calculate area of circle
float c_area(float r){
    float pi=3.14;
    float result=pi*r*r;
    return result;
}
