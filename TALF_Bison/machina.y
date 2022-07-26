%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);

%}

%token ABSTRACT AND ARRAY ASIG BOOLEAN CLASS CONSTRUCTOR CTC_CADENA CTC_CARACTER CTC_FLOAT CTC_INT
%token CASE CHARACTER CONSTANT DEFAULT DESTRUCTOR DISTINTO DOS_PTOS ELSE ENUMERATION ESPECIFIC
%token EXCEPTION EXIT EXP FALSE FINAL FINISH FLECHA FLOAT FOREACH FOR FUNCTION HASHTABLE IDENTIFICADOR
%token IF IN INTEGER IS LOOP MAYOR_IGUAL MENOR_IGUAL MOD NOT NIL OF OR OTHERS OUT PROCEDURE PRIVATE 
%token PROTECTED PUBLIC RAISE RECORD RETURN REVERSE START THEN TRUE TRY TYPE WHEN WHILE

%right EXP
%left OR AND '@' '&' '+' '-' '*' '%' MOD
%nonassoc NOT '=' DISTINTO '<' '>' MENOR_IGUAL MAYOR_IGUAL

%%

//******************************** DECLARACIONES********************************

declaracion
      : declaracion_objeto                {printf("\tdeclaracion->declaracion_objeto\n");}
      | declaracion_tipo                  {printf("\tdeclaracion->declaracion_tipo\n");}
      | declaracion_subprograma           {printf("\tdeclaracion->declaracion_subprograma\n");}
      ;

declaracion_objeto
      : lista_identificadores ':' tipo_escalar ';'                                  {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_escalar ';'\n");}
      | lista_identificadores ':' CONSTANT tipo_escalar ';'                         {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_escalar ';'\n");}
      | lista_identificadores ':' tipo_escalar asignacion_escalar ';'               {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_escalar asignacion_escalar ';'\n");}
      | lista_identificadores ':' CONSTANT tipo_escalar asignacion_escalar ';'      {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_escalar asignacion_escalar ';'\n");}
      | lista_identificadores ':' tipo_complejo ';'                                 {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_complejo ';'\n");}
      | lista_identificadores ':' CONSTANT tipo_complejo ';'                        {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_complejo ';'\n");}
      | lista_identificadores ':' tipo_complejo asignacion_complejo ';'             {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_complejo asignacion_complejo ';'\n");}
      | lista_identificadores ':' CONSTANT tipo_complejo asignacion_complejo ';'    {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_complejo asignacion_complejo ';'\n");}
      ;

lista_identificadores
      : IDENTIFICADOR                                 {printf("\tlista_identificadores->IDENTIFICADOR\n");}
      | lista_identificadores ',' IDENTIFICADOR       {printf("\tlista_identificadores->lista_identificadores ',' IDENTIFICADOR\n");}
      ;

tipo_escalar
      : INTEGER         {printf("\ttipo_escalar->INTEGER\n");}
      | FLOAT           {printf("\ttipo_escalar->FLOAT\n");}
      | BOOLEAN         {printf("\ttipo_escalar->BOOLEAN\n");}
      | CHARACTER       {printf("\ttipo_escalar->CHARACTER\n");}
      ;

asignacion_escalar
      : ASIG lista_expresion        {printf("\tasignacion_escalar->ASIG lista_expresion \n");}
      ;

lista_expresion
      : expresion                         {printf("\tlista_expresion->expresion\n");}
      | lista_expresion ',' expresion     {printf("\tlista_expresion->lista_expresion ',' expresion\n");}
      ;

tipo_complejo
      : nombre_de_tipo        {printf("\ttipo_complejo->nombre_de_tipo\n");}
      | tipo_compuesto        {printf("\ttipo_complejo->tipo_compuesto\n");}
      ;

nombre_de_tipo
      : IDENTIFICADOR         {printf("\tnombre_de_tipo->IDENTIFICADOR\n");}
      ;

tipo_compuesto
      : tipo_tablero          {printf("\ttipo_compuesto->tipo_tablero\n");}
      | tipo_registro         {printf("\ttipo_compuesto->tipo_registro\n");}
      | tipo_hashtable        {printf("\ttipo_compuesto->tipo_hashtable\n");}
      | tipo_clase            {printf("\ttipo_compuesto->tipo_clase\n");}
      | tipo_enumeracion      {printf("\ttipo_compuesto->tipo_enumeracion\n");}
      ;

asignacion_complejo
      : ASIG objeto_complejo  {printf("\tasignacion_complejo->ASIG objeto_complejo\n");}
      ;

objeto_complejo
      : '[' lista_objeto_complejo ']'     {printf("\tobjeto_complejo->'[' lista_objeto_complejo ']'\n");}
      | '{' lista_elemento_hastable '}'   {printf("\tobjeto_complejo->'{' lista_elemento_hastable '}'\n");}
      | '(' lista_elemento_registro ')'   {printf("\tobjeto_complejo->'(' lista_elemento_registro ')'\n");}
      | literal                           {printf("\tobjeto_complejo->literal\n");}
      ;

elemento_hastable
      : objeto_complejo FLECHA objeto_complejo  {printf("\telemento_hastable->objeto_complejo FLECHA objeto_complejo\n");}
      ;

elemento_registro
      : IDENTIFICADOR ASIG objeto_complejo      {printf("\telemento_registro->IDENTIFICADOR ASIG objeto_complejo\n");}
      ;

lista_objeto_complejo
      : objeto_complejo                               {printf("\tlista_objeto_complejo->objeto_complejo\n");}
      | lista_objeto_complejo ',' objeto_complejo     {printf("\tlista_objeto_complejo->lista_objeto_complejo ',' objeto_complejo\n");}
      ;

lista_elemento_hastable
      : elemento_hastable                                   {printf("\tlista_elemento_hastable->elemento_hastable\n");}
      | lista_elemento_hastable ',' elemento_hastable       {printf("\tlista_elemento_hastable->lista_elemento_hastable ',' elemento_hastable\n");}
      ;

lista_elemento_registro
      : elemento_registro                                   {printf("\tlista_elemento_registro->elemento_registro\n");}
      | lista_elemento_registro ',' elemento_registro       {printf("\tlista_elemento_registro->lista_elemento_registro ',' elemento_registro\n");}
      ;

//***************************** TIPOS *****************************

declaracion_tipo
      : TYPE IDENTIFICADOR IS especificacion_tipo ';'       {printf("\tdeclaracion_tipo->TYPE IDENTIFICADOR IS especificacion_tipo ';'\n");}
      ;

especificacion_tipo
      : tipo_escalar                      {printf("\tespecificacion_tipo->tipo_escalar\n");}
      | nombre_de_tipo                    {printf("\tespecificacion_tipo->nombre_de_tipo\n");}
      | tipo_compuesto                    {printf("\tespecificacion_tipo->tipo_compuesto\n");}
      ;

tipo_tablero
      : ARRAY '(' expresion DOS_PTOS expresion ')' OF especificacion_tipo     {printf("\ttipo_tablero->ARRAY '(' expresion DOS_PTOS expresion ')' OF especificacion_tipo\n");}
      ;

tipo_registro
      : RECORD lista_componente FINISH RECORD   {printf("\ttipo_registro->RECORD lista_componente FINISH RECORD\n");}
      ;

lista_componente
      : componente                        {printf("\tlista_componente->componente\n");}
      | lista_componente componente       {printf("\tlista_componente->lista_componente componente\n");}
      ;

componente
      : lista_identificadores ':' especificacion_tipo ';'   {printf("\tcomponente->lista_identificadores ':' especificacion_tipo ';'\n");}
      ;

tipo_hashtable
      : HASHTABLE OF '<' especificacion_tipo ',' especificacion_tipo '>'      {printf("\ttipo_hashtable->HASHTABLE OF '<' especificacion_tipo ',' especificacion_tipo '>'\n");}
      ;

tipo_clase
      : CLASS lista_componente_clase FINISH CLASS                             {printf("\ttipo_clase->CLASS lista_componente_clase FINISH CLASS\n");}
      | CLASS '(' nombre_de_tipo ')' lista_componente_clase FINISH CLASS      {printf("\ttipo_clase->CLASS '(' nombre_de_tipo ')' lista_componente_clase FINISH CLASS\n");}
      ;

lista_componente_clase
      : componente_clase                              {printf("\tlista_componente_clase->componente_clase\n");}
      | lista_componente_clase componente_clase       {printf("\tlista_componente_clase->lista_componente_clase componente_clase\n");}
      ;

componente_clase
      : declaracion_componente                        {printf("\tcomponente_clase->declaracion_componente\n");}
      | visibilidad declaracion_componente            {printf("\tcomponente_clase->visibilidad declaracion_componente\n");}
      ;

declaracion_componente
      : declaracion_objeto          {printf("\tdeclaracion_componente->declaracion_objeto\n");}
      | declaracion_tipo            {printf("\tdeclaracion_componente->declaracion_tipo\n");}
      | declaracion_metodo          {printf("\tdeclaracion_componente->declaracion_metodo\n");}
      ;

visibilidad
      : PUBLIC          {printf("\tvisibilidad->PUBLIC\n");}
      | PROTECTED       {printf("\tvisibilidad->PROTECTED\n");}
      | PRIVATE         {printf("\tvisibilidad->PRIVATE\n");}
      ;

declaracion_metodo
      : declaracion_subprograma                       {printf("\tdeclaracion_metodo->declaracion_subprograma\n");}
      | lista_modificador declaracion_subprograma     {printf("\tdeclaracion_metodo->lista_modificador declaracion_subprograma\n");}
      ;

modificador
      : CONSTRUCTOR     {printf("\tmodificador->CONSTRUCTOR\n");}
      | DESTRUCTOR      {printf("\tmodificador->DESTRUCTOR\n");}
      | ABSTRACT        {printf("\tmodificador->ABSTRACT\n");}
      | ESPECIFIC       {printf("\tmodificador->ESPECIFIC\n");}
      | FINAL           {printf("\tmodificador->FINAL\n");}
      ;

lista_modificador
      : modificador                       {printf("\tlista_modificador->modificador\n");}
      | lista_modificador modificador     {printf("\tlista_modificador->lista_modificador modificador\n");}
      ;

tipo_enumeracion
      : ENUMERATION OF tipo_escalar lista_elemento FINISH ENUMERATION   {printf("\ttipo_enumeracion->ENUMERATION OF tipo_escalar lista_elemento FINISH ENUMERATION\n");}
      ;

elemento
      : literal                           {printf("\telemento->literal\n");}
      | IDENTIFICADOR FLECHA literal      {printf("\telemento->IDENTIFICADOR FLECHA literal\n");}
      ;

lista_elemento
      : elemento                          {printf("\tlista_elemento->elemento\n");}
      | lista_elemento ',' elemento       {printf("\tlista_elemento->lista_elemento ',' elemento\n");}
      ;

//*****************************SUBPROGRAMAS *****************************

declaracion_subprograma
      : especificacion_subprograma ';'                      {printf("\tdeclaracion_subprograma->especificacion_subprograma ';'\n");}
      | especificacion_subprograma cuerpo_subprograma ';'   {printf("\tdeclaracion_subprograma->especificacion_subprograma cuerpo_subprograma ';'\n");}
      ;

especificacion_subprograma
      : PROCEDURE IDENTIFICADOR                             {printf("\tespecificacion_subprograma->PROCEDURE IDENTIFICADOR\n");}
      | PROCEDURE IDENTIFICADOR '(' parte_formal ')'        {printf("\tespecificacion_subprograma->PROCEDURE IDENTIFICADOR '(' parte_formal ')'\n");}
      | FUNCTION IDENTIFICADOR                              {printf("\tespecificacion_subprograma->FUNCTION IDENTIFICADOR\n");}
      | FUNCTION IDENTIFICADOR '(' parte_formal ')'         {printf("\tespecificacion_subprograma->FUNCTION IDENTIFICADOR '(' parte_formal ')'\n");}
      RETURN especificacion_tipo                            {printf("\tespecificacion_subprograma->RETURN especificacion_tipo\n");}
      ;

parte_formal
      :                             {printf("\tparte_formal->vacio\n");}
      | declaracion_parametros      {printf("\tparte_formal->declaracion_parametros\n");}
      ;

declaracion_parametros
      : declaracion_parametro                               {printf("\tdeclaracion_parametros->declaracion_parametro\n");}
      | declaracion_parametro lista_declaracion_parametro   {printf("\tdeclaracion_parametros->declaracion_parametro lista_declaracion_parametro\n");}
      ;

lista_declaracion_parametro
      : declaracion_parametro                                     {printf("\tlista_declaracion_parametro->declaracion_parametro\n");}
      | declaracion_parametro ';' lista_declaracion_parametro     {printf("\tlista_declaracion_parametro->declaracion_parametro ';' lista_declaracion_parametro\n");}
      ;

declaracion_parametro
      : lista_identificadores ':' especificacion_tipo             {printf("\tdeclaracion_parametro->lista_identificadores ':' especificacion_tipo\n");}
      | lista_identificadores ':' modo especificacion_tipo        {printf("\tdeclaracion_parametro->lista_identificadores ':' modo especificacion_tipo\n");}
      ;

modo
      : IN              {printf("\tmodo->IN\n");}
      | IN OUT          {printf("\tmodo->IN OUT\n");}
      ;

cuerpo_subprograma
      : IS START lista_instruccion FINISH                                     {printf("\tcuerpo_subprograma->IS START lista_instruccion FINISH\n");}
      | IS START lista_instruccion FINISH IDENTIFICADOR                       {printf("\tcuerpo_subprograma->IS START lista_instruccion FINISH IDENTIFICADOR\n");}
      | IS lista_declaracion START lista_instruccion FINISH                   {printf("\tcuerpo_subprograma->IS lista_declaracion START lista_instruccion FINISH\n");}
      | IS lista_declaracion START lista_instruccion FINISH IDENTIFICADOR     {printf("\tcuerpo_subprograma->IS lista_declaracion START lista_instruccion FINISH IDENTIFICADOR\n");}
      ;

lista_instruccion
      : instruccion                       {printf("\tlista_instruccion->instruccion\n");}
      | lista_instruccion instruccion     {printf("\tlista_instruccion->lista_instruccion instruccion\n");}
      ;

lista_declaracion
      : declaracion                       {printf("\tlista_declaracion->declaracion\n");}
      | lista_declaracion declaracion     {printf("\tlista_declaracion->lista_declaracion declaracion\n");}
      ;

//***************************** INSTRUCCIONES *****************************

instruccion
      : instruccion_vacia           {printf("\tinstruccion->instruccion_vacia\n");}
      | instruccion_asignacion      {printf("\tinstruccion->instruccion_asignacion\n");}
      | instruccion_exit            {printf("\tinstruccion->instruccion_exit\n");}
      | instruccion_return          {printf("\tinstruccion->instruccion_return\n");}
      | instruccion_if              {printf("\tinstruccion->instruccion_if\n");}
      | instruccion_case            {printf("\tinstruccion->instruccion_case\n");}
      | instruccion_loop            {printf("\tinstruccion->instruccion_loop\n");}
      | instruccion_rise            {printf("\tinstruccion->instruccion_rise\n");}
      | instruccion_try_catch       {printf("\tinstruccion->instruccion_try_catch\n");}
      | llamada_procedure           {printf("\tinstruccion->llamada_procedure\n");}
      ;

instruccion_vacia
      : NIL ';'   {printf("\tinstruccion_vacia->NIL ';'\n");}
      ;

instruccion_asignacion
      : nombre ASIG expresion ';'   {printf("\tinstruccion_asignacion->nombre ASIG expresion ';'\n");}
      ;

instruccion_return
      : RETURN expresion ';'        {printf("\tinstruccion_return->RETURN expresion ';'\n");}
      ;

instruccion_exit
      : EXIT ';'                                {printf("\tinstruccion_exit->EXIT ';'\n");}
      | EXIT IDENTIFICADOR ';'                  {printf("\tinstruccion_exit->EXIT IDENTIFICADOR ';'\n");}
      | EXIT WHEN expresion ';'                 {printf("\tinstruccion_exit->EXIT WHEN expresion ';'\n");}
      | EXIT IDENTIFICADOR WHEN expresion ';'   {printf("\tinstruccion_exit->EXIT IDENTIFICADOR WHEN expresion ';'\n");}
      ;

instruccion_if
      : IF expresion THEN lista_instruccion FINISH IF ';'                           {printf("\tinstruccion_if->IF expresion THEN lista_instruccion FINISH IF ';'\n");}
      | IF expresion THEN lista_instruccion ELSE lista_instruccion FINISH IF ';'    {printf("\tinstruccion_if->IF expresion THEN lista_instruccion ELSE lista_instruccion FINISH IF ';'\n");}
      ;

instruccion_case
      : CASE expresion IS lista_caso_when FINISH CASE ';'   {printf("\tinstruccion_case->CASE expresion IS lista_caso_when FINISH CASE ';'\n");}
      ;

caso_when
      : WHEN entrada FLECHA lista_instruccion                     {printf("\tcaso_when->WHEN entrada FLECHA lista_instruccion\n");}
      | WHEN entrada lista_entrada FLECHA lista_instruccion       {printf("\tcaso_when->WHEN entrada lista_entrada FLECHA lista_instruccion\n");}
      ;

lista_caso_when
      : caso_when                         {printf("\tlista_caso_when->caso_when\n");}
      | lista_caso_when caso_when         {printf("\tlista_caso_when->lista_caso_when caso_when\n");}
      ;

entrada
      : expresion                         {printf("\tentrada->expresion\n");}
      | expresion DOS_PTOS expresion      {printf("\tentrada->expresion DOS_PTOS expresion\n");}
      | OTHERS                            {printf("\tentrada->OTHERS\n");}
      ;

lista_entrada
      : entrada                           {printf("\tlista_entrada->entrada\n");}
      | entrada '|' lista_entrada         {printf("\tlista_entrada->entrada '|' lista_entrada\n");}
      ;

instruccion_loop
      : clausula_iteracion bucle_base ';'                         {printf("\tinstruccion_loop->clausula_iteracion bucle_base ';'\n");}
      | IDENTIFICADOR ':' clausula_iteracion bucle_base ';'       {printf("\tinstruccion_loop->IDENTIFICADOR ':' clausula_iteracion bucle_base ';'\n");}
      ;

clausula_iteracion
      : FOR IDENTIFICADOR IN expresion DOS_PTOS expresion               {printf("\tclausula_iteracion->FOR IDENTIFICADOR IN expresion DOS_PTOS expresion\n");}
      | FOR IDENTIFICADOR IN REVERSE expresion DOS_PTOS expresion       {printf("\tclausula_iteracion->FOR IDENTIFICADOR IN REVERSE expresion DOS_PTOS expresion\n");}
      | FOREACH IDENTIFICADOR IN expresion                              {printf("\tclausula_iteracion->FOREACH IDENTIFICADOR IN expresion\n");}
      | WHILE expresion                                                 {printf("\tclausula_iteracion->WHILE expresion\n");}
      ;

bucle_base
      : LOOP lista_instruccion FINISH LOOP      {printf("\tbucle_base->LOOP lista_instruccion FINISH LOOP\n");}
      ;

instruccion_rise
      : RAISE IDENTIFICADOR ';'     {printf("\tinstruccion_rise->RAISE IDENTIFICADOR ';'\n");}
      ;

instruccion_try_catch
      : TRY lista_instruccion clausulas_excepcion FINISH TRY      {printf("\tinstruccion_try_catch->TRY lista_instruccion clausulas_excepcion FINISH TRY\n");}
      ;

clausulas_excepcion
      : clausula_defecto                                    {printf("\tclausulas_excepcion->clausula_defecto\n");}
      | lista_clausula_especifica clausula_defecto          {printf("\tclausulas_excepcion->lista_clausula_especifica clausula_defecto\n");}
      | lista_clausula_especifica                           {printf("\tclausulas_excepcion->lista_clausula_especifica\n");}
      ;

clausula_especifica
      : EXCEPTION '(' IDENTIFICADOR ')' lista_instruccion   {printf("\tclausula_especifica->EXCEPTION '(' IDENTIFICADOR ')' lista_instruccion\n");}
      ;

lista_clausula_especifica
      : clausula_especifica                                 {printf("\tlista_clausula_especifica->clausula_especifica\n");}
      | lista_clausula_especifica clausula_especifica       {printf("\tlista_clausula_especifica->lista_clausula_especifica clausula_especifica\n");}
      ;

clausula_defecto
      : DEFAULT '(' IDENTIFICADOR ')' lista_instruccion     {printf("\tclausula_defecto->DEFAULT '(' IDENTIFICADOR ')' lista_instruccion\n");}
      ;

llamada_procedure
      : llamada_suprograma ';'      {printf("\tllamada_procedure->llamada_suprograma ';'\n");}
      ;

llamada_suprograma
      : IDENTIFICADOR '('')'                    {printf("\tllamada_suprograma->IDENTIFICADOR '('')'\n");}
      | IDENTIFICADOR '(' lista_expresion ')'   {printf("\tllamada_suprograma->IDENTIFICADOR '(' lista_expresion ')'\n");}
      ;


//***************************** EXPRESIONES *****************************

primario
      : literal               {printf("\tprimario->literal\n");}
      | nombre                {printf("\tprimario->nombre\n");}
      | '(' expresion ')'     {printf("\tprimario->(expresion)\n");}
      ;

literal
      : CTC_CADENA            {printf("\tliteral->CTC_CADENA\n");}
      | CTC_CARACTER          {printf("\tliteral->CTC_CARACTER\n");}
      | CTC_FLOAT             {printf("\tliteral->CTC_FLOAT\n");}
      | CTC_INT               {printf("\tliteral->CTC_INT\n");}
      | TRUE                  {printf("\tliteral->TRUE\n");}
      | FALSE                 {printf("\tliteral->FALSE\n");}
      ;

nombre
      : componente_indexado   {printf("\tnombre->componente_indexado\n");}
      | componente_hash       {printf("\tnombre->componente_hash\n");}
      | componente_compuesto  {printf("\tnombre->componente_compuesto\n");}
      | llamada_suprograma    {printf("\tnombre->llamada_suprograma\n");}
      | IDENTIFICADOR         {printf("\tnombre->IDENTIFICADOR\n");}
      ;

componente_indexado
      : nombre '[' expresion ']'    {printf("\tcomponente_indexado->nombre[expresion]\n");}
      ;

componente_hash
      : nombre '{' expresion '}'    {printf("\tcomponente_hash->nombre{expresion}\n");}
      ;

componente_compuesto
      : nombre '.' IDENTIFICADOR          {printf("\tcomponente_compuesto->nombre . IDENTIFICADOR\n");}
      | nombre '.' llamada_suprograma     {printf("\tcomponente_compuesto->nombre . llamada_suprograma\n");}
      ;

expresion_logica 
    : CTC_FLOAT
    | CTC_INT
    | expresion_logica OR expresion_logica            {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica AND expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | NOT expresion_logica                            {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica MAYOR_IGUAL expresion_logica   {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica MENOR_IGUAL expresion_logica   {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '>' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '<' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica DISTINTO expresion_logica      {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '=' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '@' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '&' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '+' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '-' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica MOD expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '%' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica '*' expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | expresion_logica EXP expresion_logica           {printf("\texpresion_logica->expresion_logica\n");}
    | '-' expresion_logica                            {printf("\texpresion_logica->expresion_logica\n");}
    ;

expresion
      : expresion_logica                                    {printf("\texpresion->expresion_logica\n");}
      | expresion_logica IF expresion ELSE expresion        {printf("\texpresion->expresion_logica IF expresion ELSE expresion\n");}
      ;

%%

int yyerror(char *s) {
  fflush(stdout);
  printf("\t   **ERROR**, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("\tUso: ./machina NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
