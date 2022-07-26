%{ 
   int num_minus=0;
%} 

%% 

^[a-z]+\n num_minus++;


%% 

int yywrap() 
{ 
    return 1; 
} 

main() 
{ 
    while (yylex()); 
    printf("No. minus = %d\n", num_minus);
} 