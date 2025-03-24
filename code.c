#include<stdio.h>
//function prototype
float t_area(float width,float height);
float r_area(float width,float height);
float s_area(float side);
float c_area(float r);
float cube_vol(float side);
float cuboid_vol(float length,float width,float height);
float cone_vol(float r,float h);
float cylinder_vol(float r,float h);
float sphere_vol(float r);
int main(){

//take inputs
    char option;
    printf("_____area_____\n");
    printf("Enter a to find area of triangle\n");
    printf("Enter b to find area of rectangle\n");
    printf("Enter c to find area of square\n");
    printf("Enter d to find area of circle\n");
    printf("\n");
    printf("_____volume_____\n");
    printf("Enter e to find volume of cube\n");
    printf("Enter f to find volume of cuboid\n");
    printf("Enter g to find volume of cone\n");
    printf("Enter h to find volume of cylinder\n");
    printf("Enter l to find volume of sphere\n");
    printf("Enter m to find volume of hemisphere\n");
    printf("Enter n to find volume of pyramid \n");
    printf("Enter o to find volume of prism\n");

    
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
    case 'e':
        printf("enter the side of cube: ");
        scanf("%f",&side);
        printf("volume of cube is: %f",cube_vol(side));
        break;
    case 'f':
        float length;
        printf("enter the length of cuboid: ");
        scanf("%f",&length);
        printf("enter the width of cuboid: ");
        scanf("%f",&width);
        printf("enter the height of cuboid: ");
        scanf("%f",&height);
        printf("volume of cuboid is: %f",cuboid_vol(length,width,height));
        break; 
    case 'g':
        printf("enter the r of cone: ");
        scanf("%f",&r);
        printf("enter the h of cone: ");
        scanf("%f",&height);
        printf("volume of cone is: %f",cone_vol(r,height));
        break;
    case 'h':
        printf("enter the r of cylinder: ");
        scanf("%f",&r);
        printf("enter the h of cylinder: ");
        scanf("%f",&height);
        printf("volume of cylinder is: %f",cylinder_vol(r,height));
        break;
    case 'l':
        printf("enter the r of sphere: ");
        scanf("%f",&r);
        printf("volume of sphere is: %f",sphere_vol(r));
        break;
    case 'm':
        printf("enter the r of hemisphere: ");
        scanf("%f",&r);
        printf("volume of hemisphere is: %f",hemisphere_vol(r));
        break;
    case 'n':
        printf("enter the l of pyramid: ");
        scanf("%f",&length);
        printf("enter the w of pyramid: ");
        scanf("%f",&width);
        printf("enter the h of pyramid: ");
        scanf("%f",&height);
        printf("volume of pyramid is: %f",pyramid_vol(length,width,height));
        break;
    case 'o':
        printf("enter the l of prism: ");
        scanf("%f",&length);
        printf("enter the w of prism: ");
        scanf("%f",&width);
        printf("enter the h of prism: ");
        scanf("%f",&height);
        printf("volume of prism is: %f",prism_vol(length,width,height));
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
//function for calculate volume of cube
float cube_vol(float side){
    float result=side*side*side;
    return result;
}
//function for calculate volume of cuboid
float cuboid_vol(float length,float width,float height){
    float result=length*width*height;
    return result;
}
//function for calculate volume of cone
float cone_vol(float r,float h){
    float pi=3.14;
    float result=(pi*r*r*h)/3;
    return result;
}
//function for calculate volume of cylinder
float cylinder_vol(float r,float h){
    float pi=3.14;
    float result=pi*r*r*h;
    return result;
}
//function for calculate volume of sphere
float sphere_vol(float r){
    float pi=3.14;
    float result=(4*pi*r*r*r)/3;
    return result;
}
//function for calculate volume of hemisphere
float hemisphere_vol(float r){
    float pi=3.14;
    float result=(2*pi*r*r*r)/3;
    return result;
}
//function for calculate volume of pyramid
float pyramid_vol(float l,float w,float h){
    float result=(l*w*h)/3;
    return result;
}
//function for calculate volume of prism
float prism_vol(float l,float w,float h){
    float result=l*w*h;
    return result;
}