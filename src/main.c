//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>

#include <stdio.h>  
#include <math.h> 
int main(void)

{
  
  int valeur,a,b,c;
  printf("veuillez saisir vos 3 couleurs");
   scanf("%d %d %d,&a,&b,&c");
  valeur=(10*a+b)*pow(10,c);
  printf("la valeur est :%d",valeur);
  
	
    return 0;
}
