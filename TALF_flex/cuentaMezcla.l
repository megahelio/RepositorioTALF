%{ 
   int num_secuencias = 0; 
%} 

%% 

^[a-Z]+\n num_secuencias++;

%% 

int yywrap() 
{ 
    return 1; 
} 

main() 
{ 
    while (yylex()); 
    printf("No. num_secuencias = %d, num_secuencias); 
} 