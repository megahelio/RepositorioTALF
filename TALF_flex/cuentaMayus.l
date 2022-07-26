
%{ 
   int num_mayus = 0; 
%} 

%% 
           
^[A-Z]+\n   num_mayus++;  

%% 

int yywrap() 
{ 
    return 1; 
} 

main() 
{ 
    while (yylex()); 
    printf("No. mayus = %d\n", num_mayus); 
} 