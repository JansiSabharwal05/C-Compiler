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
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR = 261,                    /* CHAR  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ELSE = 267,                    /* ELSE  */
    ENUM = 268,                    /* ENUM  */
    EXTERN = 269,                  /* EXTERN  */
    FLOAT = 270,                   /* FLOAT  */
    FOR = 271,                     /* FOR  */
    GOTO = 272,                    /* GOTO  */
    IF = 273,                      /* IF  */
    INT = 274,                     /* INT  */
    LONG = 275,                    /* LONG  */
    REGISTER = 276,                /* REGISTER  */
    RETURN = 277,                  /* RETURN  */
    SHORT = 278,                   /* SHORT  */
    SIGNED = 279,                  /* SIGNED  */
    SIZEOF = 280,                  /* SIZEOF  */
    STATIC = 281,                  /* STATIC  */
    STRUCT = 282,                  /* STRUCT  */
    SWITCH = 283,                  /* SWITCH  */
    TYPEDEF = 284,                 /* TYPEDEF  */
    UNION = 285,                   /* UNION  */
    UNSIGNED = 286,                /* UNSIGNED  */
    VOID = 287,                    /* VOID  */
    VOLATILE = 288,                /* VOLATILE  */
    WHILE = 289,                   /* WHILE  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    CONSTANT = 291,                /* CONSTANT  */
    STRING_LITERAL = 292,          /* STRING_LITERAL  */
    ELLIPSIS = 293,                /* ELLIPSIS  */
    PTR_OP = 294,                  /* PTR_OP  */
    INC_OP = 295,                  /* INC_OP  */
    DEC_OP = 296,                  /* DEC_OP  */
    LEFT_OP = 297,                 /* LEFT_OP  */
    RIGHT_OP = 298,                /* RIGHT_OP  */
    LE_OP = 299,                   /* LE_OP  */
    GE_OP = 300,                   /* GE_OP  */
    EQ_OP = 301,                   /* EQ_OP  */
    NE_OP = 302,                   /* NE_OP  */
    AND_OP = 303,                  /* AND_OP  */
    OR_OP = 304,                   /* OR_OP  */
    MUL_ASSIGN = 305,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 306,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 307,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 308,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 309,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 310,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 311,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 312,              /* AND_ASSIGN  */
    XOR_ASSIGN = 313,              /* XOR_ASSIGN  */
    OR_ASSIGN = 314,               /* OR_ASSIGN  */
    TYPE_NAME = 315,               /* TYPE_NAME  */
    LOWER_THAN_ELSE = 316          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INT 274
#define LONG 275
#define REGISTER 276
#define RETURN 277
#define SHORT 278
#define SIGNED 279
#define SIZEOF 280
#define STATIC 281
#define STRUCT 282
#define SWITCH 283
#define TYPEDEF 284
#define UNION 285
#define UNSIGNED 286
#define VOID 287
#define VOLATILE 288
#define WHILE 289
#define IDENTIFIER 290
#define CONSTANT 291
#define STRING_LITERAL 292
#define ELLIPSIS 293
#define PTR_OP 294
#define INC_OP 295
#define DEC_OP 296
#define LEFT_OP 297
#define RIGHT_OP 298
#define LE_OP 299
#define GE_OP 300
#define EQ_OP 301
#define NE_OP 302
#define AND_OP 303
#define OR_OP 304
#define MUL_ASSIGN 305
#define DIV_ASSIGN 306
#define MOD_ASSIGN 307
#define ADD_ASSIGN 308
#define SUB_ASSIGN 309
#define LEFT_ASSIGN 310
#define RIGHT_ASSIGN 311
#define AND_ASSIGN 312
#define XOR_ASSIGN 313
#define OR_ASSIGN 314
#define TYPE_NAME 315
#define LOWER_THAN_ELSE 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
