/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxChecker.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
#include "semantic.h"



extern FILE *yyin;
extern int lineCount;
extern char *tablePtr;
extern char *tablePtr;
extern int nestedCommentCount;
extern int commentFlag;
extern int arrayIndexErr;




char *sourceCode=NULL;
int errorFlag=0;
void makeList(char *,char,int);

#line 96 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    FLCONSTANT = 292,              /* FLCONSTANT  */
    STRING_LITERAL = 293,          /* STRING_LITERAL  */
    ELLIPSIS = 294,                /* ELLIPSIS  */
    PTR_OP = 295,                  /* PTR_OP  */
    INC_OP = 296,                  /* INC_OP  */
    DEC_OP = 297,                  /* DEC_OP  */
    LEFT_OP = 298,                 /* LEFT_OP  */
    RIGHT_OP = 299,                /* RIGHT_OP  */
    LE_OP = 300,                   /* LE_OP  */
    GE_OP = 301,                   /* GE_OP  */
    EQ_OP = 302,                   /* EQ_OP  */
    NE_OP = 303,                   /* NE_OP  */
    AND_OP = 304,                  /* AND_OP  */
    OR_OP = 305,                   /* OR_OP  */
    MUL_ASSIGN = 306,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 307,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 308,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 309,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 310,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 311,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 312,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 313,              /* AND_ASSIGN  */
    XOR_ASSIGN = 314,              /* XOR_ASSIGN  */
    OR_ASSIGN = 315,               /* OR_ASSIGN  */
    TYPE_NAME = 316,               /* TYPE_NAME  */
    LOWER_THAN_ELSE = 317          /* LOWER_THAN_ELSE  */
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
#define FLCONSTANT 292
#define STRING_LITERAL 293
#define ELLIPSIS 294
#define PTR_OP 295
#define INC_OP 296
#define DEC_OP 297
#define LEFT_OP 298
#define RIGHT_OP 299
#define LE_OP 300
#define GE_OP 301
#define EQ_OP 302
#define NE_OP 303
#define AND_OP 304
#define OR_OP 305
#define MUL_ASSIGN 306
#define DIV_ASSIGN 307
#define MOD_ASSIGN 308
#define ADD_ASSIGN 309
#define SUB_ASSIGN 310
#define LEFT_ASSIGN 311
#define RIGHT_ASSIGN 312
#define AND_ASSIGN 313
#define XOR_ASSIGN 314
#define OR_ASSIGN 315
#define TYPE_NAME 316
#define LOWER_THAN_ELSE 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_ENUM = 13,                      /* ENUM  */
  YYSYMBOL_EXTERN = 14,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 15,                     /* FLOAT  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_GOTO = 17,                      /* GOTO  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_INT = 19,                       /* INT  */
  YYSYMBOL_LONG = 20,                      /* LONG  */
  YYSYMBOL_REGISTER = 21,                  /* REGISTER  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_SHORT = 23,                     /* SHORT  */
  YYSYMBOL_SIGNED = 24,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 25,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 26,                    /* STATIC  */
  YYSYMBOL_STRUCT = 27,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 30,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 31,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 32,                      /* VOID  */
  YYSYMBOL_VOLATILE = 33,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_IDENTIFIER = 35,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 36,                  /* CONSTANT  */
  YYSYMBOL_FLCONSTANT = 37,                /* FLCONSTANT  */
  YYSYMBOL_STRING_LITERAL = 38,            /* STRING_LITERAL  */
  YYSYMBOL_ELLIPSIS = 39,                  /* ELLIPSIS  */
  YYSYMBOL_PTR_OP = 40,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 41,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 42,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 43,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 44,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 45,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 46,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 47,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 48,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 49,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 50,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 51,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 52,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 53,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 54,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 55,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 56,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 57,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 58,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 59,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 60,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 61,                 /* TYPE_NAME  */
  YYSYMBOL_LOWER_THAN_ELSE = 62,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_63_ = 63,                       /* '('  */
  YYSYMBOL_64_ = 64,                       /* ')'  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_67_ = 67,                       /* '.'  */
  YYSYMBOL_68_ = 68,                       /* ','  */
  YYSYMBOL_69_ = 69,                       /* '&'  */
  YYSYMBOL_70_ = 70,                       /* '*'  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '-'  */
  YYSYMBOL_73_ = 73,                       /* '~'  */
  YYSYMBOL_74_ = 74,                       /* '!'  */
  YYSYMBOL_75_ = 75,                       /* '/'  */
  YYSYMBOL_76_ = 76,                       /* '%'  */
  YYSYMBOL_77_ = 77,                       /* '<'  */
  YYSYMBOL_78_ = 78,                       /* '>'  */
  YYSYMBOL_79_ = 79,                       /* '^'  */
  YYSYMBOL_80_ = 80,                       /* '|'  */
  YYSYMBOL_81_ = 81,                       /* '?'  */
  YYSYMBOL_82_ = 82,                       /* ':'  */
  YYSYMBOL_83_ = 83,                       /* '='  */
  YYSYMBOL_84_ = 84,                       /* ';'  */
  YYSYMBOL_85_ = 85,                       /* '{'  */
  YYSYMBOL_86_ = 86,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_primary_expression = 88,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 90,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 91,          /* unary_expression  */
  YYSYMBOL_92_1 = 92,                      /* $@1  */
  YYSYMBOL_unary_operator = 93,            /* unary_operator  */
  YYSYMBOL_cast_expression = 94,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 95, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 96,       /* additive_expression  */
  YYSYMBOL_shift_expression = 97,          /* shift_expression  */
  YYSYMBOL_relational_expression = 98,     /* relational_expression  */
  YYSYMBOL_equality_expression = 99,       /* equality_expression  */
  YYSYMBOL_and_expression = 100,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 101,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 102,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 103,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 104,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 105,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 106,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 107,      /* assignment_operator  */
  YYSYMBOL_expression = 108,               /* expression  */
  YYSYMBOL_constant_expression = 109,      /* constant_expression  */
  YYSYMBOL_declaration = 110,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 111,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 112,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 113,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 114,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 115,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 116, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 117,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 118,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 119,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 120, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 121,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 122,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 123,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 124,          /* enumerator_list  */
  YYSYMBOL_enumerator = 125,               /* enumerator  */
  YYSYMBOL_type_qualifier = 126,           /* type_qualifier  */
  YYSYMBOL_declarator = 127,               /* declarator  */
  YYSYMBOL_direct_declarator = 128,        /* direct_declarator  */
  YYSYMBOL_pointer = 129,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 130,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 131,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 132,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 133,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 134,          /* identifier_list  */
  YYSYMBOL_type_name = 135,                /* type_name  */
  YYSYMBOL_abstract_declarator = 136,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 137, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 138,              /* initializer  */
  YYSYMBOL_initializer_list = 139,         /* initializer_list  */
  YYSYMBOL_statement = 140,                /* statement  */
  YYSYMBOL_labeled_statement = 141,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 142,       /* compound_statement  */
  YYSYMBOL_declaration_list = 143,         /* declaration_list  */
  YYSYMBOL_statement_list = 144,           /* statement_list  */
  YYSYMBOL_expression_statement = 145,     /* expression_statement  */
  YYSYMBOL_selection_statement = 146,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 147,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 148,           /* jump_statement  */
  YYSYMBOL_translation_unit = 149,         /* translation_unit  */
  YYSYMBOL_external_declaration = 150,     /* external_declaration  */
  YYSYMBOL_function_definition = 151       /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    71,    72,    76,    77,    78,
      79,    80,    81,    81,    86,    87,    88,    89,    90,    91,
      95,    96,   100,   101,   102,   103,   107,   108,   109,   113,
     114,   115,   119,   120,   121,   122,   123,   127,   128,   129,
     133,   134,   138,   139,   143,   144,   148,   149,   153,   154,
     158,   159,   163,   164,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   182,   183,   187,   191,   192,
     196,   197,   198,   199,   200,   201,   205,   206,   210,   211,
     215,   216,   217,   218,   219,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   238,   239,   240,
     244,   245,   249,   250,   254,   258,   259,   260,   261,   265,
     266,   270,   271,   272,   276,   277,   278,   282,   283,   287,
     288,   292,   293,   297,   298,   302,   303,   304,   305,   306,
     307,   308,   312,   313,   314,   315,   319,   320,   325,   326,
     330,   331,   335,   336,   337,   341,   342,   346,   347,   351,
     352,   353,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   369,   370,   371,   375,   376,   380,   381,   382,   383,
     384,   385,   389,   390,   391,   395,   396,   397,   398,   402,
     403,   407,   408,   412,   413,   417,   419,   422,   427,   429,
     432,   434,   439,   440,   441,   442,   443,   447,   448,   452,
     453,   457,   458,   459,   460
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INT", "LONG",
  "REGISTER", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE",
  "IDENTIFIER", "CONSTANT", "FLCONSTANT", "STRING_LITERAL", "ELLIPSIS",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "LOWER_THAN_ELSE",
  "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "$@1", "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1043,  -205,  -205,  -205,  -205,   -23,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,    77,     3,  -205,    14,  1309,  1309,  -205,   -20,
    -205,  1309,   650,    -6,    36,   792,  -205,  -205,   -67,     2,
     -17,  -205,  -205,     3,  -205,   -45,  -205,   617,  -205,  -205,
       6,  1341,  -205,   315,  -205,    14,  -205,   650,  1088,   240,
      -6,  -205,  -205,     2,    -7,   -30,  -205,  -205,  -205,  -205,
      77,  -205,  1157,  -205,   650,  1341,  1341,   198,  -205,    37,
    1341,    -5,  1450,    19,    97,   681,    67,   160,   147,  1175,
    1464,   153,   157,   141,  -205,  -205,  -205,  1504,  1504,   841,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   197,
     307,  1450,  -205,   108,    73,   171,   104,   187,   163,   177,
     156,   201,   -29,  -205,  -205,    -2,  -205,  -205,  -205,   399,
     470,  -205,  -205,  -205,  -205,   180,  -205,  -205,  -205,  -205,
      48,   204,   205,  -205,    61,  -205,  -205,  -205,  -205,   213,
      18,  1450,     2,  -205,  -205,  1157,  -205,  -205,  -205,   756,
    -205,  -205,  -205,  1450,    40,  -205,   203,  -205,  -205,   209,
    -205,   681,   246,  1198,   199,  1450,  -205,    55,   841,  -205,
    1450,  1450,   681,  1450,  -205,  -205,    69,    78,   228,   261,
    -205,  -205,  1342,  1450,   262,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  1450,  -205,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  -205,  -205,
     541,  -205,  -205,   913,  1356,  -205,    15,  -205,    57,  -205,
    1270,  -205,   264,  -205,  -205,  -205,  -205,  -205,    49,  -205,
    -205,    37,  -205,  1450,   681,  -205,   237,  1198,  -205,   106,
    -205,   238,   122,   124,  -205,  -205,   978,   137,  -205,  1450,
    -205,  -205,   130,  -205,   121,  -205,  -205,  -205,  -205,  -205,
     108,   108,    73,    73,   171,   171,   171,   171,   104,   104,
     187,   163,   177,   156,   201,    60,  -205,  -205,  -205,   241,
     243,  -205,   242,    57,  1124,  1396,  -205,  -205,  -205,  1133,
    -205,  -205,  -205,  -205,  1450,  1410,   681,  -205,   681,   681,
    -205,  -205,  1450,  -205,  1450,  -205,  -205,  -205,  -205,   251,
    -205,   250,  -205,  -205,   133,   681,   139,   342,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,   271,  -205,   681,   681,  -205,
    -205,  -205
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    96,   131,   101,     0,    91,   100,    98,    99,
      94,    97,   102,    92,   110,    90,   111,   103,    95,   132,
     135,   106,     0,   142,   210,     0,    80,    82,   104,     0,
     105,    84,     0,   134,     0,     0,   207,   209,   126,     0,
       0,   146,   144,   143,    78,     0,    86,    88,    81,    83,
     109,     0,    85,     0,   189,     0,   214,     0,     0,     0,
     133,     1,   208,     0,   129,     0,   127,   136,   147,   145,
       0,    79,     0,   212,     0,     0,   116,     0,   112,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     4,     3,     5,     0,     0,     0,
      24,    25,    26,    27,    28,    29,   193,   185,     7,    17,
      30,     0,    32,    36,    39,    42,    47,    50,    52,    54,
      56,    58,    60,    62,    75,     0,   191,   176,   177,     0,
       0,   178,   179,   180,   181,    88,   190,   213,   155,   141,
     154,     0,   148,   150,     0,     2,   138,    30,    77,     0,
       0,     0,     0,   124,    87,     0,   171,    89,   211,     0,
     115,   108,   113,     0,     0,   119,   121,   117,   204,     0,
     203,     0,     0,     0,     0,     0,   205,     0,     0,    21,
       0,     0,     0,     0,    18,    19,     0,   157,     0,     0,
      13,    14,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    64,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   194,   187,
       0,   186,   192,     0,     0,   152,   159,   153,   160,   139,
       0,   140,     0,   137,   125,   130,   128,   174,     0,   107,
     122,     0,   114,     0,     0,   184,     0,     0,   202,     0,
     206,     0,     0,     0,   182,     6,     0,   159,   158,     0,
      12,     9,     0,    15,     0,    11,    63,    33,    34,    35,
      37,    38,    40,    41,    45,    46,    43,    44,    48,    49,
      51,    53,    55,    57,    59,     0,    76,   188,   167,     0,
       0,   163,     0,   161,     0,     0,   149,   151,   156,     0,
     172,   120,   123,   183,     0,     0,     0,    22,     0,     0,
      31,    10,     0,     8,     0,   168,   162,   164,   169,     0,
     165,     0,   173,   175,     0,     0,     0,   195,    23,   197,
     198,    16,    61,   170,   166,     0,   200,     0,     0,   199,
     201,   196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,  -205,   -57,  -205,  -205,   -94,    42,    58,
      29,    70,   148,   105,   145,   146,   149,  -205,   -54,   -21,
    -205,   -88,   -62,     7,     0,  -205,   301,  -205,   -32,  -205,
    -205,   297,   -63,   -46,  -205,   128,  -205,   310,   223,   218,
      -9,   -28,   -14,  -205,   -55,  -205,   140,  -205,   214,  -132,
    -204,  -133,  -205,   -61,  -205,    28,    21,   252,  -169,  -205,
    -205,  -205,  -205,   347,  -205
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   108,   109,   272,   110,   338,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     206,   125,   149,    54,    55,    45,    46,    26,    27,    28,
      29,    77,    78,    79,   164,   165,    30,    65,    66,    31,
      32,    33,    34,    43,   299,   142,   143,   144,   188,   300,
     238,   157,   248,   126,   127,   128,    57,   130,   131,   132,
     133,   134,    35,    36,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   177,   147,   141,   257,   148,    60,    24,   237,    42,
       3,   186,    38,    40,   162,    50,    47,   207,    63,    76,
     169,   225,   247,    70,   172,   147,    48,    49,   148,    69,
     160,    52,   303,   179,   167,    25,    19,    64,   152,    71,
     184,   185,    24,    76,    76,    76,   135,    67,    76,    20,
      20,   156,   226,   187,   147,   268,   153,    58,   140,    59,
      56,   135,    39,   303,   136,    51,   227,    76,    74,   232,
     166,    20,    20,    23,   129,    73,   151,    22,   233,   168,
     234,   136,   228,    20,    23,   137,   152,   259,   315,   245,
     186,    75,   262,   263,   147,   186,   162,   148,    44,    22,
      22,   250,   158,   170,   244,   274,   147,    23,   251,   148,
     255,   233,    20,   234,   277,   278,   279,   309,    23,   163,
     304,   264,   305,   227,   252,   241,   236,    76,   227,   242,
     173,   235,   187,   265,   156,   310,   136,   227,   295,   260,
      22,   266,   324,   234,   211,   212,    76,    23,    23,   215,
     216,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   232,
     316,   273,   302,   267,   227,   320,   333,   147,   208,   171,
     148,   217,   218,   209,   210,   276,   318,   323,   319,   227,
     227,   312,   227,   313,   321,   174,   147,   345,   322,   148,
     266,   227,   234,   347,     2,     3,   296,   227,    60,     4,
     175,     5,   147,     7,   213,   214,   180,     8,     9,   236,
     181,    11,    12,   182,    40,    14,   334,   336,    16,    17,
      18,    19,   221,   140,   219,   220,   223,   189,   190,   191,
     140,    41,   166,   331,   284,   285,   286,   287,   147,   329,
     224,   148,   267,   280,   281,   337,   222,   339,   340,    21,
     192,    68,   193,    72,   194,    90,   140,   147,   239,    80,
     342,   282,   283,   240,   346,   145,    94,    95,    96,   243,
     256,    97,    98,   258,   161,   253,   350,   351,   156,   288,
     289,   254,   269,    80,    80,    80,   270,   275,    80,   308,
     314,   341,   317,    99,   140,   325,   146,   326,   327,   100,
     101,   102,   103,   104,   105,   343,   344,    80,     1,    81,
      82,     2,     3,    83,    84,    85,     4,   291,     5,     6,
       7,    86,    87,    88,     8,     9,    10,    89,    11,    12,
      90,    13,    14,    91,    15,    16,    17,    18,    19,    92,
      93,    94,    95,    96,   348,   349,    97,    98,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   292,   290,
     293,   154,   159,   150,   294,   246,    21,    80,    99,   311,
     307,   230,    62,     0,   100,   101,   102,   103,   104,   105,
     205,     0,   261,     0,     0,     0,    80,     0,     0,   106,
      53,   107,     1,    81,    82,     2,     3,    83,    84,    85,
       4,     0,     5,     6,     7,    86,    87,    88,     8,     9,
      10,    89,    11,    12,    90,    13,    14,    91,    15,    16,
      17,    18,    19,    92,    93,    94,    95,    96,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    81,    82,     0,     0,    83,    84,
      85,     0,     0,   106,    53,   229,    86,    87,    88,     0,
       0,     0,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,    81,    82,     0,     0,    83,
      84,    85,     0,     0,   106,    53,   231,    86,    87,    88,
       0,     0,     0,    89,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       1,     0,     0,     2,     3,   106,    53,   297,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,    21,    15,
      16,    17,    18,    19,     0,    81,    82,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,    87,    88,
      72,     0,    53,    89,     0,     0,    90,     0,     0,    91,
       0,    21,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     2,     3,     0,   106,    53,     4,     0,     5,
       0,     7,     0,     0,     0,     8,     9,     0,     0,    11,
      12,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,     0,    61,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,    21,    13,    14,
       0,    15,    16,    17,    18,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,    21,     5,    22,     7,     0,     0,     0,
       8,     9,    23,     0,    11,    12,    90,     0,    14,     0,
       0,    16,    17,    18,    19,     0,   145,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,   233,   298,   234,     0,
       0,     1,     0,    23,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,   266,   298,   234,     0,     0,     1,     0,    23,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    21,     0,    22,     8,     9,    10,
       0,    11,    12,    23,    13,    14,     0,    15,    16,    17,
      18,    19,     0,   138,     0,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,    21,
      13,    14,   139,    15,    16,    17,    18,    19,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,    94,
      95,    96,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    21,     0,     0,   328,     0,
       0,     0,   145,    94,    95,    96,    99,     0,    97,    98,
      90,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     145,    94,    95,    96,     0,     0,    97,    98,   155,   332,
      99,     0,     0,    90,     0,     0,   100,   101,   102,   103,
     104,   105,     0,   145,    94,    95,    96,     0,    99,    97,
      98,     0,   155,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     1,     0,     0,     2,     3,     0,     0,
       0,     4,   106,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,   306,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    21,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       8,     9,     0,     0,    11,    12,     0,    90,    14,     0,
      21,    16,    17,    18,    19,     0,     0,   145,    94,    95,
      96,    90,     0,    97,    98,     0,     0,     0,     0,     0,
       0,   145,    94,    95,    96,     0,     0,    97,    98,     0,
       0,     0,    21,     0,     0,    99,   271,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,    99,
       0,    90,   301,     0,     0,   100,   101,   102,   103,   104,
     105,   145,    94,    95,    96,    90,     0,    97,    98,     0,
       0,     0,     0,     0,     0,   145,    94,    95,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   330,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,    99,   335,    90,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    94,    95,    96,    90,
       0,    97,    98,     0,     0,     0,     0,     0,     0,   145,
      94,    95,    96,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,   178,     0,    90,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   145,
      94,    95,    96,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       0,    89,    59,    58,   173,    59,    34,     0,   140,    23,
       7,    99,    35,    22,    77,    35,    25,   111,    85,    51,
      82,    50,   155,    68,    85,    82,    26,    27,    82,    43,
      76,    31,   236,    90,    80,    35,    33,    35,    68,    84,
      97,    98,    35,    75,    76,    77,    55,    64,    80,    35,
      35,    72,    81,    99,   111,   187,    86,    63,    58,    65,
      32,    70,    85,   267,    57,    85,    68,    99,    47,   130,
      79,    35,    35,    70,    53,    47,    83,    63,    63,    84,
      65,    74,    84,    35,    70,    57,    68,   175,   257,   151,
     178,    85,   180,   181,   151,   183,   159,   151,    84,    63,
      63,   163,    74,    84,    86,   193,   163,    70,    68,   163,
     171,    63,    35,    65,   208,   209,   210,    68,    70,    82,
      63,   182,    65,    68,    84,    64,   140,   159,    68,    68,
      63,   140,   178,    64,   155,    86,   129,    68,   226,    84,
      63,    63,    82,    65,    71,    72,   178,    70,    70,    45,
      46,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   230,
      64,   192,   234,   187,    68,   269,   309,   234,    70,    82,
     234,    77,    78,    75,    76,   206,    64,    66,    64,    68,
      68,   253,    68,   254,    64,    35,   253,    64,    68,   253,
      63,    68,    65,    64,     6,     7,   227,    68,   236,    11,
      63,    13,   269,    15,    43,    44,    63,    19,    20,   233,
      63,    23,    24,    82,   233,    27,   314,   315,    30,    31,
      32,    33,    69,   233,    47,    48,    80,    40,    41,    42,
     240,    23,   251,   305,   215,   216,   217,   218,   305,   304,
      49,   305,   266,   211,   212,   316,    79,   318,   319,    61,
      63,    43,    65,    83,    67,    25,   266,   324,    64,    51,
     324,   213,   214,    68,   335,    35,    36,    37,    38,    66,
      34,    41,    42,    84,    86,    82,   347,   348,   309,   219,
     220,    82,    64,    75,    76,    77,    35,    35,    80,    35,
      63,   322,    64,    63,   304,    64,    66,    64,    66,    69,
      70,    71,    72,    73,    74,    64,    66,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   222,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    12,    84,    41,    42,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   223,   221,
     224,    70,    75,    63,   225,   152,    61,   159,    63,   251,
     240,   129,    35,    -1,    69,    70,    71,    72,    73,    74,
      83,    -1,   178,    -1,    -1,    -1,   178,    -1,    -1,    84,
      85,    86,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    84,    85,    86,    16,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    84,    85,    86,    16,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    84,    85,    86,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    61,    29,
      30,    31,    32,    33,    -1,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      83,    -1,    85,    22,    -1,    -1,    25,    -1,    -1,    28,
      -1,    61,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    84,    85,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,     0,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    61,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    61,    13,    63,    15,    -1,    -1,    -1,
      19,    20,    70,    -1,    23,    24,    25,    -1,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,     3,    -1,    70,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,     3,    -1,    70,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    61,    -1,    63,    19,    20,    21,
      -1,    23,    24,    70,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    61,
      26,    27,    64,    29,    30,    31,    32,    33,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    61,    -1,    -1,    64,    -1,
      -1,    -1,    35,    36,    37,    38,    63,    -1,    41,    42,
      25,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    85,    86,
      63,    -1,    -1,    25,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    35,    36,    37,    38,    -1,    63,    41,
      42,    -1,    85,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    84,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    61,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    25,    27,    -1,
      61,    30,    31,    32,    33,    -1,    -1,    35,    36,    37,
      38,    25,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    -1,
      -1,    -1,    61,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    63,
      -1,    25,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    35,    36,    37,    38,    25,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    63,    64,    25,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    35,    36,    37,    38,    25,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    63,    -1,    25,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    35,
      36,    37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      35,    61,    63,    70,   110,   111,   114,   115,   116,   117,
     123,   126,   127,   128,   129,   149,   150,   151,    35,    85,
     127,   126,   129,   130,    84,   112,   113,   127,   111,   111,
      35,    85,   111,    85,   110,   111,   142,   143,    63,    65,
     128,     0,   150,    85,    35,   124,   125,    64,   126,   129,
      68,    84,    83,   142,   143,    85,   115,   118,   119,   120,
     126,     4,     5,     8,     9,    10,    16,    17,    18,    22,
      25,    28,    34,    35,    36,    37,    38,    41,    42,    63,
      69,    70,    71,    72,    73,    74,    84,    86,    88,    89,
      91,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   108,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   127,   110,   142,    35,    64,
     111,   131,   132,   133,   134,    35,    66,    91,   105,   109,
     124,    83,    68,    86,   113,    85,   106,   138,   142,   118,
     120,    86,   119,    82,   121,   122,   127,   120,    84,   109,
      84,    82,   140,    63,    35,    63,    84,   108,    63,    91,
      63,    63,    82,    63,    91,    91,   108,   120,   135,    40,
      41,    42,    63,    65,    67,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    83,   107,    94,    70,    75,
      76,    71,    72,    43,    44,    45,    46,    77,    78,    47,
      48,    69,    79,    80,    49,    50,    81,    68,    84,    86,
     144,    86,   140,    63,    65,   127,   129,   136,   137,    64,
      68,    64,    68,    66,    86,   109,   125,   138,   139,    86,
     109,    68,    84,    82,    82,   140,    34,   145,    84,   108,
      84,   135,   108,   108,   140,    64,    63,   129,   136,    64,
      35,    64,    90,   106,   108,    35,   106,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,   100,   101,   102,   103,   108,   106,    86,    64,   131,
     136,    66,   109,   137,    63,    65,    39,   133,    35,    68,
      86,   122,   109,   140,    63,   145,    64,    64,    64,    64,
      94,    64,    68,    66,    82,    64,    64,    66,    64,   131,
      66,   109,    86,   138,   108,    64,   108,   140,    92,   140,
     140,   106,   105,    64,    66,    64,   140,    64,    12,    84,
     140,   140
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    91,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   120,   120,   121,
     121,   122,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 52 "syntaxChecker.y"
                                { yyval=checkScope(tablePtr,lineCount); }
#line 1917 "y.tab.c"
    break;

  case 3: /* primary_expression: FLCONSTANT  */
#line 53 "syntaxChecker.y"
                                {tempCheckType=4;}
#line 1923 "y.tab.c"
    break;

  case 4: /* primary_expression: CONSTANT  */
#line 54 "syntaxChecker.y"
                                { addConstant(tablePtr, lineCount);}
#line 1929 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 55 "syntaxChecker.y"
                                { makeList(tablePtr, 's', lineCount);}
#line 1935 "y.tab.c"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 56 "syntaxChecker.y"
                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); yyval=yyvsp[-1]; }
#line 1941 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 60 "syntaxChecker.y"
                               {yyval=yyvsp[0];}
#line 1947 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 61 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 1953 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' ')'  */
#line 62 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1959 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 63 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1965 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 64 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 1971 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 65 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 1977 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression INC_OP  */
#line 66 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 1983 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DEC_OP  */
#line 67 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 1989 "y.tab.c"
    break;

  case 15: /* argument_expression_list: assignment_expression  */
#line 71 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 1995 "y.tab.c"
    break;

  case 16: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 72 "syntaxChecker.y"
                                                             { makeList(",",'p', lineCount); }
#line 2001 "y.tab.c"
    break;

  case 17: /* unary_expression: postfix_expression  */
#line 76 "syntaxChecker.y"
                             {yyval=yyvsp[0];}
#line 2007 "y.tab.c"
    break;

  case 18: /* unary_expression: INC_OP unary_expression  */
#line 77 "syntaxChecker.y"
                                        { makeList("++",'o', lineCount); }
#line 2013 "y.tab.c"
    break;

  case 19: /* unary_expression: DEC_OP unary_expression  */
#line 78 "syntaxChecker.y"
                                        { makeList("--",'o', lineCount); }
#line 2019 "y.tab.c"
    break;

  case 21: /* unary_expression: SIZEOF unary_expression  */
#line 80 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 2025 "y.tab.c"
    break;

  case 22: /* $@1: %empty  */
#line 81 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 2031 "y.tab.c"
    break;

  case 23: /* unary_expression: SIZEOF '(' type_name ')' $@1  */
#line 82 "syntaxChecker.y"
                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2037 "y.tab.c"
    break;

  case 24: /* unary_operator: '&'  */
#line 86 "syntaxChecker.y"
              { makeList("&",'o', lineCount); }
#line 2043 "y.tab.c"
    break;

  case 25: /* unary_operator: '*'  */
#line 87 "syntaxChecker.y"
              { makeList("*",'o', lineCount); }
#line 2049 "y.tab.c"
    break;

  case 26: /* unary_operator: '+'  */
#line 88 "syntaxChecker.y"
              { makeList("+",'o', lineCount); }
#line 2055 "y.tab.c"
    break;

  case 27: /* unary_operator: '-'  */
#line 89 "syntaxChecker.y"
              { makeList("-",'o', lineCount); }
#line 2061 "y.tab.c"
    break;

  case 28: /* unary_operator: '~'  */
#line 90 "syntaxChecker.y"
              { makeList("~",'o', lineCount); }
#line 2067 "y.tab.c"
    break;

  case 29: /* unary_operator: '!'  */
#line 91 "syntaxChecker.y"
              { makeList("!",'o', lineCount); }
#line 2073 "y.tab.c"
    break;

  case 30: /* cast_expression: unary_expression  */
#line 95 "syntaxChecker.y"
                             {yyval=yyvsp[0];}
#line 2079 "y.tab.c"
    break;

  case 31: /* cast_expression: '(' type_name ')' cast_expression  */
#line 96 "syntaxChecker.y"
                                            { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2085 "y.tab.c"
    break;

  case 32: /* multiplicative_expression: cast_expression  */
#line 100 "syntaxChecker.y"
                          {yyval=yyvsp[0];}
#line 2091 "y.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 101 "syntaxChecker.y"
                                                        { makeList("*",'o', lineCount); }
#line 2097 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 102 "syntaxChecker.y"
                                                        { makeList("/",'o', lineCount); }
#line 2103 "y.tab.c"
    break;

  case 35: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 103 "syntaxChecker.y"
                                                        { makeList("%",'o', lineCount); }
#line 2109 "y.tab.c"
    break;

  case 36: /* additive_expression: multiplicative_expression  */
#line 107 "syntaxChecker.y"
                                    {yyval=yyvsp[0];}
#line 2115 "y.tab.c"
    break;

  case 37: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 108 "syntaxChecker.y"
                                                            { makeList("+",'o', lineCount); }
#line 2121 "y.tab.c"
    break;

  case 38: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 109 "syntaxChecker.y"
                                                            { makeList("-",'o', lineCount); }
#line 2127 "y.tab.c"
    break;

  case 39: /* shift_expression: additive_expression  */
#line 113 "syntaxChecker.y"
                              {yyval=yyvsp[0];}
#line 2133 "y.tab.c"
    break;

  case 40: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 114 "syntaxChecker.y"
                                                        { makeList("<<",'o', lineCount); }
#line 2139 "y.tab.c"
    break;

  case 41: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 115 "syntaxChecker.y"
                                                        { makeList(">>",'o', lineCount); }
#line 2145 "y.tab.c"
    break;

  case 42: /* relational_expression: shift_expression  */
#line 119 "syntaxChecker.y"
                           {yyval=yyvsp[0];}
#line 2151 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 122 "syntaxChecker.y"
                                                       { makeList("<=",'o', lineCount); }
#line 2157 "y.tab.c"
    break;

  case 46: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 123 "syntaxChecker.y"
                                                       { makeList(">=",'o', lineCount); }
#line 2163 "y.tab.c"
    break;

  case 47: /* equality_expression: relational_expression  */
#line 127 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2169 "y.tab.c"
    break;

  case 48: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 128 "syntaxChecker.y"
                                                          { makeList("==",'o', lineCount); }
#line 2175 "y.tab.c"
    break;

  case 49: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 129 "syntaxChecker.y"
                                                          { makeList("!=",'o', lineCount); }
#line 2181 "y.tab.c"
    break;

  case 50: /* and_expression: equality_expression  */
#line 133 "syntaxChecker.y"
                              {yyval=yyvsp[0];}
#line 2187 "y.tab.c"
    break;

  case 51: /* and_expression: and_expression '&' equality_expression  */
#line 134 "syntaxChecker.y"
                                                        { makeList("&", 'o', lineCount);}
#line 2193 "y.tab.c"
    break;

  case 52: /* exclusive_or_expression: and_expression  */
#line 138 "syntaxChecker.y"
                         {yyval=yyvsp[0];}
#line 2199 "y.tab.c"
    break;

  case 53: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 139 "syntaxChecker.y"
                                                        { makeList("^", 'o', lineCount); }
#line 2205 "y.tab.c"
    break;

  case 54: /* inclusive_or_expression: exclusive_or_expression  */
#line 143 "syntaxChecker.y"
                                  {yyval=yyvsp[0];}
#line 2211 "y.tab.c"
    break;

  case 55: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 144 "syntaxChecker.y"
                                                              { makeList("|", 'o', lineCount); }
#line 2217 "y.tab.c"
    break;

  case 56: /* logical_and_expression: inclusive_or_expression  */
#line 148 "syntaxChecker.y"
                                  {yyval=yyvsp[0];}
#line 2223 "y.tab.c"
    break;

  case 57: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 149 "syntaxChecker.y"
                                                                { makeList("&&", 'o', lineCount); }
#line 2229 "y.tab.c"
    break;

  case 58: /* logical_or_expression: logical_and_expression  */
#line 153 "syntaxChecker.y"
                                 {yyval=yyvsp[0];}
#line 2235 "y.tab.c"
    break;

  case 59: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 154 "syntaxChecker.y"
                                                             { makeList("||", 'o', lineCount); }
#line 2241 "y.tab.c"
    break;

  case 60: /* conditional_expression: logical_or_expression  */
#line 158 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2247 "y.tab.c"
    break;

  case 61: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 159 "syntaxChecker.y"
                                                                          { makeList("?:",'o', lineCount); }
#line 2253 "y.tab.c"
    break;

  case 62: /* assignment_expression: conditional_expression  */
#line 163 "syntaxChecker.y"
                                 {yyval=yyvsp[0];}
#line 2259 "y.tab.c"
    break;

  case 63: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 164 "syntaxChecker.y"
                                                                     {yyval=yyvsp[0]; checkType(yyvsp[-2],yyvsp[0],lineCount);}
#line 2265 "y.tab.c"
    break;

  case 64: /* assignment_operator: '='  */
#line 168 "syntaxChecker.y"
                        { makeList("=",'o', lineCount); }
#line 2271 "y.tab.c"
    break;

  case 65: /* assignment_operator: MUL_ASSIGN  */
#line 169 "syntaxChecker.y"
                        { makeList("*=",'o', lineCount); }
#line 2277 "y.tab.c"
    break;

  case 66: /* assignment_operator: DIV_ASSIGN  */
#line 170 "syntaxChecker.y"
                        { makeList("/=",'o', lineCount); }
#line 2283 "y.tab.c"
    break;

  case 67: /* assignment_operator: MOD_ASSIGN  */
#line 171 "syntaxChecker.y"
                        { makeList("%=",'o', lineCount); }
#line 2289 "y.tab.c"
    break;

  case 68: /* assignment_operator: ADD_ASSIGN  */
#line 172 "syntaxChecker.y"
                        { makeList("+=",'o', lineCount); }
#line 2295 "y.tab.c"
    break;

  case 69: /* assignment_operator: SUB_ASSIGN  */
#line 173 "syntaxChecker.y"
                        { makeList("-=",'o', lineCount); }
#line 2301 "y.tab.c"
    break;

  case 70: /* assignment_operator: LEFT_ASSIGN  */
#line 174 "syntaxChecker.y"
                        { makeList("<<=",'o', lineCount); }
#line 2307 "y.tab.c"
    break;

  case 71: /* assignment_operator: RIGHT_ASSIGN  */
#line 175 "syntaxChecker.y"
                        { makeList(">==",'o', lineCount); }
#line 2313 "y.tab.c"
    break;

  case 72: /* assignment_operator: AND_ASSIGN  */
#line 176 "syntaxChecker.y"
                        { makeList("&=",'o', lineCount); }
#line 2319 "y.tab.c"
    break;

  case 73: /* assignment_operator: XOR_ASSIGN  */
#line 177 "syntaxChecker.y"
                        { makeList("^=",'o', lineCount); }
#line 2325 "y.tab.c"
    break;

  case 74: /* assignment_operator: OR_ASSIGN  */
#line 178 "syntaxChecker.y"
                        { makeList("|=",'o', lineCount); }
#line 2331 "y.tab.c"
    break;

  case 75: /* expression: assignment_expression  */
#line 182 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2337 "y.tab.c"
    break;

  case 76: /* expression: expression ',' assignment_expression  */
#line 183 "syntaxChecker.y"
                                               { makeList(",", 'p', lineCount); }
#line 2343 "y.tab.c"
    break;

  case 78: /* declaration: declaration_specifiers ';'  */
#line 191 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount);typeBuffer=' '; }
#line 2349 "y.tab.c"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 192 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount); typeBuffer=' ';}
#line 2355 "y.tab.c"
    break;

  case 87: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 206 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2361 "y.tab.c"
    break;

  case 89: /* init_declarator: declarator '=' initializer  */
#line 211 "syntaxChecker.y"
                                     { makeList("=", 'o', lineCount); }
#line 2367 "y.tab.c"
    break;

  case 90: /* storage_class_specifier: TYPEDEF  */
#line 215 "syntaxChecker.y"
                        { makeList("typedef", 'k', lineCount);}
#line 2373 "y.tab.c"
    break;

  case 91: /* storage_class_specifier: EXTERN  */
#line 216 "syntaxChecker.y"
                        { makeList("extern", 'k', lineCount);}
#line 2379 "y.tab.c"
    break;

  case 92: /* storage_class_specifier: STATIC  */
#line 217 "syntaxChecker.y"
                        { makeList("static", 'k', lineCount);}
#line 2385 "y.tab.c"
    break;

  case 93: /* storage_class_specifier: AUTO  */
#line 218 "syntaxChecker.y"
                        { makeList("auto", 'k', lineCount);}
#line 2391 "y.tab.c"
    break;

  case 94: /* storage_class_specifier: REGISTER  */
#line 219 "syntaxChecker.y"
                        { makeList("register", 'k', lineCount);}
#line 2397 "y.tab.c"
    break;

  case 95: /* type_specifier: VOID  */
#line 223 "syntaxChecker.y"
                        { makeList("void", 'k', lineCount);typeBuffer='v';}
#line 2403 "y.tab.c"
    break;

  case 96: /* type_specifier: CHAR  */
#line 224 "syntaxChecker.y"
                        { makeList("char", 'k', lineCount); typeBuffer='c';}
#line 2409 "y.tab.c"
    break;

  case 97: /* type_specifier: SHORT  */
#line 225 "syntaxChecker.y"
                        { makeList("short", 'k', lineCount);}
#line 2415 "y.tab.c"
    break;

  case 98: /* type_specifier: INT  */
#line 226 "syntaxChecker.y"
                        { makeList("int", 'k', lineCount); typeBuffer='i';}
#line 2421 "y.tab.c"
    break;

  case 99: /* type_specifier: LONG  */
#line 227 "syntaxChecker.y"
                        { makeList("long", 'k', lineCount);}
#line 2427 "y.tab.c"
    break;

  case 100: /* type_specifier: FLOAT  */
#line 228 "syntaxChecker.y"
                        { makeList("float", 'k', lineCount);	typeBuffer='f';}
#line 2433 "y.tab.c"
    break;

  case 101: /* type_specifier: DOUBLE  */
#line 229 "syntaxChecker.y"
                        { makeList("double", 'k', lineCount);}
#line 2439 "y.tab.c"
    break;

  case 102: /* type_specifier: SIGNED  */
#line 230 "syntaxChecker.y"
                        { makeList("signed", 'k', lineCount);}
#line 2445 "y.tab.c"
    break;

  case 103: /* type_specifier: UNSIGNED  */
#line 231 "syntaxChecker.y"
                        { makeList("unsigned", 'k', lineCount);}
#line 2451 "y.tab.c"
    break;

  case 110: /* struct_or_union: STRUCT  */
#line 244 "syntaxChecker.y"
                        { makeList("struct", 'k', lineCount);}
#line 2457 "y.tab.c"
    break;

  case 111: /* struct_or_union: UNION  */
#line 245 "syntaxChecker.y"
                        { makeList("union", 'k', lineCount);}
#line 2463 "y.tab.c"
    break;

  case 114: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 254 "syntaxChecker.y"
                                                              { makeList(";", 'p', lineCount); }
#line 2469 "y.tab.c"
    break;

  case 120: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 266 "syntaxChecker.y"
                                                       { makeList(",", 'p', lineCount); }
#line 2475 "y.tab.c"
    break;

  case 122: /* struct_declarator: ':' constant_expression  */
#line 271 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2481 "y.tab.c"
    break;

  case 123: /* struct_declarator: declarator ':' constant_expression  */
#line 272 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2487 "y.tab.c"
    break;

  case 124: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 276 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount);}
#line 2493 "y.tab.c"
    break;

  case 125: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 277 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2499 "y.tab.c"
    break;

  case 126: /* enum_specifier: ENUM IDENTIFIER  */
#line 278 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2505 "y.tab.c"
    break;

  case 128: /* enumerator_list: enumerator_list ',' enumerator  */
#line 283 "syntaxChecker.y"
                                         { makeList(",", 'p', lineCount); }
#line 2511 "y.tab.c"
    break;

  case 129: /* enumerator: IDENTIFIER  */
#line 287 "syntaxChecker.y"
                                                { makeList(tablePtr, 'v', lineCount); }
#line 2517 "y.tab.c"
    break;

  case 130: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 288 "syntaxChecker.y"
                                                { makeList("=", 'o', lineCount); makeList("tablePtr", 'v', lineCount); }
#line 2523 "y.tab.c"
    break;

  case 131: /* type_qualifier: CONST  */
#line 292 "syntaxChecker.y"
                        { makeList("const", 'k', lineCount); }
#line 2529 "y.tab.c"
    break;

  case 132: /* type_qualifier: VOLATILE  */
#line 293 "syntaxChecker.y"
                        { makeList("volatile", 'k', lineCount); }
#line 2535 "y.tab.c"
    break;

  case 135: /* direct_declarator: IDENTIFIER  */
#line 302 "syntaxChecker.y"
                                                                {  checkDeclaration(tablePtr,lineCount,scopeCount);}
#line 2541 "y.tab.c"
    break;

  case 136: /* direct_declarator: '(' declarator ')'  */
#line 303 "syntaxChecker.y"
                                                                {  makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2547 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 304 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2553 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator '[' ']'  */
#line 305 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2559 "y.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 306 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2565 "y.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 307 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2571 "y.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator '(' ')'  */
#line 308 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2577 "y.tab.c"
    break;

  case 142: /* pointer: '*'  */
#line 312 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2583 "y.tab.c"
    break;

  case 143: /* pointer: '*' type_qualifier_list  */
#line 313 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2589 "y.tab.c"
    break;

  case 144: /* pointer: '*' pointer  */
#line 314 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2595 "y.tab.c"
    break;

  case 145: /* pointer: '*' type_qualifier_list pointer  */
#line 315 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2601 "y.tab.c"
    break;

  case 149: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 326 "syntaxChecker.y"
                                                { makeList(",", 'p', lineCount); makeList("::", 'o', lineCount); }
#line 2607 "y.tab.c"
    break;

  case 151: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 331 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2613 "y.tab.c"
    break;

  case 155: /* identifier_list: IDENTIFIER  */
#line 341 "syntaxChecker.y"
                                                { checkDeclaration(tablePtr,lineCount,scopeCount);}
#line 2619 "y.tab.c"
    break;

  case 156: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 342 "syntaxChecker.y"
                                                { checkDeclaration(tablePtr,lineCount,scopeCount);makeList(",", 'p', lineCount); }
#line 2625 "y.tab.c"
    break;

  case 162: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 357 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2631 "y.tab.c"
    break;

  case 163: /* direct_abstract_declarator: '[' ']'  */
#line 358 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2637 "y.tab.c"
    break;

  case 164: /* direct_abstract_declarator: '[' constant_expression ']'  */
#line 359 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2643 "y.tab.c"
    break;

  case 165: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 360 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2649 "y.tab.c"
    break;

  case 166: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 361 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2655 "y.tab.c"
    break;

  case 167: /* direct_abstract_declarator: '(' ')'  */
#line 362 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2661 "y.tab.c"
    break;

  case 168: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 363 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2667 "y.tab.c"
    break;

  case 169: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 364 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2673 "y.tab.c"
    break;

  case 170: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 365 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2679 "y.tab.c"
    break;

  case 171: /* initializer: assignment_expression  */
#line 369 "syntaxChecker.y"
                                {yyval=yyvsp[0];}
#line 2685 "y.tab.c"
    break;

  case 175: /* initializer_list: initializer_list ',' initializer  */
#line 376 "syntaxChecker.y"
                                           { makeList(",", 'p', lineCount); }
#line 2691 "y.tab.c"
    break;

  case 182: /* labeled_statement: IDENTIFIER ':' statement  */
#line 389 "syntaxChecker.y"
                                                        { makeList(tablePtr, 'v', lineCount);  }
#line 2697 "y.tab.c"
    break;

  case 183: /* labeled_statement: CASE constant_expression ':' statement  */
#line 390 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("case", 'k', lineCount);}
#line 2703 "y.tab.c"
    break;

  case 184: /* labeled_statement: DEFAULT ':' statement  */
#line 391 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("default", 'k', lineCount); }
#line 2709 "y.tab.c"
    break;

  case 193: /* expression_statement: ';'  */
#line 412 "syntaxChecker.y"
                                        { makeList(";", 'p', lineCount); }
#line 2715 "y.tab.c"
    break;

  case 194: /* expression_statement: expression ';'  */
#line 413 "syntaxChecker.y"
                                        { makeList(";", 'p', lineCount); }
#line 2721 "y.tab.c"
    break;

  case 195: /* selection_statement: IF '(' expression ')' statement  */
#line 418 "syntaxChecker.y"
                                { makeList("if", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount);}
#line 2727 "y.tab.c"
    break;

  case 196: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 420 "syntaxChecker.y"
                                { makeList("if", 'k', lineCount);  makeList("else", 'k', lineCount); makeList("(", 'p', lineCount); 					  makeList(")", 'p', lineCount); 
  				}
#line 2734 "y.tab.c"
    break;

  case 197: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 423 "syntaxChecker.y"
                                { makeList("switch", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2740 "y.tab.c"
    break;

  case 198: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 428 "syntaxChecker.y"
                        { makeList("while", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2746 "y.tab.c"
    break;

  case 199: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 430 "syntaxChecker.y"
                        { makeList("do", 'k', lineCount); makeList("while", 'k', lineCount); makeList("(", 'p', lineCount);         				  makeList(")", 'p', lineCount); makeList(";", 'p', lineCount); 
			}
#line 2753 "y.tab.c"
    break;

  case 200: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 433 "syntaxChecker.y"
                        { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2759 "y.tab.c"
    break;

  case 201: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 435 "syntaxChecker.y"
                        { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2765 "y.tab.c"
    break;

  case 202: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 439 "syntaxChecker.y"
                                { makeList("goto", 'k', lineCount); makeList(";", 'p', lineCount); makeList(tablePtr, 'v', lineCount);}
#line 2771 "y.tab.c"
    break;

  case 203: /* jump_statement: CONTINUE ';'  */
#line 440 "syntaxChecker.y"
                                { makeList("continue", 'k', lineCount); makeList(";", 'p', lineCount); }
#line 2777 "y.tab.c"
    break;

  case 204: /* jump_statement: BREAK ';'  */
#line 441 "syntaxChecker.y"
                                { makeList("break", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2783 "y.tab.c"
    break;

  case 205: /* jump_statement: RETURN ';'  */
#line 442 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2789 "y.tab.c"
    break;

  case 206: /* jump_statement: RETURN expression ';'  */
#line 443 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2795 "y.tab.c"
    break;


#line 2799 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 463 "syntaxChecker.y"

void yyerror()
{
	errorFlag=1;
	fflush(stdout);
	printf("\n%s : %d :Syntax error \n",sourceCode,lineCount);
}
void main(int argc,char **argv){
	if(argc<=1){
		
		printf("Invalid ,Expected Format : ./a.out <\"sourceCode\"> \n");
		return 0;
	}
	
	yyin=fopen(argv[1],"r");
	sourceCode=(char *)malloc(strlen(argv[1])*sizeof(char));
	sourceCode=argv[1];
	yyparse();
	
	if(nestedCommentCount!=0){
		errorFlag=1;
    		printf("%s : %d : Comment Does Not End\n",sourceCode,lineCount);
    		
	}
	if(commentFlag==1){
		errorFlag=1;
		printf("%s : %d : Nested Comment\n",sourceCode,lineCount);
    	}
	
		
	
	if(!errorFlag  && !semanticErr  && arrayIndexErr!=1){
		
		printf("\n\n\t\t%s Parsing Completed\n\n",sourceCode);
		
		
	
		FILE *writeParsed=fopen("parsedTable.txt","w");
    		fprintf(writeParsed,"\n\t\t\t\tParsed Table\n\n\t\tToken\t\t\t\t\t\tType\t\t\t\t\t\t\tLine Number\n");
      		for(tokenList *ptr=parsedPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeParsed,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
  		FILE *writeSymbol=fopen("symbolTable.txt","w");
    		fprintf(writeSymbol,"\n\t\t\t\tSymbolTable\n\n\t\tToken\t\t\t\tType\t\tLine Number\t\t\t\tScope\t\tFunction Number\n");
      		for(tokenList *ptr=symbolPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeSymbol,"\n%20s%30.30s%30s%30s\t%d\t%d",ptr->token,ptr->type,ptr->line,ptr->scope,ptr->scopeValue,ptr->funcCount+1);
		}
		
		FILE *writeConstant=fopen("constantTable.txt","w");
    		fprintf(writeConstant,"\n   \t\t\t\t\t\t\t\tConstant Table \n\n \t\t\t\t\t\tValue\t\t\t\t\t\t\tLine Number\n");
    		for(tokenList *ptr=constantPtr;ptr!=NULL;ptr=ptr->next)
  		fprintf(writeConstant,"\n%50s%60s",ptr->token,ptr->line);
  	
  	
  		fclose(writeSymbol);
		fclose(writeConstant);
		fclose(writeParsed);
	}
printf("\n\n");	
}


