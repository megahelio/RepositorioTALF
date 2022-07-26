%{
#include <stdio.h>
#include <strings.h>
#include "machina.tab.h"
int num_lineas = 1;
char cadena[100];
%}


%array
%x STRING
%x COM

D1	(?i:array)
D2	(?i:abstract)	
D3	(?i:boolean)
D4	(?i:case)		
D5	(?i:character)
D6	(?i:class)
D7	(?i:constant)
D8	(?i:constructor)
D9	(?i:default)
D10	(?i:destructor)
D11	(?i:else)
D12	(?i:enumeration)
D13	(?i:especific)
D14	(?i:exception)
D15	(?i:exit)
D16	(?i:false)
D17	(?i:final)
D18	(?i:finish)
D19	(?i:float)
D20	(?i:for)
D21	(?i:foreach)
D22	(?i:function)
D23	(?i:hashtable)
D24	(?i:if)
D25	(?i:in)
D26	(?i:integer)
D27	(?i:is)
D28	(?i:loop)
D29	(?i:nil)
D30	(?i:of)	
D31	(?i:others)
D32	(?i:out)
D33	(i:private)
D34	(?i:procedure)
D35	(?i:protected)
D36	(?i:public)
D37	(?i:raise)
D38	(?i:record)
D39	(?i:return)
D40	(?i:reverse)
D41	(?i:then)
D42	(?i:true)
D43	(?i:try)
D44	(?i:type)
D45	(?i:start)
D46	(?i:when)
D47	(?i:while)

and (?i:and)
or  (?i:or)
not  (?i:not)

CARACTER_ESC	\\[\'\"\\abfnrtv]
CARACTER_DEC	\\(25[0-5]|[0-2][0-4][0-9]|[0-9]{1,2})
CARACTER_OCT  (\\O|\\o)(37[0-7]|[0-3][0-7]{2}|[0-7]{1,2})
CARACTER_HEX	(\\H|\\h)([[:digit:]A-Fa-f]{1,2})
CARACTER 		[^\n\\\'\"]
CADENA 			({CARACTER}|{CARACTER_HEX}|{CARACTER_DEC}|{CARACTER_OCT}|{CARACTER_ESC}){2,}

CTC_ENTERA	[0-9]+|\\[oO][0-7]+|\\[Hh][[:digit:]A-Fa-f]+
CTC_REAL {CTC_REALNOMANTISA}|{CTC_REALMANTISA}
CTC_REALNOMANTISA {CTC_ENTERA}"."{CTC_ENTERA}
CTC_REALMANTISA ({CTC_ENTERA}|{CTC_REALNOMANTISA})^[+-]?{CTC_ENTERA}


DELIMITADOR 	\{|\}|\(|\)|\[|\]|"|"|\:|\;|\,|"->"|".."
operador_ARITMETICO "+"|"-"|"*"|"%"|"**"
operador_BITS "&"|"@"
operador_RELACIONAL "="|"/="|"<"|">"|"<="|">="
operador_ASIGNACION ":="
operador_MEMORIA "."
COMENTARIO	--[^\n]*
IDENTIFICADOR  [[:alpha:]]+((\_[[:digit:]]*)*[[:alpha:]]*)*

%%

[\n]			++num_lineas;
[ \t]     ;

{D1}            {printf("Linea %d, Palabra reservada ARRAY:\t%s\n", num_lineas, yytext); return ARRAY;}
{D2}            {printf("Linea %d, Palabra reservada ABSTRACT:\t%s\n", num_lineas, yytext); return ABSTRACT;}
{D3}            {printf("Linea %d, Palabra reservada BOOLEAN:\t%s\n", num_lineas, yytext); return BOOLEAN;}
{D4}            {printf("Linea %d, Palabra reservada CASE:\t%s\n", num_lineas, yytext); return CASE;}
{D5}            {printf("Linea %d, Palabra reservada CHARACTER:\t%s\n", num_lineas, yytext); return CHARACTER;}
{D6}            {printf("Linea %d, Palabra reservada CLASS:\t%s\n", num_lineas, yytext); return CLASS;}
{D7}            {printf("Linea %d, Palabra reservada CONSTANT:\t%s\n", num_lineas, yytext); return CONSTANT;}
{D8}            {printf("Linea %d, Palabra reservada CONSTRUCTOR:\t%s\n", num_lineas, yytext); return CONSTRUCTOR;}
{D9}            {printf("Linea %d, Palabra reservada DEFAULT:\t%s\n", num_lineas, yytext); return DEFAULT;}
{D10}           {printf("Linea %d, Palabra reservada DESTRUCTOR:\t%s\n", num_lineas, yytext); return DESTRUCTOR;}
{D11}           {printf("Linea %d, Palabra reservada ELSE:\t%s\n", num_lineas, yytext); return ELSE;}
{D12}           {printf("Linea %d, Palabra reservada ENUMERATION:\t%s\n", num_lineas, yytext); return ENUMERATION;}
{D13}           {printf("Linea %d, Palabra reservada ESPECIFIC:\t%s\n", num_lineas, yytext); return ESPECIFIC;}
{D14}           {printf("Linea %d, Palabra reservada EXCEPTION:\t%s\n", num_lineas, yytext); return EXCEPTION;}
{D15}           {printf("Linea %d, Palabra reservada EXIT:\t%s\n", num_lineas, yytext); return EXIT;}
{D17}           {printf("Linea %d, Palabra reservada FINAL:\t%s\n", num_lineas, yytext); return FINAL;}
{D18}           {printf("Linea %d, Palabra reservada FINISH:\t%s\n", num_lineas, yytext); return FINISH;} 
{D19}           {printf("Linea %d, Palabra reservada FLOAT:\t%s\n", num_lineas, yytext); return FLOAT;}
{D20}           {printf("Linea %d, Palabra reservada FOR:\t%s\n", num_lineas, yytext); return FOR;}
{D21}           {printf("Linea %d, Palabra reservada FOREACH:\t%s\n", num_lineas, yytext); return FOREACH;}
{D22}           {printf("Linea %d, Palabra reservada FUNCTION:\t%s\n", num_lineas, yytext); return FUNCTION;}
{D23}           {printf("Linea %d, Palabra reservada HASHTABLE:\t%s\n", num_lineas, yytext); return HASHTABLE;}
{D24}           {printf("Linea %d, Palabra reservada IF:\t%s\n", num_lineas, yytext); return IF;}
{D25}           {printf("Linea %d, Palabra reservada IN:\t%s\n", num_lineas, yytext); return IN;}
{D26}           {printf("Linea %d, Palabra reservada INTEGER:\t%s\n", num_lineas, yytext); return INTEGER;}
{D27}           {printf("Linea %d, Palabra reservada IS:\t%s\n", num_lineas, yytext); return IS;}
{D28}           {printf("Linea %d, Palabra reservada LOOP:\t%s\n", num_lineas, yytext); return LOOP;}
{D29}           {printf("Linea %d, Palabra reservada NIL:\t%s\n", num_lineas, yytext); return NIL;}
{D30}           {printf("Linea %d, Palabra reservada OF:\t%s\n", num_lineas, yytext); return OF;}
{D31}           {printf("Linea %d, Palabra reservada OTHERS:\t%s\n", num_lineas, yytext); return OTHERS;}
{D32}           {printf("Linea %d, Palabra reservada OUT:\t%s\n", num_lineas, yytext); return OUT;}
{D33}           {printf("Linea %d, Palabra reservada PRIVATE:\t%s\n", num_lineas, yytext); return PRIVATE;}
{D34}           {printf("Linea %d, Palabra reservada PROCEDURE:\t%s\n", num_lineas, yytext); return PROCEDURE;}
{D35}           {printf("Linea %d, Palabra reservada PROTECTED:\t%s\n", num_lineas, yytext); return PROTECTED;}
{D36}           {printf("Linea %d, Palabra reservada PUBLIC:\t%s\n", num_lineas, yytext); return PUBLIC;}
{D37}           {printf("Linea %d, Palabra reservada RAISE:\t%s\n", num_lineas, yytext); return RAISE;}
{D38}           {printf("Linea %d, Palabra reservada RECORD:\t%s\n", num_lineas, yytext); return RECORD;}
{D39}           {printf("Linea %d, Palabra reservada RETURN:\t%s\n", num_lineas, yytext); return RETURN;}
{D40}           {printf("Linea %d, Palabra reservada REVERSE:\t%s\n", num_lineas, yytext); return REVERSE;}
{D41}           {printf("Linea %d, Palabra reservada THEN:\t%s\n", num_lineas, yytext); return THEN;}
{D43}           {printf("Linea %d, Palabra reservada TRY:\t%s\n", num_lineas, yytext); return TRY;}
{D44}           {printf("Linea %d, Palabra reservada TYPE:\t%s\n", num_lineas, yytext); return TYPE;}
{D45}           {printf("Linea %d, Palabra reservada START:\t%s\n", num_lineas, yytext); return START;}
{D46}           {printf("Linea %d, Palabra reservada WHEN:\t%s\n", num_lineas, yytext); return WHEN ;}
{D47}           {printf("Linea %d, Palabra reservada WHILE:\t%s\n", num_lineas, yytext); return WHILE ;}

{D42} {printf("Linea %d, Booleano true: %s\n", num_lineas, yytext); return TRUE;}
{D16} {printf("Linea %d, Booleano false: %s\n", num_lineas, yytext); return FALSE;}
{and} {printf("Linea %d, Operador logico and: %s\n", num_lineas, yytext); return AND;}
{or}  {printf("Linea %d, Operador logico or: %s\n", num_lineas, yytext); return OR;}
{not}  {printf("Linea %d, Operador logico not: %s\n", num_lineas, yytext); return NOT;}



{CTC_ENTERA}    printf("linea %d, Constante (Entera):\t%s\n", num_lineas, yytext);
{CTC_REAL}      printf("linea %d, Constante (Real):\t%s\n", num_lineas, yytext);

\'{CARACTER}\'	printf("Linea %d, Caracter: %s\n", num_lineas, yytext);
\'{CARACTER_DEC}\'	printf("Linea %d, Caracter en decimal: %s\n", num_lineas, yytext);
\'{CARACTER_OCT}\'	printf("Linea %d, Caracter en octal: %s\n", num_lineas, yytext);
\'{CARACTER_HEX}\'	printf("Linea %d, Caracter hexadecimal: %s\n", num_lineas, yytext);
\'{CARACTER_ESC}\'	printf("Linea %d, Caracter escapado: %s\n", num_lineas, yytext);

\" BEGIN STRING;

<STRING>{CARACTER}		{strcat(cadena,yytext);}

<STRING>[\\]$			{strcat(cadena,yytext);strcat(cadena,"\nOtra linea: ");}

<STRING>{CARACTER_OCT}	{strcat(cadena,yytext);}
						
<STRING>{CARACTER_HEX}	{strcat(cadena,yytext);}

<STRING>{CARACTER_ESC}	{strcat(cadena,yytext);}

<STRING>{CARACTER_DEC}	{strcat(cadena,yytext);}

<STRING>{CADENA}	{strcat(cadena,yytext);}

<STRING>\"  {printf("Linea %d, Cadena: '%s'\n",num_lineas,cadena); memset(cadena,0,100); BEGIN 0;}


{DELIMITADOR}	{printf("Linea %d, Delimitador: %s\n", num_lineas, yytext); return yytext[0];}
{COMENTARIO}	;

"//"	BEGIN COM;
<COM>[\n]	++num_lineas; 
<COM>\\\\	BEGIN 0;
<COM>[^\n]{-}[\\\\]* ;

{operador_BITS}    {fprintf(yyout,"linea %d, Operador bits: %s\n",num_lineas,yytext); return(yytext[0]);}
{operador_ARITMETICO}    {fprintf(yyout,"linea %d, Operador aritmético: %s\n",num_lineas,yytext); return(yytext[0]);}
{operador_RELACIONAL}    {fprintf(yyout,"linea %d, Operador relacional: %s\n",num_lineas,yytext); return(yytext[0]);}
{operador_ASIGNACION}    {fprintf(yyout,"linea %d, Operador asignación: %s\n",num_lineas,yytext); return(yytext[0]);}
{operador_MEMORIA}  {fprintf(yyout,"linea %d, Operador memoria: %s\n",num_lineas,yytext); return(yytext[0]);}

{IDENTIFICADOR}	printf("Linea %d, Identificador:\t%s\n", num_lineas, yytext);

%%

