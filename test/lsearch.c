# include<stdio.h>
int   lsearch ( int  key , int  arry[] ,  int  size )
 { int  i ;
   for (i = 0 ; i < size ; i++ )
    { if ( arry [i] == key ) { return  i  ;  }
          // array[i]相当于*(array+i) 
         }
    return -1 ;    
    }
 int  main ()
 { int  a[10] = { 2,1,3,4,5,9,6,7,8,0 } ;
   int  y = 5 ;
   printf ( " %d ",lsearch ( y , a , 10 ) ) ;
    }
