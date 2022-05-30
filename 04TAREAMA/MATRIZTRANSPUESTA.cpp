#include <iostream>
#define MAX 10
int main(int argc, char** args)
{
int matriz[MAX][MAX], col, reng, i=0, j=0;
  printf("Ingrese el numero de columnas: ");
  scanf("%d", &col);
  printf("Ingrese el numero de filas: ");
  scanf("%d", &reng);
  for(i = 0;i < reng;i++)
  {
      for(j = 0;j < col;j++){
          printf("Ingresa los valores de: [%d][%d]==>\t", i+1, j+1);
              scanf("%d", &matriz[i][j]);
      }
  }
  printf("\nMatriz ");
  printf("\n\n");
  for(i = 0;i < reng;i++){
      printf("\n\t\t");
      for(j = 0;j < col;j++){
          printf("  %6d  ", matriz[i][j]);
          }
  }
  printf("\nMatriz transpuesta");
  printf("\n\n");
  for(i = 0;i < col;i++){
      printf("\n\t\t");
      for(j = 0;j < reng;j++){
          printf("  %6d  ", matriz[j][i]);
          }
  }
  printf("\n\n\n");
    }
