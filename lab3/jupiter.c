#include <stdio.h>
int main() {
  float earth_days,jovian_years; 
  printf("Enter the number of Earth days: "); 
  scanf("%f",&earth_days);
  jovian_years=earth_days/(365.0*12.0); 
  printf("Equivalent Jovian years: %f\n",jovian_years); 
  return 0; 
}
