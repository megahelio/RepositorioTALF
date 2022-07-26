/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
