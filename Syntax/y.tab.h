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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CONSTANT = 259,                /* CONSTANT  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    AUTO = 261,                    /* AUTO  */
    BREAK = 262,                   /* BREAK  */
    CASE = 263,                    /* CASE  */
    CHAR = 264,                    /* CHAR  */
    CONST = 265,                   /* CONST  */
    CONTINUE = 266,                /* CONTINUE  */
    DEFAULT = 267,                 /* DEFAULT  */
    DO = 268,                      /* DO  */
    DOUBLE = 269,                  /* DOUBLE  */
    ELSE = 270,                    /* ELSE  */
    ENUM = 271,                    /* ENUM  */
    EXTERN = 272,                  /* EXTERN  */
    FLOAT = 273,                   /* FLOAT  */
    FOR = 274,                     /* FOR  */
    GOTO = 275,                    /* GOTO  */
    IF = 276,                      /* IF  */
    INT = 277,                     /* INT  */
    LONG = 278,                    /* LONG  */
    REGISTER = 279,                /* REGISTER  */
    RETURN = 280,                  /* RETURN  */
    SHORT = 281,                   /* SHORT  */
    SIGNED = 282,                  /* SIGNED  */
    SIZEOF = 283,                  /* SIZEOF  */
    STATIC = 284,                  /* STATIC  */
    STRUCT = 285,                  /* STRUCT  */
    SWITCH = 286,                  /* SWITCH  */
    TYPEDEF = 287,                 /* TYPEDEF  */
    UNION = 288,                   /* UNION  */
    UNSIGNED = 289,                /* UNSIGNED  */
    VOID = 290,                    /* VOID  */
    VOLATILE = 291,                /* VOLATILE  */
    WHILE = 292,                   /* WHILE  */
    PTR_OP = 293,                  /* PTR_OP  */
    INC_OP = 294,                  /* INC_OP  */
    DEC_OP = 295,                  /* DEC_OP  */
    LEFT_OP = 296,                 /* LEFT_OP  */
    RIGHT_OP = 297,                /* RIGHT_OP  */
    LE_OP = 298,                   /* LE_OP  */
    GE_OP = 299,                   /* GE_OP  */
    EQ_OP = 300,                   /* EQ_OP  */
    NE_OP = 301,                   /* NE_OP  */
    AND_OP = 302,                  /* AND_OP  */
    OR_OP = 303,                   /* OR_OP  */
    MUL_ASSIGN = 304,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 305,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 306,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 307,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 308,              /* SUB_ASSIGN  */
    LEFT = 309,                    /* LEFT  */
    RIGHT = 310,                   /* RIGHT  */
    MOD = 311,                     /* MOD  */
    DIV = 312,                     /* DIV  */
    STAR = 313,                    /* STAR  */
    MINUS = 314,                   /* MINUS  */
    PLUS = 315,                    /* PLUS  */
    ASSIGN = 316,                  /* ASSIGN  */
    SEMI = 317,                    /* SEMI  */
    COMMA = 318,                   /* COMMA  */
    COLON = 319,                   /* COLON  */
    DOT = 320,                     /* DOT  */
    LPAREN = 321,                  /* LPAREN  */
    RPAREN = 322,                  /* RPAREN  */
    LBRACK = 323,                  /* LBRACK  */
    RBRACK = 324,                  /* RBRACK  */
    LBRACE = 325,                  /* LBRACE  */
    RBRACE = 326                   /* RBRACE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define AUTO 261
#define BREAK 262
#define CASE 263
#define CHAR 264
#define CONST 265
#define CONTINUE 266
#define DEFAULT 267
#define DO 268
#define DOUBLE 269
#define ELSE 270
#define ENUM 271
#define EXTERN 272
#define FLOAT 273
#define FOR 274
#define GOTO 275
#define IF 276
#define INT 277
#define LONG 278
#define REGISTER 279
#define RETURN 280
#define SHORT 281
#define SIGNED 282
#define SIZEOF 283
#define STATIC 284
#define STRUCT 285
#define SWITCH 286
#define TYPEDEF 287
#define UNION 288
#define UNSIGNED 289
#define VOID 290
#define VOLATILE 291
#define WHILE 292
#define PTR_OP 293
#define INC_OP 294
#define DEC_OP 295
#define LEFT_OP 296
#define RIGHT_OP 297
#define LE_OP 298
#define GE_OP 299
#define EQ_OP 300
#define NE_OP 301
#define AND_OP 302
#define OR_OP 303
#define MUL_ASSIGN 304
#define DIV_ASSIGN 305
#define MOD_ASSIGN 306
#define ADD_ASSIGN 307
#define SUB_ASSIGN 308
#define LEFT 309
#define RIGHT 310
#define MOD 311
#define DIV 312
#define STAR 313
#define MINUS 314
#define PLUS 315
#define ASSIGN 316
#define SEMI 317
#define COMMA 318
#define COLON 319
#define DOT 320
#define LPAREN 321
#define RPAREN 322
#define LBRACK 323
#define RBRACK 324
#define LBRACE 325
#define RBRACE 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "parser.y"

    char *str;

#line 213 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
