//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <ansi_c.h>
#include "my_header.h"
#include <stdio.h>  
#include <math.h> 
int main(void)
{					  
 unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9},i,seuil=100;
 int sat[10]={rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50,rand()%100-50},n,SEUILB=-100,SEUILH=200;
 int dist[10]={11,23,34,45,56,67,78,89,90,98},w,distance;	
 int a[5]={1,4,6,8,5},b[5],q;
 int miroir[6]={2,55,66},p;
 
 for(i=0;i<10;i++)
{
	if(bin[i]<seuil)
	{
		 bin[i]=0;
	}
 else
 {	
	 bin[i]=1;
 }
 
}
 for(n=0;n<10;n++)
{ 
	if(sat[n]>SEUILH)
	{
		sat[n]=SEUILH;
	}
	
	else if (sat[n]<SEUILB)
	{
		sat[n]=SEUILB;
	}
	
}
	
	for(w=10;w>0;w--)
	{			
		distance=abs (dist[w]-dist[w-1]);
		dist[w]=distance;
	}

	for (q=0,q<4,q++)
	{
		b[q]=a[4-q];
	}
	for(p=0;p<3;p++)
	{
	
       miroir[5-p]=miroir[p] ;
	   }
	  return 0;
    }
	   
 
  

    

