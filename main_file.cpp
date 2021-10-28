#include <iostream>
#include <string>
#include "library.h"

using namespace std;
 
 
int main(void){

FILE *ptr;
int req = 0;
int count = 0;
Store var[50];
Store tem;

        char a[50];
    	string product_name;
		float sale_price=0;
		float buy_price=0;
		float profit = 0;
		
ptr = fopen("data_store.txt" , "r+");
if (ptr==0){
	cout<< "File opennig error!"<<endl;
}

else{
	cout <<"File successefuly opened!"<<endl<<endl;
  
   fscanf(ptr ,"%s %f " , a , &sale_price );
   
   while(!feof(ptr)){
   	
        product_name = a;   
      
       	var[count].set_var(product_name , sale_price );
       	
        fscanf(ptr ,"%s %f %f" , a , &sale_price);
          
        count++;
   }
  
  fclose(ptr);
}
    while((req=Store::choise())!=0){
    	switch(req){
    		
    		case 1:
    			
    			for(int i=0 ; i < count ;i++ ){
    			 var[i].print();	
				}
    			break;
    		case 2:
    			
    		    tem.order_get();
    			break;
    			
    		case 3:
			
			    tem.get_profit_day();
				break;	
				
   			case 4:
			   tem.get_amount();
			   break;		
}
}
return 0;
}
