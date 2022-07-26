/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "machina.y"


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);


#line 82 "machina.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MACHINA_TAB_H_INCLUDED
# define YY_YY_MACHINA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACT = 258,
    AND = 259,
    ARRAY = 260,
    ASIG = 261,
    BOOLEAN = 262,
    CLASS = 263,
    CONSTRUCTOR = 264,
    CTC_CADENA = 265,
    CTC_CARACTER = 266,
    CTC_FLOAT = 267,
    CTC_INT = 268,
    CASE = 269,
    CHARACTER = 270,
    CONSTANT = 271,
    DEFAULT = 272,
    DESTRUCTOR = 273,
    DISTINTO = 274,
    DOS_PTOS = 275,
    ELSE = 276,
    ENUMERATION = 277,
    ESPECIFIC = 278,
    EXCEPTION = 279,
    EXIT = 280,
    EXP = 281,
    FALSE = 282,
    FINAL = 283,
    FINISH = 284,
    FLECHA = 285,
    FLOAT = 286,
    FOREACH = 287,
    FOR = 288,
    FUNCTION = 289,
    HASHTABLE = 290,
    IDENTIFICADOR = 291,
    IF = 292,
    IN = 293,
    INTEGER = 294,
    IS = 295,
    LOOP = 296,
    MAYOR_IGUAL = 297,
    MENOR_IGUAL = 298,
    MOD = 299,
    NOT = 300,
    NIL = 301,
    OF = 302,
    OR = 303,
    OTHERS = 304,
    OUT = 305,
    PROCEDURE = 306,
    PRIVATE = 307,
    PROTECTED = 308,
    PUBLIC = 309,
    RAISE = 310,
    RECORD = 311,
    RETURN = 312,
    REVERSE = 313,
    START = 314,
    THEN = 315,
    TRUE = 316,
    TRY = 317,
    TYPE = 318,
    WHEN = 319,
    WHILE = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MACHINA_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   684

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  375

#define YYUNDEFTOK  2
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    71,    67,     2,
      82,    83,    70,    68,    77,    69,    85,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    76,
      73,    72,    74,     2,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    84,    81,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    28,    28,    29,    30,    34,    35,    36,    37,    38,
      39,    40,    41,    45,    46,    50,    51,    52,    53,    57,
      61,    62,    66,    67,    71,    75,    76,    77,    78,    79,
      83,    87,    88,    89,    90,    94,    98,   102,   103,   107,
     108,   112,   113,   119,   123,   124,   125,   129,   133,   137,
     138,   142,   146,   150,   151,   155,   156,   160,   161,   165,
     166,   167,   171,   172,   173,   177,   178,   182,   183,   184,
     185,   186,   190,   191,   195,   199,   200,   204,   205,   211,
     212,   216,   217,   218,   219,   219,   224,   225,   229,   230,
     234,   235,   239,   240,   244,   245,   249,   250,   251,   252,
     256,   257,   261,   262,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   281,   285,   289,   293,   294,   295,
     296,   300,   301,   305,   309,   310,   314,   315,   319,   320,
     321,   325,   326,   330,   331,   335,   336,   337,   338,   342,
     346,   350,   354,   355,   356,   360,   364,   365,   369,   373,
     377,   378,   391,   392,   393,   394,   395,   396,   400,   401,
     402,   403,   404,   408,   412,   416,   417,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   444,   445
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "AND", "ARRAY", "ASIG",
  "BOOLEAN", "CLASS", "CONSTRUCTOR", "CTC_CADENA", "CTC_CARACTER",
  "CTC_FLOAT", "CTC_INT", "CASE", "CHARACTER", "CONSTANT", "DEFAULT",
  "DESTRUCTOR", "DISTINTO", "DOS_PTOS", "ELSE", "ENUMERATION", "ESPECIFIC",
  "EXCEPTION", "EXIT", "EXP", "FALSE", "FINAL", "FINISH", "FLECHA",
  "FLOAT", "FOREACH", "FOR", "FUNCTION", "HASHTABLE", "IDENTIFICADOR",
  "IF", "IN", "INTEGER", "IS", "LOOP", "MAYOR_IGUAL", "MENOR_IGUAL", "MOD",
  "NOT", "NIL", "OF", "OR", "OTHERS", "OUT", "PROCEDURE", "PRIVATE",
  "PROTECTED", "PUBLIC", "RAISE", "RECORD", "RETURN", "REVERSE", "START",
  "THEN", "TRUE", "TRY", "TYPE", "WHEN", "WHILE", "'@'", "'&'", "'+'",
  "'-'", "'*'", "'%'", "'='", "'<'", "'>'", "':'", "';'", "','", "'['",
  "']'", "'{'", "'}'", "'('", "')'", "'|'", "'.'", "$accept",
  "declaracion", "declaracion_objeto", "lista_identificadores",
  "tipo_escalar", "asignacion_escalar", "lista_expresion", "tipo_complejo",
  "nombre_de_tipo", "tipo_compuesto", "asignacion_complejo",
  "objeto_complejo", "elemento_hastable", "elemento_registro",
  "lista_objeto_complejo", "lista_elemento_hastable",
  "lista_elemento_registro", "declaracion_tipo", "especificacion_tipo",
  "tipo_tablero", "tipo_registro", "lista_componente", "componente",
  "tipo_hashtable", "tipo_clase", "lista_componente_clase",
  "componente_clase", "declaracion_componente", "visibilidad",
  "declaracion_metodo", "modificador", "lista_modificador",
  "tipo_enumeracion", "elemento", "lista_elemento",
  "declaracion_subprograma", "especificacion_subprograma", "$@1",
  "parte_formal", "declaracion_parametros", "lista_declaracion_parametro",
  "declaracion_parametro", "modo", "cuerpo_subprograma",
  "lista_instruccion", "lista_declaracion", "instruccion",
  "instruccion_vacia", "instruccion_asignacion", "instruccion_return",
  "instruccion_exit", "instruccion_if", "instruccion_case", "caso_when",
  "lista_caso_when", "entrada", "lista_entrada", "instruccion_loop",
  "clausula_iteracion", "bucle_base", "instruccion_rise",
  "instruccion_try_catch", "clausulas_excepcion", "clausula_especifica",
  "lista_clausula_especifica", "clausula_defecto", "llamada_procedure",
  "llamada_suprograma", "literal", "nombre", "componente_indexado",
  "componente_hash", "componente_compuesto", "expresion_logica",
  "expresion", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,    64,    38,    43,    45,
      42,    37,    61,    60,    62,    58,    59,    44,    91,    93,
     123,   125,    40,    41,   124,    46
};
# endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     352,   -15,  -141,    11,    12,    31,  -141,   -45,  -141,  -141,
     -23,   -25,   -12,    67,  -141,   548,    79,    16,  -141,    48,
     115,   115,   628,    80,  -141,   147,  -141,   628,   116,  -141,
     124,  -141,  -141,   115,     5,     9,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,   557,  -141,   300,  -141,    60,    91,
    -141,   115,    99,  -141,  -141,  -141,   112,   148,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,   149,  -141,  -141,   320,
    -141,  -141,   361,  -141,  -141,   113,  -141,    36,    38,   389,
     123,   109,    20,  -141,   148,  -141,   126,    50,  -141,   140,
     148,   -18,   153,   189,    73,   148,   142,   190,   148,   557,
     148,   431,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
     187,  -141,  -141,  -141,   161,     8,  -141,  -141,  -141,   557,
    -141,   593,  -141,  -141,   162,  -141,  -141,  -141,  -141,   148,
     148,   239,   219,   157,   233,  -141,  -141,  -141,  -141,  -141,
     166,  -141,   170,   107,   628,   628,   193,  -141,   176,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,    50,    50,   220,
    -141,  -141,  -141,   215,   -41,   148,  -141,   221,   222,     7,
       0,   206,  -141,   196,   199,   377,  -141,   249,  -141,   557,
     210,  -141,   148,   148,   148,   252,   458,   250,  -141,   628,
     212,   115,   205,   326,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   169,  -141,  -141,  -141,   259,  -141,   -13,  -141,
     224,   226,  -141,   148,  -141,   129,   268,  -141,    76,   293,
    -141,    46,   240,   148,  -141,   227,   148,   146,   187,  -141,
      56,   557,  -141,  -141,   242,   243,   299,  -141,    65,  -141,
    -141,   485,  -141,   255,   253,   254,   257,  -141,   301,  -141,
    -141,   628,  -141,   326,   205,   248,   319,   205,   205,   326,
     326,   326,   326,   326,   326,   326,   326,   205,   205,   205,
     258,   324,   223,   322,   107,   628,  -141,  -141,    50,  -141,
      50,    50,  -141,    50,   220,  -141,   281,  -141,    -9,   270,
    -141,  -141,   148,   335,   285,  -141,   404,   321,   329,   304,
    -141,  -141,   339,  -141,  -141,  -141,  -141,  -141,   148,   315,
     359,  -141,  -141,  -141,   307,  -141,  -141,  -141,  -141,  -141,
    -141,   182,   362,   371,  -141,  -141,   370,   148,  -141,   557,
     355,   310,   323,  -141,  -141,  -141,   628,  -141,  -141,   557,
     327,   375,   148,   331,   148,  -141,   512,   332,   557,   557,
    -141,   557,   281,   557,  -141,  -141,  -141,   379,  -141,   557,
     557,  -141,   557,   341,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,     0,     0,     0,     2,     0,     3,     4,
       0,    83,    81,     0,     1,     0,     0,     0,    79,     0,
      86,    86,     0,     0,    17,     0,    18,     0,     0,    16,
       0,    24,    15,     0,     0,     0,    22,    23,    25,    26,
      27,    28,    29,    14,     0,   102,     0,    80,     0,     0,
      87,    88,     0,    44,    45,    46,     0,     0,    69,    67,
      68,    70,    71,    64,    63,    62,     0,    59,    60,     0,
      55,    57,     0,    61,    72,     0,    65,     0,     0,     0,
       0,     0,     0,    49,     0,     5,     0,     0,     9,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,     0,   100,   104,   105,   107,   106,   108,   109,   110,
       0,   111,   112,   113,   161,     0,   158,   159,   160,     0,
     103,     0,    84,    89,    90,    82,    43,   167,   168,     0,
       0,   187,     0,     0,     0,    56,    58,    73,    66,     6,
       0,    10,     0,     0,     0,     0,     0,    50,    19,    20,
       7,   152,   153,   154,   155,   157,   156,     0,     0,     0,
      30,    34,    11,     0,     0,     0,   117,     0,     0,     0,
       0,     0,   114,     0,     0,     0,   138,    96,   101,     0,
       0,   149,     0,     0,     0,     0,     0,    94,    92,     0,
       0,     0,   171,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     8,    12,     0,    77,     0,    75,
       0,     0,    48,     0,    37,     0,     0,    39,     0,     0,
      41,     0,     0,     0,   118,     0,     0,     0,     0,   150,
       0,     0,   140,   116,     0,     0,     0,   146,   144,   142,
      97,     0,   133,     0,     0,     0,   165,   166,    98,    95,
      93,     0,    91,   170,   176,   185,     0,   172,   173,   182,
     169,   178,   179,   180,   181,   184,   183,   177,   175,   174,
       0,     0,     0,     0,     0,     0,    51,    21,     0,    31,
       0,     0,    32,     0,     0,    33,     0,   126,     0,     0,
     119,   137,     0,     0,     0,   151,     0,     0,     0,     0,
     147,   143,     0,   115,   163,   164,    99,    85,     0,     0,
       0,    76,    74,    78,     0,    38,    35,    40,    36,    42,
     130,     0,   128,     0,   127,   120,     0,     0,   134,     0,
       0,     0,     0,   141,   139,   188,     0,    54,    52,     0,
     131,     0,     0,     0,     0,   135,     0,     0,     0,     0,
      47,   124,     0,     0,   129,   123,   136,     0,   121,   148,
     145,   132,   125,     0,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,    19,   121,   -14,    -5,   342,   251,   395,    44,    39,
     348,   -79,   136,   137,  -141,  -141,  -141,   173,  -116,  -141,
    -141,  -141,   353,  -141,  -141,   218,   -68,   366,  -141,  -141,
     368,  -141,  -141,   160,  -141,    34,  -141,  -141,   425,  -141,
     256,   -42,  -141,  -141,   -95,  -141,   -99,  -141,  -141,  -141,
    -141,  -141,  -141,   150,  -141,   155,    87,  -141,   283,   216,
    -141,  -141,  -141,   207,  -141,   209,  -141,   273,  -140,  -141,
    -141,  -141,  -141,  -104,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    67,     7,    53,    86,   148,    35,    54,    55,
      89,   226,   227,   230,   225,   228,   231,    68,    56,    38,
      39,    82,    83,    40,    41,    69,    70,    71,    72,    73,
      74,    75,    42,   217,   218,    76,    10,   190,    49,    50,
     123,    51,   189,    19,   101,    46,   102,   103,   104,   105,
     106,   107,   108,   297,   298,   350,   351,   109,   110,   180,
     111,   112,   246,   247,   248,   249,   113,   114,   161,   115,
     116,   117,   118,   131,   332
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     132,   135,   178,   219,   175,   188,    48,    48,   160,   124,
      34,    84,   127,   128,   182,    87,   283,    17,   164,    81,
     333,    11,    77,   233,   186,   192,   193,   149,   220,   221,
      15,    14,    16,   163,     9,   234,    45,    48,   171,    92,
      93,   174,    84,   176,    87,   129,   165,    12,    13,   146,
       1,     9,     2,    18,    37,   296,     2,    20,   166,    36,
     151,   152,   153,   154,   284,   120,    37,     3,    81,   130,
      21,    36,   100,   260,   143,    44,   178,   155,   224,     4,
       9,    85,   244,   239,   251,    88,   183,   178,   184,   245,
     263,   264,   265,   185,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    22,   235,   138,
     133,   156,   139,   149,   141,    43,    58,   151,   152,   153,
     154,     6,    59,   294,    47,   253,   254,   255,   157,   295,
     158,    60,   159,   223,   155,   121,    61,    16,     6,   305,
     266,    62,   321,   216,   219,   317,   306,     1,   169,   124,
      58,     2,   178,   291,   280,   170,    59,   292,   127,   128,
     127,   128,    57,    79,     3,    60,   287,     6,   156,   324,
      61,    80,    58,     8,   122,    62,   299,    48,    59,   301,
     303,     1,   125,     2,   145,    31,    16,    60,   126,   167,
       8,   129,    61,   129,   127,   128,   144,    62,     3,    63,
      64,    65,   150,     1,   302,     2,   288,   178,   289,   325,
       4,   326,   349,   135,   328,   130,   162,   130,   172,     8,
       3,    63,    64,    65,    -1,   168,   173,   129,   179,    66,
     360,   330,     4,   151,   152,   153,   154,   181,   191,   211,
     212,   213,   214,   194,   356,   336,   215,    -1,    -1,   222,
     155,   130,   194,   223,   361,   232,   229,   178,   195,   236,
     237,   345,   178,   369,   370,   196,   241,   195,   372,   261,
     178,   178,   242,   178,   196,   243,   197,    -1,    -1,    -1,
     355,   198,   199,   200,   156,   250,   252,   201,   256,   282,
     198,   199,   200,   127,   128,   364,   201,   366,   290,   293,
     259,   285,   286,   300,   296,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   202,   203,   204,   205,   206,   207,
     208,   209,   210,    58,   307,   308,   129,    58,   309,    59,
     330,   313,   314,    59,     1,   315,     2,   316,    60,   170,
     318,   319,    60,    61,   322,   195,   335,    61,    62,   134,
     130,     3,    62,   320,     1,   337,     2,   341,     1,   119,
       2,   338,   346,     4,    58,   342,   343,   347,   198,   199,
      59,     3,    63,    64,    65,     3,    63,    64,    65,    60,
     344,   348,   352,     4,    61,   353,     1,     4,     2,    62,
     354,    90,   357,   358,   244,     1,    24,     2,   208,   209,
     210,   245,    91,     3,    26,   363,   359,   365,   368,    92,
      93,   362,     3,    94,    95,     4,   373,   374,    90,   140,
      29,   240,    78,    96,     4,   339,   142,   327,    32,    91,
     281,   329,    97,   340,    98,   147,    92,    93,   136,    99,
      94,    95,   100,   137,   323,    90,    52,   262,   334,   371,
      96,   331,   238,     0,   304,   310,    91,   311,   257,    97,
     177,    98,     0,    92,    93,     0,    99,    94,    95,   100,
       0,     0,    90,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,    91,     0,     0,    97,   258,    98,     0,
      92,    93,     0,    99,    94,    95,   100,     0,     0,    90,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
      91,     0,     0,    97,   312,    98,     0,    92,    93,     0,
      99,    94,    95,   100,     0,     0,    90,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,    91,     0,     0,
      97,   367,    98,     0,    92,    93,     0,    99,    94,    95,
     100,     0,     0,    23,     0,    24,    25,     0,    96,     0,
       0,     0,     0,    26,    27,     0,     0,    97,     0,    98,
      28,    90,     0,     0,    99,     0,     0,   100,     0,    29,
       0,     0,    91,    30,    31,     0,     0,    32,     0,    92,
      93,     0,     0,    94,    95,     0,     0,     0,    23,     0,
      24,    25,     0,    96,    33,     0,     0,     0,    26,     0,
       0,     0,    97,     0,    98,    28,     0,     0,     0,    99,
       0,     0,   100,     0,    29,     0,     0,     0,    30,    31,
       0,   187,    32,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    33,
      28,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,    30,    31,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33
};

static const yytype_int16 yycheck[] =
{
      57,    69,   101,   143,    99,   121,    20,    21,    87,    51,
      15,     6,    12,    13,     6,     6,    29,    40,    36,    33,
      29,    36,    27,    64,   119,   129,   130,    84,   144,   145,
      75,     0,    77,    90,     0,    76,    17,    51,    95,    32,
      33,    98,     6,   100,     6,    45,    64,    36,    36,    29,
      34,    17,    36,    76,    15,    64,    36,    82,    76,    15,
      10,    11,    12,    13,    77,    46,    27,    51,    82,    69,
      82,    27,    65,   189,    79,    59,   175,    27,   157,    63,
      46,    76,    17,    83,   179,    76,    78,   186,    80,    24,
     194,   195,   196,    85,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,    40,   165,    75,
      66,    61,    76,   170,    76,    36,     3,    10,    11,    12,
      13,     0,     9,    77,    76,   182,   183,   184,    78,    83,
      80,    18,    82,    77,    27,    75,    23,    77,    17,    83,
     197,    28,   282,    36,   284,   261,   241,    34,    75,   191,
       3,    36,   251,    77,   211,    82,     9,    81,    12,    13,
      12,    13,    82,    47,    51,    18,   223,    46,    61,   285,
      23,    47,     3,     0,    83,    28,   233,   191,     9,   236,
     237,    34,    83,    36,    75,    36,    77,    18,    76,    36,
      17,    45,    23,    45,    12,    13,    73,    28,    51,    52,
      53,    54,    76,    34,    58,    36,    77,   306,    79,   288,
      63,   290,    30,   281,   293,    69,    76,    69,    76,    46,
      51,    52,    53,    54,    19,    36,    36,    45,    41,    82,
     346,    49,    63,    10,    11,    12,    13,    76,    76,    20,
      83,     8,    76,     4,   339,   302,    76,    42,    43,    56,
      27,    69,     4,    77,   349,    40,    36,   356,    19,    38,
      38,   318,   361,   358,   359,    26,    60,    19,   363,    57,
     369,   370,    76,   372,    26,    76,    37,    72,    73,    74,
     337,    42,    43,    44,    61,    36,    76,    48,    36,    30,
      42,    43,    44,    12,    13,   352,    48,   354,    30,     6,
      50,    77,    76,    76,    64,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    82,    82,    45,     3,    29,     9,
      49,    76,    79,     9,    34,    81,    36,    36,    18,    82,
      21,    83,    18,    23,    22,    19,    76,    23,    28,    29,
      69,    51,    28,    29,    34,    20,    36,    36,    34,    59,
      36,    76,    47,    63,     3,    36,    62,     8,    42,    43,
       9,    51,    52,    53,    54,    51,    52,    53,    54,    18,
      41,    74,    20,    63,    23,    14,    34,    63,    36,    28,
      20,    14,    37,    83,    17,    34,     7,    36,    72,    73,
      74,    24,    25,    51,    15,    30,    83,    76,    76,    32,
      33,    84,    51,    36,    37,    63,    37,    76,    14,    77,
      31,   170,    27,    46,    63,    21,    78,   291,    39,    25,
     212,   294,    55,    29,    57,    82,    32,    33,    72,    62,
      36,    37,    65,    75,   284,    14,    21,   191,   298,   362,
      46,   296,   169,    -1,   238,   248,    25,   248,   185,    55,
      29,    57,    -1,    32,    33,    -1,    62,    36,    37,    65,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    55,    29,    57,    -1,
      32,    33,    -1,    62,    36,    37,    65,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    55,    29,    57,    -1,    32,    33,    -1,
      62,    36,    37,    65,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      55,    29,    57,    -1,    32,    33,    -1,    62,    36,    37,
      65,    -1,    -1,     5,    -1,     7,     8,    -1,    46,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    55,    -1,    57,
      22,    14,    -1,    -1,    62,    -1,    -1,    65,    -1,    31,
      -1,    -1,    25,    35,    36,    -1,    -1,    39,    -1,    32,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,     5,    -1,
       7,     8,    -1,    46,    56,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    55,    -1,    57,    22,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    31,    -1,    -1,    -1,    35,    36,
      -1,    38,    39,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    56,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    36,    51,    63,    87,    88,    89,   103,   121,
     122,    36,    36,    36,     0,    75,    77,    40,    76,   129,
      82,    82,    40,     5,     7,     8,    15,    16,    22,    31,
      35,    36,    39,    56,    90,    93,    94,    95,   105,   106,
     109,   110,   118,    36,    59,    87,   131,    76,    89,   124,
     125,   127,   124,    90,    94,    95,   104,    82,     3,     9,
      18,    23,    28,    52,    53,    54,    82,    88,   103,   111,
     112,   113,   114,   115,   116,   117,   121,    90,    93,    47,
      47,    89,   107,   108,     6,    76,    91,     6,    76,    96,
      14,    25,    32,    33,    36,    37,    46,    55,    57,    62,
      65,   130,   132,   133,   134,   135,   136,   137,   138,   143,
     144,   146,   147,   152,   153,   155,   156,   157,   158,    59,
      87,    75,    83,   126,   127,    83,    76,    12,    13,    45,
      69,   159,   160,    94,    29,   112,   113,   116,   121,    76,
      91,    76,    96,    90,    73,    75,    29,   108,    92,   160,
      76,    10,    11,    12,    13,    27,    61,    78,    80,    82,
      97,   154,    76,   160,    36,    64,    76,    36,    36,    75,
      82,   160,    76,    36,   160,   130,   160,    29,   132,    41,
     145,    76,     6,    78,    80,    85,   130,    38,   104,   128,
     123,    76,   159,   159,     4,    19,    26,    37,    42,    43,
      44,    48,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    20,    83,     8,    76,    76,    36,   119,   120,   154,
     104,   104,    56,    77,    97,   100,    97,    98,   101,    36,
      99,   102,    40,    64,    76,   160,    38,    38,   144,    83,
      92,    60,    76,    76,    17,    24,   148,   149,   150,   151,
      36,   130,    76,   160,   160,   160,    36,   153,    29,    50,
     104,    57,   126,   159,   159,   159,   160,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     160,   111,    30,    29,    77,    77,    76,   160,    77,    79,
      30,    77,    81,     6,    77,    83,    64,   139,   140,   160,
      76,   160,    58,   160,   145,    83,   130,    82,    82,    29,
     149,   151,    29,    76,    79,    81,    36,   104,    21,    83,
      29,   154,    22,   119,   104,    97,    97,    98,    97,    99,
      49,   141,   160,    29,   139,    76,   160,    20,    76,    21,
      29,    36,    36,    62,    41,   160,    47,     8,    74,    30,
     141,   142,    20,    14,    20,   160,   130,    37,    83,    83,
     104,   130,    84,    30,   160,    76,   160,    29,    76,   130,
     130,   142,   130,    37,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      92,    92,    93,    93,    94,    95,    95,    95,    95,    95,
      96,    97,    97,    97,    97,    98,    99,   100,   100,   101,
     101,   102,   102,   103,   104,   104,   104,   105,   106,   107,
     107,   108,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   114,   114,   115,   115,   116,   116,   116,
     116,   116,   117,   117,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   122,   123,   122,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   133,   134,   135,   136,   136,   136,
     136,   137,   137,   138,   139,   139,   140,   140,   141,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   144,   145,
     146,   147,   148,   148,   148,   149,   150,   150,   151,   152,
     153,   153,   154,   154,   154,   154,   154,   154,   155,   155,
     155,   155,   155,   156,   157,   158,   158,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   160,   160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     4,     5,     5,     6,     4,
       5,     5,     6,     1,     3,     1,     1,     1,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     5,     1,     1,     1,     8,     4,     1,
       2,     4,     7,     4,     7,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     6,     1,     3,     1,     3,     2,
       3,     2,     5,     2,     0,     8,     0,     1,     1,     2,
       1,     3,     3,     4,     1,     2,     4,     5,     5,     6,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     2,     3,     4,
       5,     7,     9,     7,     4,     5,     1,     2,     1,     3,
       1,     1,     3,     3,     5,     6,     7,     4,     2,     4,
       3,     5,     1,     2,     1,     5,     1,     2,     5,     2,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     3,     1,     1,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 28 "machina.y"
                                          {printf("\tdeclaracion->declaracion_objeto\n");}
#line 1721 "machina.tab.c"
    break;

  case 3:
#line 29 "machina.y"
                                          {printf("\tdeclaracion->declaracion_tipo\n");}
#line 1727 "machina.tab.c"
    break;

  case 4:
#line 30 "machina.y"
                                          {printf("\tdeclaracion->declaracion_subprograma\n");}
#line 1733 "machina.tab.c"
    break;

  case 5:
#line 34 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_escalar ';'\n");}
#line 1739 "machina.tab.c"
    break;

  case 6:
#line 35 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_escalar ';'\n");}
#line 1745 "machina.tab.c"
    break;

  case 7:
#line 36 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_escalar asignacion_escalar ';'\n");}
#line 1751 "machina.tab.c"
    break;

  case 8:
#line 37 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_escalar asignacion_escalar ';'\n");}
#line 1757 "machina.tab.c"
    break;

  case 9:
#line 38 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_complejo ';'\n");}
#line 1763 "machina.tab.c"
    break;

  case 10:
#line 39 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_complejo ';'\n");}
#line 1769 "machina.tab.c"
    break;

  case 11:
#line 40 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' tipo_complejo asignacion_complejo ';'\n");}
#line 1775 "machina.tab.c"
    break;

  case 12:
#line 41 "machina.y"
                                                                                    {printf("\tdeclaracion_objeto->lista_identificadores ':' CONSTANT tipo_complejo asignacion_complejo ';'\n");}
#line 1781 "machina.tab.c"
    break;

  case 13:
#line 45 "machina.y"
                                                      {printf("\tlista_identificadores->IDENTIFICADOR\n");}
#line 1787 "machina.tab.c"
    break;

  case 14:
#line 46 "machina.y"
                                                      {printf("\tlista_identificadores->lista_identificadores ',' IDENTIFICADOR\n");}
#line 1793 "machina.tab.c"
    break;

  case 15:
#line 50 "machina.y"
                        {printf("\ttipo_escalar->INTEGER\n");}
#line 1799 "machina.tab.c"
    break;

  case 16:
#line 51 "machina.y"
                        {printf("\ttipo_escalar->FLOAT\n");}
#line 1805 "machina.tab.c"
    break;

  case 17:
#line 52 "machina.y"
                        {printf("\ttipo_escalar->BOOLEAN\n");}
#line 1811 "machina.tab.c"
    break;

  case 18:
#line 53 "machina.y"
                        {printf("\ttipo_escalar->CHARACTER\n");}
#line 1817 "machina.tab.c"
    break;

  case 19:
#line 57 "machina.y"
                                    {printf("\tasignacion_escalar->ASIG lista_expresion \n");}
#line 1823 "machina.tab.c"
    break;

  case 20:
#line 61 "machina.y"
                                          {printf("\tlista_expresion->expresion\n");}
#line 1829 "machina.tab.c"
    break;

  case 21:
#line 62 "machina.y"
                                          {printf("\tlista_expresion->lista_expresion ',' expresion\n");}
#line 1835 "machina.tab.c"
    break;

  case 22:
#line 66 "machina.y"
                              {printf("\ttipo_complejo->nombre_de_tipo\n");}
#line 1841 "machina.tab.c"
    break;

  case 23:
#line 67 "machina.y"
                              {printf("\ttipo_complejo->tipo_compuesto\n");}
#line 1847 "machina.tab.c"
    break;

  case 24:
#line 71 "machina.y"
                              {printf("\tnombre_de_tipo->IDENTIFICADOR\n");}
#line 1853 "machina.tab.c"
    break;

  case 25:
#line 75 "machina.y"
                              {printf("\ttipo_compuesto->tipo_tablero\n");}
#line 1859 "machina.tab.c"
    break;

  case 26:
#line 76 "machina.y"
                              {printf("\ttipo_compuesto->tipo_registro\n");}
#line 1865 "machina.tab.c"
    break;

  case 27:
#line 77 "machina.y"
                              {printf("\ttipo_compuesto->tipo_hashtable\n");}
#line 1871 "machina.tab.c"
    break;

  case 28:
#line 78 "machina.y"
                              {printf("\ttipo_compuesto->tipo_clase\n");}
#line 1877 "machina.tab.c"
    break;

  case 29:
#line 79 "machina.y"
                              {printf("\ttipo_compuesto->tipo_enumeracion\n");}
#line 1883 "machina.tab.c"
    break;

  case 30:
#line 83 "machina.y"
                              {printf("\tasignacion_complejo->ASIG objeto_complejo\n");}
#line 1889 "machina.tab.c"
    break;

  case 31:
#line 87 "machina.y"
                                          {printf("\tobjeto_complejo->'[' lista_objeto_complejo ']'\n");}
#line 1895 "machina.tab.c"
    break;

  case 32:
#line 88 "machina.y"
                                          {printf("\tobjeto_complejo->'{' lista_elemento_hastable '}'\n");}
#line 1901 "machina.tab.c"
    break;

  case 33:
#line 89 "machina.y"
                                          {printf("\tobjeto_complejo->'(' lista_elemento_registro ')'\n");}
#line 1907 "machina.tab.c"
    break;

  case 34:
#line 90 "machina.y"
                                          {printf("\tobjeto_complejo->literal\n");}
#line 1913 "machina.tab.c"
    break;

  case 35:
#line 94 "machina.y"
                                                {printf("\telemento_hastable->objeto_complejo FLECHA objeto_complejo\n");}
#line 1919 "machina.tab.c"
    break;

  case 36:
#line 98 "machina.y"
                                                {printf("\telemento_registro->IDENTIFICADOR ASIG objeto_complejo\n");}
#line 1925 "machina.tab.c"
    break;

  case 37:
#line 102 "machina.y"
                                                      {printf("\tlista_objeto_complejo->objeto_complejo\n");}
#line 1931 "machina.tab.c"
    break;

  case 38:
#line 103 "machina.y"
                                                      {printf("\tlista_objeto_complejo->lista_objeto_complejo ',' objeto_complejo\n");}
#line 1937 "machina.tab.c"
    break;

  case 39:
#line 107 "machina.y"
                                                            {printf("\tlista_elemento_hastable->elemento_hastable\n");}
#line 1943 "machina.tab.c"
    break;

  case 40:
#line 108 "machina.y"
                                                            {printf("\tlista_elemento_hastable->lista_elemento_hastable ',' elemento_hastable\n");}
#line 1949 "machina.tab.c"
    break;

  case 41:
#line 112 "machina.y"
                                                            {printf("\tlista_elemento_registro->elemento_registro\n");}
#line 1955 "machina.tab.c"
    break;

  case 42:
#line 113 "machina.y"
                                                            {printf("\tlista_elemento_registro->lista_elemento_registro ',' elemento_registro\n");}
#line 1961 "machina.tab.c"
    break;

  case 43:
#line 119 "machina.y"
                                                            {printf("\tdeclaracion_tipo->TYPE IDENTIFICADOR IS especificacion_tipo ';'\n");}
#line 1967 "machina.tab.c"
    break;

  case 44:
#line 123 "machina.y"
                                          {printf("\tespecificacion_tipo->tipo_escalar\n");}
#line 1973 "machina.tab.c"
    break;

  case 45:
#line 124 "machina.y"
                                          {printf("\tespecificacion_tipo->nombre_de_tipo\n");}
#line 1979 "machina.tab.c"
    break;

  case 46:
#line 125 "machina.y"
                                          {printf("\tespecificacion_tipo->tipo_compuesto\n");}
#line 1985 "machina.tab.c"
    break;

  case 47:
#line 129 "machina.y"
                                                                              {printf("\ttipo_tablero->ARRAY '(' expresion DOS_PTOS expresion ')' OF especificacion_tipo\n");}
#line 1991 "machina.tab.c"
    break;

  case 48:
#line 133 "machina.y"
                                                {printf("\ttipo_registro->RECORD lista_componente FINISH RECORD\n");}
#line 1997 "machina.tab.c"
    break;

  case 49:
#line 137 "machina.y"
                                          {printf("\tlista_componente->componente\n");}
#line 2003 "machina.tab.c"
    break;

  case 50:
#line 138 "machina.y"
                                          {printf("\tlista_componente->lista_componente componente\n");}
#line 2009 "machina.tab.c"
    break;

  case 51:
#line 142 "machina.y"
                                                            {printf("\tcomponente->lista_identificadores ':' especificacion_tipo ';'\n");}
#line 2015 "machina.tab.c"
    break;

  case 52:
#line 146 "machina.y"
                                                                              {printf("\ttipo_hashtable->HASHTABLE OF '<' especificacion_tipo ',' especificacion_tipo '>'\n");}
#line 2021 "machina.tab.c"
    break;

  case 53:
#line 150 "machina.y"
                                                                              {printf("\ttipo_clase->CLASS lista_componente_clase FINISH CLASS\n");}
#line 2027 "machina.tab.c"
    break;

  case 54:
#line 151 "machina.y"
                                                                              {printf("\ttipo_clase->CLASS '(' nombre_de_tipo ')' lista_componente_clase FINISH CLASS\n");}
#line 2033 "machina.tab.c"
    break;

  case 55:
#line 155 "machina.y"
                                                      {printf("\tlista_componente_clase->componente_clase\n");}
#line 2039 "machina.tab.c"
    break;

  case 56:
#line 156 "machina.y"
                                                      {printf("\tlista_componente_clase->lista_componente_clase componente_clase\n");}
#line 2045 "machina.tab.c"
    break;

  case 57:
#line 160 "machina.y"
                                                      {printf("\tcomponente_clase->declaracion_componente\n");}
#line 2051 "machina.tab.c"
    break;

  case 58:
#line 161 "machina.y"
                                                      {printf("\tcomponente_clase->visibilidad declaracion_componente\n");}
#line 2057 "machina.tab.c"
    break;

  case 59:
#line 165 "machina.y"
                                    {printf("\tdeclaracion_componente->declaracion_objeto\n");}
#line 2063 "machina.tab.c"
    break;

  case 60:
#line 166 "machina.y"
                                    {printf("\tdeclaracion_componente->declaracion_tipo\n");}
#line 2069 "machina.tab.c"
    break;

  case 61:
#line 167 "machina.y"
                                    {printf("\tdeclaracion_componente->declaracion_metodo\n");}
#line 2075 "machina.tab.c"
    break;

  case 62:
#line 171 "machina.y"
                        {printf("\tvisibilidad->PUBLIC\n");}
#line 2081 "machina.tab.c"
    break;

  case 63:
#line 172 "machina.y"
                        {printf("\tvisibilidad->PROTECTED\n");}
#line 2087 "machina.tab.c"
    break;

  case 64:
#line 173 "machina.y"
                        {printf("\tvisibilidad->PRIVATE\n");}
#line 2093 "machina.tab.c"
    break;

  case 65:
#line 177 "machina.y"
                                                      {printf("\tdeclaracion_metodo->declaracion_subprograma\n");}
#line 2099 "machina.tab.c"
    break;

  case 66:
#line 178 "machina.y"
                                                      {printf("\tdeclaracion_metodo->lista_modificador declaracion_subprograma\n");}
#line 2105 "machina.tab.c"
    break;

  case 67:
#line 182 "machina.y"
                        {printf("\tmodificador->CONSTRUCTOR\n");}
#line 2111 "machina.tab.c"
    break;

  case 68:
#line 183 "machina.y"
                        {printf("\tmodificador->DESTRUCTOR\n");}
#line 2117 "machina.tab.c"
    break;

  case 69:
#line 184 "machina.y"
                        {printf("\tmodificador->ABSTRACT\n");}
#line 2123 "machina.tab.c"
    break;

  case 70:
#line 185 "machina.y"
                        {printf("\tmodificador->ESPECIFIC\n");}
#line 2129 "machina.tab.c"
    break;

  case 71:
#line 186 "machina.y"
                        {printf("\tmodificador->FINAL\n");}
#line 2135 "machina.tab.c"
    break;

  case 72:
#line 190 "machina.y"
                                          {printf("\tlista_modificador->modificador\n");}
#line 2141 "machina.tab.c"
    break;

  case 73:
#line 191 "machina.y"
                                          {printf("\tlista_modificador->lista_modificador modificador\n");}
#line 2147 "machina.tab.c"
    break;

  case 74:
#line 195 "machina.y"
                                                                        {printf("\ttipo_enumeracion->ENUMERATION OF tipo_escalar lista_elemento FINISH ENUMERATION\n");}
#line 2153 "machina.tab.c"
    break;

  case 75:
#line 199 "machina.y"
                                          {printf("\telemento->literal\n");}
#line 2159 "machina.tab.c"
    break;

  case 76:
#line 200 "machina.y"
                                          {printf("\telemento->IDENTIFICADOR FLECHA literal\n");}
#line 2165 "machina.tab.c"
    break;

  case 77:
#line 204 "machina.y"
                                          {printf("\tlista_elemento->elemento\n");}
#line 2171 "machina.tab.c"
    break;

  case 78:
#line 205 "machina.y"
                                          {printf("\tlista_elemento->lista_elemento ',' elemento\n");}
#line 2177 "machina.tab.c"
    break;

  case 79:
#line 211 "machina.y"
                                                            {printf("\tdeclaracion_subprograma->especificacion_subprograma ';'\n");}
#line 2183 "machina.tab.c"
    break;

  case 80:
#line 212 "machina.y"
                                                            {printf("\tdeclaracion_subprograma->especificacion_subprograma cuerpo_subprograma ';'\n");}
#line 2189 "machina.tab.c"
    break;

  case 81:
#line 216 "machina.y"
                                                            {printf("\tespecificacion_subprograma->PROCEDURE IDENTIFICADOR\n");}
#line 2195 "machina.tab.c"
    break;

  case 82:
#line 217 "machina.y"
                                                            {printf("\tespecificacion_subprograma->PROCEDURE IDENTIFICADOR '(' parte_formal ')'\n");}
#line 2201 "machina.tab.c"
    break;

  case 83:
#line 218 "machina.y"
                                                            {printf("\tespecificacion_subprograma->FUNCTION IDENTIFICADOR\n");}
#line 2207 "machina.tab.c"
    break;

  case 84:
#line 219 "machina.y"
                                                            {printf("\tespecificacion_subprograma->FUNCTION IDENTIFICADOR '(' parte_formal ')'\n");}
#line 2213 "machina.tab.c"
    break;

  case 85:
#line 220 "machina.y"
                                                            {printf("\tespecificacion_subprograma->RETURN especificacion_tipo\n");}
#line 2219 "machina.tab.c"
    break;

  case 86:
#line 224 "machina.y"
                                    {printf("\tparte_formal->vacio\n");}
#line 2225 "machina.tab.c"
    break;

  case 87:
#line 225 "machina.y"
                                    {printf("\tparte_formal->declaracion_parametros\n");}
#line 2231 "machina.tab.c"
    break;

  case 88:
#line 229 "machina.y"
                                                            {printf("\tdeclaracion_parametros->declaracion_parametro\n");}
#line 2237 "machina.tab.c"
    break;

  case 89:
#line 230 "machina.y"
                                                            {printf("\tdeclaracion_parametros->declaracion_parametro lista_declaracion_parametro\n");}
#line 2243 "machina.tab.c"
    break;

  case 90:
#line 234 "machina.y"
                                                                  {printf("\tlista_declaracion_parametro->declaracion_parametro\n");}
#line 2249 "machina.tab.c"
    break;

  case 91:
#line 235 "machina.y"
                                                                  {printf("\tlista_declaracion_parametro->declaracion_parametro ';' lista_declaracion_parametro\n");}
#line 2255 "machina.tab.c"
    break;

  case 92:
#line 239 "machina.y"
                                                                  {printf("\tdeclaracion_parametro->lista_identificadores ':' especificacion_tipo\n");}
#line 2261 "machina.tab.c"
    break;

  case 93:
#line 240 "machina.y"
                                                                  {printf("\tdeclaracion_parametro->lista_identificadores ':' modo especificacion_tipo\n");}
#line 2267 "machina.tab.c"
    break;

  case 94:
#line 244 "machina.y"
                        {printf("\tmodo->IN\n");}
#line 2273 "machina.tab.c"
    break;

  case 95:
#line 245 "machina.y"
                        {printf("\tmodo->IN OUT\n");}
#line 2279 "machina.tab.c"
    break;

  case 96:
#line 249 "machina.y"
                                                                              {printf("\tcuerpo_subprograma->IS START lista_instruccion FINISH\n");}
#line 2285 "machina.tab.c"
    break;

  case 97:
#line 250 "machina.y"
                                                                              {printf("\tcuerpo_subprograma->IS START lista_instruccion FINISH IDENTIFICADOR\n");}
#line 2291 "machina.tab.c"
    break;

  case 98:
#line 251 "machina.y"
                                                                              {printf("\tcuerpo_subprograma->IS lista_declaracion START lista_instruccion FINISH\n");}
#line 2297 "machina.tab.c"
    break;

  case 99:
#line 252 "machina.y"
                                                                              {printf("\tcuerpo_subprograma->IS lista_declaracion START lista_instruccion FINISH IDENTIFICADOR\n");}
#line 2303 "machina.tab.c"
    break;

  case 100:
#line 256 "machina.y"
                                          {printf("\tlista_instruccion->instruccion\n");}
#line 2309 "machina.tab.c"
    break;

  case 101:
#line 257 "machina.y"
                                          {printf("\tlista_instruccion->lista_instruccion instruccion\n");}
#line 2315 "machina.tab.c"
    break;

  case 102:
#line 261 "machina.y"
                                          {printf("\tlista_declaracion->declaracion\n");}
#line 2321 "machina.tab.c"
    break;

  case 103:
#line 262 "machina.y"
                                          {printf("\tlista_declaracion->lista_declaracion declaracion\n");}
#line 2327 "machina.tab.c"
    break;

  case 104:
#line 268 "machina.y"
                                    {printf("\tinstruccion->instruccion_vacia\n");}
#line 2333 "machina.tab.c"
    break;

  case 105:
#line 269 "machina.y"
                                    {printf("\tinstruccion->instruccion_asignacion\n");}
#line 2339 "machina.tab.c"
    break;

  case 106:
#line 270 "machina.y"
                                    {printf("\tinstruccion->instruccion_exit\n");}
#line 2345 "machina.tab.c"
    break;

  case 107:
#line 271 "machina.y"
                                    {printf("\tinstruccion->instruccion_return\n");}
#line 2351 "machina.tab.c"
    break;

  case 108:
#line 272 "machina.y"
                                    {printf("\tinstruccion->instruccion_if\n");}
#line 2357 "machina.tab.c"
    break;

  case 109:
#line 273 "machina.y"
                                    {printf("\tinstruccion->instruccion_case\n");}
#line 2363 "machina.tab.c"
    break;

  case 110:
#line 274 "machina.y"
                                    {printf("\tinstruccion->instruccion_loop\n");}
#line 2369 "machina.tab.c"
    break;

  case 111:
#line 275 "machina.y"
                                    {printf("\tinstruccion->instruccion_rise\n");}
#line 2375 "machina.tab.c"
    break;

  case 112:
#line 276 "machina.y"
                                    {printf("\tinstruccion->instruccion_try_catch\n");}
#line 2381 "machina.tab.c"
    break;

  case 113:
#line 277 "machina.y"
                                    {printf("\tinstruccion->llamada_procedure\n");}
#line 2387 "machina.tab.c"
    break;

  case 114:
#line 281 "machina.y"
                  {printf("\tinstruccion_vacia->NIL ';'\n");}
#line 2393 "machina.tab.c"
    break;

  case 115:
#line 285 "machina.y"
                                    {printf("\tinstruccion_asignacion->nombre ASIG expresion ';'\n");}
#line 2399 "machina.tab.c"
    break;

  case 116:
#line 289 "machina.y"
                                    {printf("\tinstruccion_return->RETURN expresion ';'\n");}
#line 2405 "machina.tab.c"
    break;

  case 117:
#line 293 "machina.y"
                                                {printf("\tinstruccion_exit->EXIT ';'\n");}
#line 2411 "machina.tab.c"
    break;

  case 118:
#line 294 "machina.y"
                                                {printf("\tinstruccion_exit->EXIT IDENTIFICADOR ';'\n");}
#line 2417 "machina.tab.c"
    break;

  case 119:
#line 295 "machina.y"
                                                {printf("\tinstruccion_exit->EXIT WHEN expresion ';'\n");}
#line 2423 "machina.tab.c"
    break;

  case 120:
#line 296 "machina.y"
                                                {printf("\tinstruccion_exit->EXIT IDENTIFICADOR WHEN expresion ';'\n");}
#line 2429 "machina.tab.c"
    break;

  case 121:
#line 300 "machina.y"
                                                                                    {printf("\tinstruccion_if->IF expresion THEN lista_instruccion FINISH IF ';'\n");}
#line 2435 "machina.tab.c"
    break;

  case 122:
#line 301 "machina.y"
                                                                                    {printf("\tinstruccion_if->IF expresion THEN lista_instruccion ELSE lista_instruccion FINISH IF ';'\n");}
#line 2441 "machina.tab.c"
    break;

  case 123:
#line 305 "machina.y"
                                                            {printf("\tinstruccion_case->CASE expresion IS lista_caso_when FINISH CASE ';'\n");}
#line 2447 "machina.tab.c"
    break;

  case 124:
#line 309 "machina.y"
                                                                  {printf("\tcaso_when->WHEN entrada FLECHA lista_instruccion\n");}
#line 2453 "machina.tab.c"
    break;

  case 125:
#line 310 "machina.y"
                                                                  {printf("\tcaso_when->WHEN entrada lista_entrada FLECHA lista_instruccion\n");}
#line 2459 "machina.tab.c"
    break;

  case 126:
#line 314 "machina.y"
                                          {printf("\tlista_caso_when->caso_when\n");}
#line 2465 "machina.tab.c"
    break;

  case 127:
#line 315 "machina.y"
                                          {printf("\tlista_caso_when->lista_caso_when caso_when\n");}
#line 2471 "machina.tab.c"
    break;

  case 128:
#line 319 "machina.y"
                                          {printf("\tentrada->expresion\n");}
#line 2477 "machina.tab.c"
    break;

  case 129:
#line 320 "machina.y"
                                          {printf("\tentrada->expresion DOS_PTOS expresion\n");}
#line 2483 "machina.tab.c"
    break;

  case 130:
#line 321 "machina.y"
                                          {printf("\tentrada->OTHERS\n");}
#line 2489 "machina.tab.c"
    break;

  case 131:
#line 325 "machina.y"
                                          {printf("\tlista_entrada->entrada\n");}
#line 2495 "machina.tab.c"
    break;

  case 132:
#line 326 "machina.y"
                                          {printf("\tlista_entrada->entrada '|' lista_entrada\n");}
#line 2501 "machina.tab.c"
    break;

  case 133:
#line 330 "machina.y"
                                                                  {printf("\tinstruccion_loop->clausula_iteracion bucle_base ';'\n");}
#line 2507 "machina.tab.c"
    break;

  case 134:
#line 331 "machina.y"
                                                                  {printf("\tinstruccion_loop->IDENTIFICADOR ':' clausula_iteracion bucle_base ';'\n");}
#line 2513 "machina.tab.c"
    break;

  case 135:
#line 335 "machina.y"
                                                                        {printf("\tclausula_iteracion->FOR IDENTIFICADOR IN expresion DOS_PTOS expresion\n");}
#line 2519 "machina.tab.c"
    break;

  case 136:
#line 336 "machina.y"
                                                                        {printf("\tclausula_iteracion->FOR IDENTIFICADOR IN REVERSE expresion DOS_PTOS expresion\n");}
#line 2525 "machina.tab.c"
    break;

  case 137:
#line 337 "machina.y"
                                                                        {printf("\tclausula_iteracion->FOREACH IDENTIFICADOR IN expresion\n");}
#line 2531 "machina.tab.c"
    break;

  case 138:
#line 338 "machina.y"
                                                                        {printf("\tclausula_iteracion->WHILE expresion\n");}
#line 2537 "machina.tab.c"
    break;

  case 139:
#line 342 "machina.y"
                                                {printf("\tbucle_base->LOOP lista_instruccion FINISH LOOP\n");}
#line 2543 "machina.tab.c"
    break;

  case 140:
#line 346 "machina.y"
                                    {printf("\tinstruccion_rise->RAISE IDENTIFICADOR ';'\n");}
#line 2549 "machina.tab.c"
    break;

  case 141:
#line 350 "machina.y"
                                                                  {printf("\tinstruccion_try_catch->TRY lista_instruccion clausulas_excepcion FINISH TRY\n");}
#line 2555 "machina.tab.c"
    break;

  case 142:
#line 354 "machina.y"
                                                            {printf("\tclausulas_excepcion->clausula_defecto\n");}
#line 2561 "machina.tab.c"
    break;

  case 143:
#line 355 "machina.y"
                                                            {printf("\tclausulas_excepcion->lista_clausula_especifica clausula_defecto\n");}
#line 2567 "machina.tab.c"
    break;

  case 144:
#line 356 "machina.y"
                                                            {printf("\tclausulas_excepcion->lista_clausula_especifica\n");}
#line 2573 "machina.tab.c"
    break;

  case 145:
#line 360 "machina.y"
                                                            {printf("\tclausula_especifica->EXCEPTION '(' IDENTIFICADOR ')' lista_instruccion\n");}
#line 2579 "machina.tab.c"
    break;

  case 146:
#line 364 "machina.y"
                                                            {printf("\tlista_clausula_especifica->clausula_especifica\n");}
#line 2585 "machina.tab.c"
    break;

  case 147:
#line 365 "machina.y"
                                                            {printf("\tlista_clausula_especifica->lista_clausula_especifica clausula_especifica\n");}
#line 2591 "machina.tab.c"
    break;

  case 148:
#line 369 "machina.y"
                                                            {printf("\tclausula_defecto->DEFAULT '(' IDENTIFICADOR ')' lista_instruccion\n");}
#line 2597 "machina.tab.c"
    break;

  case 149:
#line 373 "machina.y"
                                    {printf("\tllamada_procedure->llamada_suprograma ';'\n");}
#line 2603 "machina.tab.c"
    break;

  case 150:
#line 377 "machina.y"
                                                {printf("\tllamada_suprograma->IDENTIFICADOR '('')'\n");}
#line 2609 "machina.tab.c"
    break;

  case 151:
#line 378 "machina.y"
                                                {printf("\tllamada_suprograma->IDENTIFICADOR '(' lista_expresion ')'\n");}
#line 2615 "machina.tab.c"
    break;

  case 152:
#line 391 "machina.y"
                              {printf("\tliteral->CTC_CADENA\n");}
#line 2621 "machina.tab.c"
    break;

  case 153:
#line 392 "machina.y"
                              {printf("\tliteral->CTC_CARACTER\n");}
#line 2627 "machina.tab.c"
    break;

  case 154:
#line 393 "machina.y"
                              {printf("\tliteral->CTC_FLOAT\n");}
#line 2633 "machina.tab.c"
    break;

  case 155:
#line 394 "machina.y"
                              {printf("\tliteral->CTC_INT\n");}
#line 2639 "machina.tab.c"
    break;

  case 156:
#line 395 "machina.y"
                              {printf("\tliteral->TRUE\n");}
#line 2645 "machina.tab.c"
    break;

  case 157:
#line 396 "machina.y"
                              {printf("\tliteral->FALSE\n");}
#line 2651 "machina.tab.c"
    break;

  case 158:
#line 400 "machina.y"
                              {printf("\tnombre->componente_indexado\n");}
#line 2657 "machina.tab.c"
    break;

  case 159:
#line 401 "machina.y"
                              {printf("\tnombre->componente_hash\n");}
#line 2663 "machina.tab.c"
    break;

  case 160:
#line 402 "machina.y"
                              {printf("\tnombre->componente_compuesto\n");}
#line 2669 "machina.tab.c"
    break;

  case 161:
#line 403 "machina.y"
                              {printf("\tnombre->llamada_suprograma\n");}
#line 2675 "machina.tab.c"
    break;

  case 162:
#line 404 "machina.y"
                              {printf("\tnombre->IDENTIFICADOR\n");}
#line 2681 "machina.tab.c"
    break;

  case 163:
#line 408 "machina.y"
                                    {printf("\tcomponente_indexado->nombre[expresion]\n");}
#line 2687 "machina.tab.c"
    break;

  case 164:
#line 412 "machina.y"
                                    {printf("\tcomponente_hash->nombre{expresion}\n");}
#line 2693 "machina.tab.c"
    break;

  case 165:
#line 416 "machina.y"
                                          {printf("\tcomponente_compuesto->nombre . IDENTIFICADOR\n");}
#line 2699 "machina.tab.c"
    break;

  case 166:
#line 417 "machina.y"
                                          {printf("\tcomponente_compuesto->nombre . llamada_suprograma\n");}
#line 2705 "machina.tab.c"
    break;

  case 169:
#line 423 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2711 "machina.tab.c"
    break;

  case 170:
#line 424 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2717 "machina.tab.c"
    break;

  case 171:
#line 425 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2723 "machina.tab.c"
    break;

  case 172:
#line 426 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2729 "machina.tab.c"
    break;

  case 173:
#line 427 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2735 "machina.tab.c"
    break;

  case 174:
#line 428 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2741 "machina.tab.c"
    break;

  case 175:
#line 429 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2747 "machina.tab.c"
    break;

  case 176:
#line 430 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2753 "machina.tab.c"
    break;

  case 177:
#line 431 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2759 "machina.tab.c"
    break;

  case 178:
#line 432 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2765 "machina.tab.c"
    break;

  case 179:
#line 433 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2771 "machina.tab.c"
    break;

  case 180:
#line 434 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2777 "machina.tab.c"
    break;

  case 181:
#line 435 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2783 "machina.tab.c"
    break;

  case 182:
#line 436 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2789 "machina.tab.c"
    break;

  case 183:
#line 437 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2795 "machina.tab.c"
    break;

  case 184:
#line 438 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2801 "machina.tab.c"
    break;

  case 185:
#line 439 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2807 "machina.tab.c"
    break;

  case 186:
#line 440 "machina.y"
                                                      {printf("\texpresion_logica->expresion_logica\n");}
#line 2813 "machina.tab.c"
    break;

  case 187:
#line 444 "machina.y"
                                                            {printf("\texpresion->expresion_logica\n");}
#line 2819 "machina.tab.c"
    break;

  case 188:
#line 445 "machina.y"
                                                            {printf("\texpresion->expresion_logica IF expresion ELSE expresion\n");}
#line 2825 "machina.tab.c"
    break;


#line 2829 "machina.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 448 "machina.y"


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
