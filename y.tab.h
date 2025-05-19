/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VOID = 258,                    /* VOID  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    CONSTANT = 261,                /* CONSTANT  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    RETURN = 265,                  /* RETURN  */
    DO = 266,                      /* DO  */
    WHILE = 267,                   /* WHILE  */
    FOR = 268,                     /* FOR  */
    INC_OP = 269,                  /* INC_OP  */
    DEC_OP = 270,                  /* DEC_OP  */
    U_PLUS = 271,                  /* U_PLUS  */
    U_MINUS = 272,                 /* U_MINUS  */
    EQUAL = 273,                   /* EQUAL  */
    NOT_EQUAL = 274,               /* NOT_EQUAL  */
    GREATER_OR_EQUAL = 275,        /* GREATER_OR_EQUAL  */
    LESS_OR_EQUAL = 276,           /* LESS_OR_EQUAL  */
    SHIFTLEFT = 277,               /* SHIFTLEFT  */
    LOG_AND = 278,                 /* LOG_AND  */
    LOG_OR = 279                   /* LOG_OR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VOID 258
#define INT 259
#define FLOAT 260
#define CONSTANT 261
#define IDENTIFIER 262
#define IF 263
#define ELSE 264
#define RETURN 265
#define DO 266
#define WHILE 267
#define FOR 268
#define INC_OP 269
#define DEC_OP 270
#define U_PLUS 271
#define U_MINUS 272
#define EQUAL 273
#define NOT_EQUAL 274
#define GREATER_OR_EQUAL 275
#define LESS_OR_EQUAL 276
#define SHIFTLEFT 277
#define LOG_AND 278
#define LOG_OR 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "syntaxChecker.y"

    char         	*str;
    int           	integer;
    float         	real;
    int           	type;
	struct
	{
	    char                 	*value;
	    int   			type;
	    int				cType;
	    struct BackpatchList* 	trueList;
	    struct BackpatchList* 	falseList;
	} expr;
	struct
	{
	  struct BackpatchList* 	nextList;
	} stmt;
	struct
	{
	  int				quad;
	  struct BackpatchList* 	nextList;
	} mark;
	struct
	{
	    int				count;
	    struct tokenList * 	queue;
	} exp_list;

#line 144 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
