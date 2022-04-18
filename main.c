
#include <stdio.h>
  #define FEETTOMETER 0.3048
  int main() {
        float weight, height, bmi;

        
        printf("Enter your weight(in kgs):");
        scanf("%f", &weight);

        
        printf("Enter your height(in feet):");
        scanf("%f", &height);

        
        height = height * FEETTOMETER;

        
        bmi = (weight)/(height * height);

        
        printf("Your Body Mass Index is: %f\n", bmi);
        return 0;
  }
