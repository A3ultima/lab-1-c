//Author: Taoran Sheng
//Collaborators: Aravind Hariprasad  azh5899@psu.edu
//Collaborators: Kaitlyn Byrnes Krb5906@psu.edu
//Collaborators: Kenleigh Leonard kml6565@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double c = atof(temp);
  double f = c*1.8 + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", c, f);
  return 0;
}