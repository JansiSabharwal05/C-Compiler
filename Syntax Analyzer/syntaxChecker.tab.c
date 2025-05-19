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
int yylex(void);
void yyerror(const char *);


struct tokenList {
    char *token, type[20], line[100];
    struct tokenList *next;
};
typedef struct tokenList tokenList;

extern FILE *yyin;
extern int lineCount;
extern char *tablePtr;
extern int nestedCommentCount;
extern int commentFlag;

char typeBuffer = ' ';
tokenList *symbolPtr = NULL;
tokenList *constantPtr = NULL;
tokenList *parsedPtr = NULL;

char *sourceCode = NULL;
int errorFlag = 0;

void makeList(char *, char, int);

#line 103 "syntaxChecker.tab.c"

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

#include "syntaxChecker.tab.h"
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
  YYSYMBOL_STRING_LITERAL = 37,            /* STRING_LITERAL  */
  YYSYMBOL_ELLIPSIS = 38,                  /* ELLIPSIS  */
  YYSYMBOL_PTR_OP = 39,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 40,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 41,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 42,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 43,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 44,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 45,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 46,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 47,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 48,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 49,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 50,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 51,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 52,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 53,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 54,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 55,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 56,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 57,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 58,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 59,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 60,                 /* TYPE_NAME  */
  YYSYMBOL_LOWER_THAN_ELSE = 61,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_primary_expression = 87,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 88,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 89,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 90,          /* unary_expression  */
  YYSYMBOL_91_1 = 91,                      /* $@1  */
  YYSYMBOL_unary_operator = 92,            /* unary_operator  */
  YYSYMBOL_cast_expression = 93,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 94, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 95,       /* additive_expression  */
  YYSYMBOL_shift_expression = 96,          /* shift_expression  */
  YYSYMBOL_relational_expression = 97,     /* relational_expression  */
  YYSYMBOL_equality_expression = 98,       /* equality_expression  */
  YYSYMBOL_and_expression = 99,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 100,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 101,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 102,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 103,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 104,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 105,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 106,      /* assignment_operator  */
  YYSYMBOL_expression = 107,               /* expression  */
  YYSYMBOL_constant_expression = 108,      /* constant_expression  */
  YYSYMBOL_declaration = 109,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 110,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 111,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 112,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 113,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 114,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 115, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 116,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 117,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 118,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 119, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 120,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 121,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 122,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 123,          /* enumerator_list  */
  YYSYMBOL_enumerator = 124,               /* enumerator  */
  YYSYMBOL_type_qualifier = 125,           /* type_qualifier  */
  YYSYMBOL_declarator = 126,               /* declarator  */
  YYSYMBOL_direct_declarator = 127,        /* direct_declarator  */
  YYSYMBOL_pointer = 128,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 129,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 130,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 132,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 133,          /* identifier_list  */
  YYSYMBOL_type_name = 134,                /* type_name  */
  YYSYMBOL_abstract_declarator = 135,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 136, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 137,              /* initializer  */
  YYSYMBOL_initializer_list = 138,         /* initializer_list  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_labeled_statement = 140,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 141,       /* compound_statement  */
  YYSYMBOL_declaration_list = 142,         /* declaration_list  */
  YYSYMBOL_statement_list = 143,           /* statement_list  */
  YYSYMBOL_expression_statement = 144,     /* expression_statement  */
  YYSYMBOL_selection_statement = 145,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 146,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 147,           /* jump_statement  */
  YYSYMBOL_translation_unit = 148,         /* translation_unit  */
  YYSYMBOL_external_declaration = 149,     /* external_declaration  */
  YYSYMBOL_function_definition = 150       /* function_definition  */
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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1641

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    54,    55,    56,    60,    61,    62,    63,
      64,    65,    66,    67,    71,    72,    76,    77,    78,    79,
      80,    81,    81,    86,    87,    88,    89,    90,    91,    95,
      96,   100,   101,   102,   103,   107,   108,   109,   113,   114,
     115,   119,   120,   121,   122,   123,   127,   128,   129,   133,
     134,   138,   139,   143,   144,   148,   149,   153,   154,   158,
     159,   163,   164,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   182,   183,   187,   191,   192,   193,
     198,   199,   200,   201,   202,   203,   207,   208,   212,   213,
     217,   218,   219,   220,   221,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   240,   241,   242,
     246,   247,   251,   252,   256,   260,   261,   262,   263,   267,
     268,   272,   273,   274,   278,   279,   280,   284,   285,   289,
     290,   294,   295,   299,   300,   304,   305,   306,   307,   308,
     309,   310,   314,   315,   316,   317,   321,   322,   327,   328,
     332,   333,   337,   338,   339,   343,   344,   348,   349,   353,
     354,   355,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   371,   372,   373,   377,   378,   382,   383,   384,   385,
     386,   387,   388,   393,   394,   395,   399,   400,   401,   402,
     406,   407,   411,   412,   416,   417,   418,   423,   425,   428,
     433,   435,   438,   440,   445,   446,   447,   448,   449,   453,
     454,   458,   459,   463,   464,   465,   466
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
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "ELLIPSIS", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "LOWER_THAN_ELSE", "'('", "')'",
  "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "'{'", "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "$@1", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
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

#define YYPACT_NINF (-202)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1131,  -202,  -202,  -202,  -202,   -19,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,    26,     7,  -202,    17,  1367,  1367,  -202,   -18,
    -202,  1367,   783,   150,    27,   884,  -202,  -202,   -52,    47,
      76,  -202,  -202,     7,    65,  -202,    40,  -202,   751,  -202,
    -202,    95,  1398,  -202,   322,  -202,    17,  -202,   783,  1175,
    1399,   150,  -202,  -202,    47,    28,    20,  -202,  -202,  -202,
    -202,  -202,    26,  -202,  1239,  -202,   783,  1398,  1398,   817,
    -202,    12,  1398,   105,   120,  1516,   132,   136,   662,   166,
     194,   180,  1258,  1555,   185,   186,   168,  -202,  -202,  1568,
    1568,   932,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,    81,   224,  1516,  -202,   115,   -46,    41,   106,    -2,
     183,   178,   176,   210,    14,  -202,  -202,    48,  -202,  -202,
    -202,   407,   492,  -202,  -202,  -202,  -202,   179,  -202,  -202,
    -202,  -202,    11,   196,   193,  -202,    -9,  -202,  -202,  -202,
    -202,   197,    50,  1516,    47,  -202,  -202,  1239,  -202,  -202,
    -202,   849,  -202,  -202,  -202,  1516,    57,  -202,   182,  -202,
    -202,  -202,   184,  -202,   662,   230,   680,   188,  1516,  -202,
      70,   932,  -202,  1516,  1516,   662,  1516,  -202,  -202,    79,
     123,   204,   249,  -202,  -202,  1412,  1516,   251,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  1516,
    -202,  1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,
    1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,
    1516,  -202,  -202,   577,  -202,  -202,  1003,  1451,  -202,    64,
    -202,   156,  -202,  1329,  -202,   252,  -202,  -202,  -202,  -202,
    -202,    51,  -202,  -202,    12,  -202,  1516,   662,  -202,   226,
     206,   680,  -202,   128,  -202,   228,   131,   134,  -202,  -202,
    1067,   177,  -202,  1516,  -202,  -202,   141,  -202,     4,  -202,
    -202,  -202,  -202,  -202,   115,   115,   -46,   -46,    41,    41,
      41,    41,   106,   106,    -2,   183,   178,   176,   210,    60,
    -202,  -202,  -202,   229,   231,  -202,   234,   156,  1210,  1464,
    -202,  -202,  -202,  1219,  -202,  -202,  -202,  -202,  1516,  -202,
    1503,   662,  -202,   662,   662,  -202,  -202,  1516,  -202,  1516,
    -202,  -202,  -202,  -202,   232,  -202,   235,  -202,  -202,   143,
     662,   146,   281,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
     213,  -202,   662,   662,  -202,  -202,  -202
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    96,   131,   101,     0,    91,   100,    98,    99,
      94,    97,   102,    92,   110,    90,   111,   103,    95,   132,
     135,   106,     0,   142,   212,     0,    80,    82,   104,     0,
     105,    84,     0,   134,     0,     0,   209,   211,   126,     0,
       0,   146,   144,   143,     0,    78,     0,    86,    88,    81,
      83,   109,     0,    85,     0,   190,     0,   216,     0,     0,
       0,   133,     1,   210,     0,   129,     0,   127,   136,   147,
     145,    77,     0,    79,     0,   214,     0,     0,   116,     0,
     112,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     0,
       0,     0,    23,    24,    25,    26,    27,    28,   194,   186,
       6,    16,    29,     0,    31,    35,    38,    41,    46,    49,
      51,    53,    55,    57,    59,    61,    74,     0,   192,   176,
     177,     0,     0,   178,   179,   180,   181,    88,   191,   215,
     155,   141,   154,     0,   148,   150,     0,     2,   138,    29,
      76,     0,     0,     0,     0,   124,    87,     0,   171,    89,
     213,     0,   115,   108,   113,     0,     0,   119,   121,   117,
     182,   206,     0,   205,     0,     0,     0,     0,     0,   207,
       0,     0,    20,     0,     0,     0,     0,    17,    18,     0,
     157,     0,     0,    12,    13,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    63,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   188,     0,   187,   193,     0,     0,   152,   159,
     153,   160,   139,     0,   140,     0,   137,   125,   130,   128,
     174,     0,   107,   122,     0,   114,     0,     0,   185,     0,
       0,     0,   204,     0,   208,     0,     0,     0,   183,     5,
       0,   159,   158,     0,    11,     8,     0,    14,     0,    10,
      62,    32,    33,    34,    36,    37,    39,    40,    44,    45,
      42,    43,    47,    48,    50,    52,    54,    56,    58,     0,
      75,   189,   167,     0,     0,   163,     0,   161,     0,     0,
     149,   151,   156,     0,   172,   120,   123,   184,     0,   196,
       0,     0,    21,     0,     0,    30,     9,     0,     7,     0,
     168,   162,   164,   169,     0,   165,     0,   173,   175,     0,
       0,     0,   197,    22,   199,   200,    15,    60,   170,   166,
       0,   202,     0,     0,   201,   203,   198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,  -202,  -202,   -57,  -202,  -202,  -100,    19,     5,
       6,    22,    77,    78,    83,    75,    82,  -202,   -56,   -23,
    -202,   -80,   -63,     2,     0,  -202,   233,  -202,   -29,  -202,
    -202,   236,   -70,   -67,  -202,    53,  -202,   247,   158,   153,
     -17,   -28,   -13,  -202,   -58,  -202,    72,  -202,   135,  -122,
    -201,  -138,  -202,   -55,  -202,     9,    90,   187,  -169,  -202,
    -202,  -202,  -202,   282,  -202
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   110,   111,   276,   112,   343,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     209,   127,   151,    55,    56,    46,    47,    26,    27,    28,
      29,    79,    80,    81,   166,   167,    30,    66,    67,    31,
      32,    33,    34,    43,   303,   144,   145,   146,   191,   304,
     241,   159,   251,   128,   129,   130,    58,   132,   133,   134,
     135,   136,    35,    36,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   143,    24,   149,   150,    40,    61,   261,    48,   164,
      42,   162,   180,   210,     3,   169,    38,    51,    44,   250,
     240,   189,   172,    78,   214,   215,    49,    50,   149,   150,
      70,    53,    64,   175,   190,    25,   182,    24,   307,   137,
      19,    57,   187,   188,   222,   223,    20,    20,    78,    78,
      78,   158,    20,    78,   244,   137,   149,    75,   245,   142,
     138,    20,    20,   228,   168,    39,    52,   139,   272,   328,
     307,   230,    78,   236,    22,   237,    23,   235,   138,    22,
      23,    23,    65,   216,   217,   160,    23,   154,    22,    22,
     248,   164,   320,   165,   229,    23,   149,   150,   263,    20,
      45,   189,   253,   266,   267,   155,   189,    72,   149,   150,
     153,   281,   282,   283,   190,   230,   278,   154,   313,   258,
     192,   193,   194,    73,   254,   238,   236,   230,   237,   239,
     268,   231,    78,   138,   158,   247,   314,   230,    76,    68,
     255,   329,   269,   195,   131,   196,   230,   197,    71,   299,
     218,   219,    78,   264,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   277,   325,   306,   338,    41,   271,   235,    77,
     149,   150,   220,   221,   211,   270,   280,   237,   170,   212,
     213,   321,    23,   316,   323,   230,    69,   324,   230,   149,
     150,   230,   317,   171,   326,    82,   350,   300,   327,   352,
     230,    61,    59,   230,    60,   173,   149,   174,   308,    40,
     309,   286,   287,   239,   288,   289,   290,   291,   176,   177,
      82,    82,    82,   284,   285,    82,   142,   168,   339,   270,
     341,   237,   178,   142,   292,   293,   336,   183,   184,   185,
     334,   224,   149,   150,    82,   226,   225,   271,   227,   242,
     243,    74,   246,   256,   259,   257,   342,   273,   344,   345,
     142,   262,   149,   347,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   274,   351,   279,   312,   318,   319,
     158,   322,   330,   353,   331,   348,   354,   355,   356,   332,
     349,   294,   297,   295,   346,   156,   208,   315,   142,   296,
     298,   152,   249,   161,    82,   311,   265,    63,   233,     0,
       0,     0,     0,    83,     0,     1,    84,    85,     2,     3,
      86,    87,    88,     4,    82,     5,     6,     7,    89,    90,
      91,     8,     9,    10,    92,    11,    12,    93,    13,    14,
      94,    15,    16,    17,    18,    19,    95,    96,    97,    98,
       0,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,    54,   109,    83,     0,
       1,    84,    85,     2,     3,    86,    87,    88,     4,     0,
       5,     6,     7,    89,    90,    91,     8,     9,    10,    92,
      11,    12,    93,    13,    14,    94,    15,    16,    17,    18,
      19,    95,    96,    97,    98,     0,     0,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,   101,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,    54,   232,    83,     0,     0,    84,    85,     0,     0,
      86,    87,    88,     0,     0,     0,     0,     0,    89,    90,
      91,     0,     0,     0,    92,     0,     0,    93,     0,     0,
      94,     0,     0,     0,     0,     0,    95,    96,    97,    98,
       0,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,    54,   234,    83,     0,
       0,    84,    85,     0,     0,    86,    87,    88,     0,     0,
       0,     0,     0,    89,    90,    91,     0,     0,     0,    92,
       0,     0,    93,     0,     0,    94,     0,     0,     0,     0,
       0,    95,    96,    97,    98,     0,     0,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,    54,   301,    83,     0,     0,    84,    85,     0,     0,
      86,    87,    88,     0,     0,     0,     0,     0,    89,    90,
      91,   260,     0,     0,    92,     0,     0,    93,     0,     0,
      94,     0,     0,     0,     0,     0,    95,    96,    97,    98,
       0,     0,    99,   100,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,    97,    98,     0,     0,
      99,   100,     0,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,     0,   101,     0,     0,   108,    54,     0,   102,   103,
     104,   105,   106,   107,     1,     0,     0,     2,     3,     0,
       0,     0,     4,   108,     5,     6,     7,     0,     0,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,    21,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,    74,     0,    54,     8,     9,     0,     0,
      11,    12,     0,    21,    14,     0,     0,    16,    17,    18,
      19,     0,     0,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,    54,     8,     9,
       0,     0,    11,    12,     0,     0,    14,    21,     0,    16,
      17,    18,    19,     0,    62,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,   163,     8,     9,    10,     0,    11,    12,    21,
      13,    14,     0,    15,    16,    17,    18,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,     0,     0,     2,     3,
       0,     0,     0,     4,    21,     5,    22,     7,     0,     0,
       0,     8,     9,    23,     0,    11,    12,    93,     0,    14,
       0,     0,    16,    17,    18,    19,     0,   147,    97,    98,
       0,     0,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,   101,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,   236,   302,   237,     0,     0,
       1,     0,    23,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,   270,
     302,   237,     0,     0,     1,     0,    23,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,    21,     0,    22,     8,     9,    10,     0,    11,    12,
      23,    13,    14,     0,    15,    16,    17,    18,    19,     0,
     140,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,    21,    13,    14,   141,    15,
      16,    17,    18,    19,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   147,    97,    98,     0,     0,    99,
     100,     0,     0,     0,    93,     0,     0,     0,     0,     0,
      21,     0,     0,   333,   147,    97,    98,     0,     0,    99,
     100,   101,     0,    93,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   147,    97,    98,     0,     0,    99,   100,
       0,   101,     0,   157,   337,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,   157,     0,     0,   102,   103,   104,   105,
     106,   107,     1,     0,     0,     2,     3,     0,     0,     0,
       4,   179,     5,     6,     7,     0,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,   310,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    21,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     8,     9,     0,
       0,    11,    12,     0,    93,    14,     0,    21,    16,    17,
      18,    19,     0,     0,   147,    97,    98,    93,     0,    99,
     100,     0,     0,     0,     0,     0,     0,   147,    97,    98,
       0,     0,    99,   100,     0,     0,     0,     0,    21,     0,
       0,   101,     0,     0,   148,     0,     0,   102,   103,   104,
     105,   106,   107,     0,   101,   275,    93,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   147,    97,    98,    93,
       0,    99,   100,     0,     0,     0,     0,     0,     0,   147,
      97,    98,     0,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   305,     0,     0,   102,
     103,   104,   105,   106,   107,     0,   101,     0,    93,   335,
       0,     0,   102,   103,   104,   105,   106,   107,   147,    97,
      98,    93,     0,    99,   100,     0,     0,     0,     0,     0,
       0,   147,    97,    98,     0,     0,    99,   100,     0,     0,
       0,     0,     0,     0,     0,   101,   340,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,   101,     0,
      93,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     147,    97,    98,    93,     0,    99,   100,     0,     0,     0,
       0,     0,     0,   147,    97,    98,     0,     0,    99,   100,
       0,     0,     0,     0,     0,     0,     0,   181,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
     186,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107
};

static const yytype_int16 yycheck[] =
{
       0,    59,     0,    60,    60,    22,    34,   176,    25,    79,
      23,    78,    92,   113,     7,    82,    35,    35,     1,   157,
     142,   101,    85,    52,    70,    71,    26,    27,    85,    85,
      43,    31,    84,    88,   101,    35,    93,    35,   239,    56,
      33,    32,    99,   100,    46,    47,    35,    35,    77,    78,
      79,    74,    35,    82,    63,    72,   113,    48,    67,    59,
      58,    35,    35,    49,    81,    84,    84,    58,   190,    65,
     271,    67,   101,    62,    62,    64,    69,   132,    76,    62,
      69,    69,    35,    42,    43,    76,    69,    67,    62,    62,
     153,   161,   261,    81,    80,    69,   153,   153,   178,    35,
      83,   181,   165,   183,   184,    85,   186,    67,   165,   165,
      82,   211,   212,   213,   181,    67,   196,    67,    67,   174,
      39,    40,    41,    83,    67,   142,    62,    67,    64,   142,
     185,    83,   161,   131,   157,    85,    85,    67,    48,    63,
      83,    81,    63,    62,    54,    64,    67,    66,    83,   229,
      44,    45,   181,    83,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   195,   273,   237,   313,    23,   190,   233,    84,
     237,   237,    76,    77,    69,    62,   209,    64,    83,    74,
      75,    63,    69,   256,    63,    67,    43,    63,    67,   256,
     256,    67,   257,    83,    63,    52,    63,   230,    67,    63,
      67,   239,    62,    67,    64,    83,   273,    81,    62,   236,
      64,   216,   217,   236,   218,   219,   220,   221,    62,    35,
      77,    78,    79,   214,   215,    82,   236,   254,   318,    62,
     320,    64,    62,   243,   222,   223,   309,    62,    62,    81,
     308,    68,   309,   309,   101,    79,    78,   270,    48,    63,
      67,    82,    65,    81,    34,    81,   321,    63,   323,   324,
     270,    83,   329,   329,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    35,   340,    35,    35,    62,    83,
     313,    63,    63,    12,    63,    63,    83,   352,   353,    65,
      65,   224,   227,   225,   327,    72,    82,   254,   308,   226,
     228,    64,   154,    77,   161,   243,   181,    35,   131,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   181,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,     1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,     1,    -1,
      -1,     4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,     1,    -1,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,     1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,
      40,    41,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    83,    84,    -1,    68,    69,
      70,    71,    72,    73,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    83,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    60,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    82,    -1,    84,    19,    20,    -1,    -1,
      23,    24,    -1,    60,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    84,    19,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    60,    -1,    30,
      31,    32,    33,    -1,     0,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    85,    19,    20,    21,    -1,    23,    24,    60,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    60,    13,    62,    15,    -1,    -1,
      -1,    19,    20,    69,    -1,    23,    24,    25,    -1,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,
       3,    -1,    69,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,
      63,    64,    -1,    -1,     3,    -1,    69,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    60,    -1,    62,    19,    20,    21,    -1,    23,    24,
      69,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      35,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    60,    26,    27,    63,    29,
      30,    31,    32,    33,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,    40,
      41,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    63,    35,    36,    37,    -1,    -1,    40,
      41,    62,    -1,    25,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    35,    36,    37,    -1,    -1,    40,    41,
      -1,    62,    -1,    84,    85,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    84,    -1,    -1,    68,    69,    70,    71,
      72,    73,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    83,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    60,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,
      -1,    23,    24,    -1,    25,    27,    -1,    60,    30,    31,
      32,    33,    -1,    -1,    35,    36,    37,    25,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    62,    63,    25,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    35,    36,    37,    25,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,
      69,    70,    71,    72,    73,    -1,    62,    -1,    25,    65,
      -1,    -1,    68,    69,    70,    71,    72,    73,    35,    36,
      37,    25,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    62,    -1,
      25,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      35,    36,    37,    25,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      35,    60,    62,    69,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   148,   149,   150,    35,    84,
     126,   125,   128,   129,     1,    83,   111,   112,   126,   110,
     110,    35,    84,   110,    84,   109,   110,   141,   142,    62,
      64,   127,     0,   149,    84,    35,   123,   124,    63,   125,
     128,    83,    67,    83,    82,   141,   142,    84,   114,   117,
     118,   119,   125,     1,     4,     5,     8,     9,    10,    16,
      17,    18,    22,    25,    28,    34,    35,    36,    37,    40,
      41,    62,    68,    69,    70,    71,    72,    73,    83,    85,
      87,    88,    90,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   107,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   126,   109,   141,
      35,    63,   110,   130,   131,   132,   133,    35,    65,    90,
     104,   108,   123,    82,    67,    85,   112,    84,   105,   137,
     141,   117,   119,    85,   118,    81,   120,   121,   126,   119,
      83,    83,   108,    83,    81,   139,    62,    35,    62,    83,
     107,    62,    90,    62,    62,    81,    62,    90,    90,   107,
     119,   134,    39,    40,    41,    62,    64,    66,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    82,   106,
      93,    69,    74,    75,    70,    71,    42,    43,    44,    45,
      76,    77,    46,    47,    68,    78,    79,    48,    49,    80,
      67,    83,    85,   143,    85,   139,    62,    64,   126,   128,
     135,   136,    63,    67,    63,    67,    65,    85,   108,   124,
     137,   138,    85,   108,    67,    83,    81,    81,   139,    34,
       1,   144,    83,   107,    83,   134,   107,   107,   139,    63,
      62,   128,   135,    63,    35,    63,    89,   105,   107,    35,
     105,    93,    93,    93,    94,    94,    95,    95,    96,    96,
      96,    96,    97,    97,    98,    99,   100,   101,   102,   107,
     105,    85,    63,   130,   135,    65,   108,   136,    62,    64,
      38,   132,    35,    67,    85,   121,   108,   139,    62,    83,
     144,    63,    63,    63,    63,    93,    63,    67,    65,    81,
      63,    63,    65,    63,   130,    65,   108,    85,   137,   107,
      63,   107,   139,    91,   139,   139,   105,   104,    63,    65,
      63,   139,    63,    12,    83,   139,   139
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    91,    90,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     116,   116,   117,   117,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   121,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   128,   128,   128,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   145,   145,   145,
     146,   146,   146,   146,   147,   147,   147,   147,   147,   148,
     148,   149,   149,   150,   150,   150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     2,     3,
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
       1,     1,     2,     3,     4,     3,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     2,     5,     7,     5,
       5,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     3,     2
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
#line 53 "syntaxChecker.y"
                                { makeList(tablePtr, 'v', lineCount); }
#line 1772 "syntaxChecker.tab.c"
    break;

  case 3: /* primary_expression: CONSTANT  */
#line 54 "syntaxChecker.y"
                                { makeList(tablePtr, 'c', lineCount);}
#line 1778 "syntaxChecker.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 55 "syntaxChecker.y"
                                { makeList(tablePtr, 's', lineCount);}
#line 1784 "syntaxChecker.tab.c"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 56 "syntaxChecker.y"
                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1790 "syntaxChecker.tab.c"
    break;

  case 7: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 61 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 1796 "syntaxChecker.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '(' ')'  */
#line 62 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1802 "syntaxChecker.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 63 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1808 "syntaxChecker.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 64 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 1814 "syntaxChecker.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 65 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 1820 "syntaxChecker.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 66 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 1826 "syntaxChecker.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 67 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 1832 "syntaxChecker.tab.c"
    break;

  case 15: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 72 "syntaxChecker.y"
                                                             { makeList(",",'p', lineCount); }
#line 1838 "syntaxChecker.tab.c"
    break;

  case 17: /* unary_expression: INC_OP unary_expression  */
#line 77 "syntaxChecker.y"
                                        { makeList("++",'o', lineCount); }
#line 1844 "syntaxChecker.tab.c"
    break;

  case 18: /* unary_expression: DEC_OP unary_expression  */
#line 78 "syntaxChecker.y"
                                        { makeList("--",'o', lineCount); }
#line 1850 "syntaxChecker.tab.c"
    break;

  case 20: /* unary_expression: SIZEOF unary_expression  */
#line 80 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 1856 "syntaxChecker.tab.c"
    break;

  case 21: /* $@1: %empty  */
#line 81 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 1862 "syntaxChecker.tab.c"
    break;

  case 22: /* unary_expression: SIZEOF '(' type_name ')' $@1  */
#line 82 "syntaxChecker.y"
                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1868 "syntaxChecker.tab.c"
    break;

  case 23: /* unary_operator: '&'  */
#line 86 "syntaxChecker.y"
              { makeList("&",'o', lineCount); }
#line 1874 "syntaxChecker.tab.c"
    break;

  case 24: /* unary_operator: '*'  */
#line 87 "syntaxChecker.y"
              { makeList("*",'o', lineCount); }
#line 1880 "syntaxChecker.tab.c"
    break;

  case 25: /* unary_operator: '+'  */
#line 88 "syntaxChecker.y"
              { makeList("+",'o', lineCount); }
#line 1886 "syntaxChecker.tab.c"
    break;

  case 26: /* unary_operator: '-'  */
#line 89 "syntaxChecker.y"
              { makeList("-",'o', lineCount); }
#line 1892 "syntaxChecker.tab.c"
    break;

  case 27: /* unary_operator: '~'  */
#line 90 "syntaxChecker.y"
              { makeList("~",'o', lineCount); }
#line 1898 "syntaxChecker.tab.c"
    break;

  case 28: /* unary_operator: '!'  */
#line 91 "syntaxChecker.y"
              { makeList("!",'o', lineCount); }
#line 1904 "syntaxChecker.tab.c"
    break;

  case 30: /* cast_expression: '(' type_name ')' cast_expression  */
#line 96 "syntaxChecker.y"
                                            { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1910 "syntaxChecker.tab.c"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 101 "syntaxChecker.y"
                                                        { makeList("*",'o', lineCount); }
#line 1916 "syntaxChecker.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 102 "syntaxChecker.y"
                                                        { makeList("/",'o', lineCount); }
#line 1922 "syntaxChecker.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 103 "syntaxChecker.y"
                                                        { makeList("%",'o', lineCount); }
#line 1928 "syntaxChecker.tab.c"
    break;

  case 36: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 108 "syntaxChecker.y"
                                                            { makeList("+",'o', lineCount); }
#line 1934 "syntaxChecker.tab.c"
    break;

  case 37: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 109 "syntaxChecker.y"
                                                            { makeList("-",'o', lineCount); }
#line 1940 "syntaxChecker.tab.c"
    break;

  case 39: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 114 "syntaxChecker.y"
                                                        { makeList("<<",'o', lineCount); }
#line 1946 "syntaxChecker.tab.c"
    break;

  case 40: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 115 "syntaxChecker.y"
                                                        { makeList(">>",'o', lineCount); }
#line 1952 "syntaxChecker.tab.c"
    break;

  case 44: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 122 "syntaxChecker.y"
                                                       { makeList("<=",'o', lineCount); }
#line 1958 "syntaxChecker.tab.c"
    break;

  case 45: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 123 "syntaxChecker.y"
                                                       { makeList(">=",'o', lineCount); }
#line 1964 "syntaxChecker.tab.c"
    break;

  case 47: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 128 "syntaxChecker.y"
                                                          { makeList("==",'o', lineCount); }
#line 1970 "syntaxChecker.tab.c"
    break;

  case 48: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 129 "syntaxChecker.y"
                                                          { makeList("!=",'o', lineCount); }
#line 1976 "syntaxChecker.tab.c"
    break;

  case 50: /* and_expression: and_expression '&' equality_expression  */
#line 134 "syntaxChecker.y"
                                                        { makeList("&", 'o', lineCount);}
#line 1982 "syntaxChecker.tab.c"
    break;

  case 52: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 139 "syntaxChecker.y"
                                                        { makeList("^", 'o', lineCount); }
#line 1988 "syntaxChecker.tab.c"
    break;

  case 54: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 144 "syntaxChecker.y"
                                                              { makeList("|", 'o', lineCount); }
#line 1994 "syntaxChecker.tab.c"
    break;

  case 56: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 149 "syntaxChecker.y"
                                                                { makeList("&&", 'o', lineCount); }
#line 2000 "syntaxChecker.tab.c"
    break;

  case 58: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 154 "syntaxChecker.y"
                                                             { makeList("||", 'o', lineCount); }
#line 2006 "syntaxChecker.tab.c"
    break;

  case 60: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 159 "syntaxChecker.y"
                                                                          { makeList("?:",'o', lineCount); }
#line 2012 "syntaxChecker.tab.c"
    break;

  case 63: /* assignment_operator: '='  */
#line 168 "syntaxChecker.y"
                     { makeList("=",'o', lineCount); }
#line 2018 "syntaxChecker.tab.c"
    break;

  case 64: /* assignment_operator: MUL_ASSIGN  */
#line 169 "syntaxChecker.y"
                     { makeList("*=",'o', lineCount); }
#line 2024 "syntaxChecker.tab.c"
    break;

  case 65: /* assignment_operator: DIV_ASSIGN  */
#line 170 "syntaxChecker.y"
                     { makeList("/=",'o', lineCount); }
#line 2030 "syntaxChecker.tab.c"
    break;

  case 66: /* assignment_operator: MOD_ASSIGN  */
#line 171 "syntaxChecker.y"
                     { makeList("%=",'o', lineCount); }
#line 2036 "syntaxChecker.tab.c"
    break;

  case 67: /* assignment_operator: ADD_ASSIGN  */
#line 172 "syntaxChecker.y"
                     { makeList("+=",'o', lineCount); }
#line 2042 "syntaxChecker.tab.c"
    break;

  case 68: /* assignment_operator: SUB_ASSIGN  */
#line 173 "syntaxChecker.y"
                     { makeList("-=",'o', lineCount); }
#line 2048 "syntaxChecker.tab.c"
    break;

  case 69: /* assignment_operator: LEFT_ASSIGN  */
#line 174 "syntaxChecker.y"
                     { makeList("<<=",'o', lineCount); }
#line 2054 "syntaxChecker.tab.c"
    break;

  case 70: /* assignment_operator: RIGHT_ASSIGN  */
#line 175 "syntaxChecker.y"
                     { makeList(">>=",'o', lineCount); }
#line 2060 "syntaxChecker.tab.c"
    break;

  case 71: /* assignment_operator: AND_ASSIGN  */
#line 176 "syntaxChecker.y"
                     { makeList("&=",'o', lineCount); }
#line 2066 "syntaxChecker.tab.c"
    break;

  case 72: /* assignment_operator: XOR_ASSIGN  */
#line 177 "syntaxChecker.y"
                     { makeList("^=",'o', lineCount); }
#line 2072 "syntaxChecker.tab.c"
    break;

  case 73: /* assignment_operator: OR_ASSIGN  */
#line 178 "syntaxChecker.y"
                     { makeList("|=",'o', lineCount); }
#line 2078 "syntaxChecker.tab.c"
    break;

  case 75: /* expression: expression ',' assignment_expression  */
#line 183 "syntaxChecker.y"
                                               { makeList(",", 'p', lineCount); }
#line 2084 "syntaxChecker.tab.c"
    break;

  case 77: /* declaration: declaration_specifiers error ';'  */
#line 191 "syntaxChecker.y"
                                           { yyerror("Invalid declaration structure; skipped."); yyerrok; }
#line 2090 "syntaxChecker.tab.c"
    break;

  case 78: /* declaration: declaration_specifiers ';'  */
#line 192 "syntaxChecker.y"
                                           { makeList(";", 'p', lineCount); typeBuffer=' '; }
#line 2096 "syntaxChecker.tab.c"
    break;

  case 79: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 193 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount); typeBuffer=' '; }
#line 2102 "syntaxChecker.tab.c"
    break;

  case 87: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 208 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2108 "syntaxChecker.tab.c"
    break;

  case 89: /* init_declarator: declarator '=' initializer  */
#line 213 "syntaxChecker.y"
                                     { makeList("=", 'o', lineCount); }
#line 2114 "syntaxChecker.tab.c"
    break;

  case 90: /* storage_class_specifier: TYPEDEF  */
#line 217 "syntaxChecker.y"
                        { makeList("typedef", 'k', lineCount);}
#line 2120 "syntaxChecker.tab.c"
    break;

  case 91: /* storage_class_specifier: EXTERN  */
#line 218 "syntaxChecker.y"
                        { makeList("extern", 'k', lineCount);}
#line 2126 "syntaxChecker.tab.c"
    break;

  case 92: /* storage_class_specifier: STATIC  */
#line 219 "syntaxChecker.y"
                        { makeList("static", 'k', lineCount);}
#line 2132 "syntaxChecker.tab.c"
    break;

  case 93: /* storage_class_specifier: AUTO  */
#line 220 "syntaxChecker.y"
                        { makeList("auto", 'k', lineCount);}
#line 2138 "syntaxChecker.tab.c"
    break;

  case 94: /* storage_class_specifier: REGISTER  */
#line 221 "syntaxChecker.y"
                        { makeList("register", 'k', lineCount);}
#line 2144 "syntaxChecker.tab.c"
    break;

  case 95: /* type_specifier: VOID  */
#line 225 "syntaxChecker.y"
              { makeList("void", 'k', lineCount); typeBuffer='v'; }
#line 2150 "syntaxChecker.tab.c"
    break;

  case 96: /* type_specifier: CHAR  */
#line 226 "syntaxChecker.y"
              { makeList("char", 'k', lineCount); typeBuffer='c'; }
#line 2156 "syntaxChecker.tab.c"
    break;

  case 97: /* type_specifier: SHORT  */
#line 227 "syntaxChecker.y"
              { makeList("short", 'k', lineCount); }
#line 2162 "syntaxChecker.tab.c"
    break;

  case 98: /* type_specifier: INT  */
#line 228 "syntaxChecker.y"
              { makeList("int", 'k', lineCount); typeBuffer='i'; }
#line 2168 "syntaxChecker.tab.c"
    break;

  case 99: /* type_specifier: LONG  */
#line 229 "syntaxChecker.y"
              { makeList("long", 'k', lineCount); }
#line 2174 "syntaxChecker.tab.c"
    break;

  case 100: /* type_specifier: FLOAT  */
#line 230 "syntaxChecker.y"
              { makeList("float", 'k', lineCount); typeBuffer='f'; }
#line 2180 "syntaxChecker.tab.c"
    break;

  case 101: /* type_specifier: DOUBLE  */
#line 231 "syntaxChecker.y"
              { makeList("double", 'k', lineCount); }
#line 2186 "syntaxChecker.tab.c"
    break;

  case 102: /* type_specifier: SIGNED  */
#line 232 "syntaxChecker.y"
              { makeList("signed", 'k', lineCount); }
#line 2192 "syntaxChecker.tab.c"
    break;

  case 103: /* type_specifier: UNSIGNED  */
#line 233 "syntaxChecker.y"
               { makeList("unsigned", 'k', lineCount); }
#line 2198 "syntaxChecker.tab.c"
    break;

  case 110: /* struct_or_union: STRUCT  */
#line 246 "syntaxChecker.y"
                        { makeList("struct", 'k', lineCount);}
#line 2204 "syntaxChecker.tab.c"
    break;

  case 111: /* struct_or_union: UNION  */
#line 247 "syntaxChecker.y"
                        { makeList("union", 'k', lineCount);}
#line 2210 "syntaxChecker.tab.c"
    break;

  case 114: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 256 "syntaxChecker.y"
                                                              { makeList(";", 'p', lineCount); }
#line 2216 "syntaxChecker.tab.c"
    break;

  case 120: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 268 "syntaxChecker.y"
                                                       { makeList(",", 'p', lineCount); }
#line 2222 "syntaxChecker.tab.c"
    break;

  case 122: /* struct_declarator: ':' constant_expression  */
#line 273 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2228 "syntaxChecker.tab.c"
    break;

  case 123: /* struct_declarator: declarator ':' constant_expression  */
#line 274 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2234 "syntaxChecker.tab.c"
    break;

  case 124: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 278 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount);}
#line 2240 "syntaxChecker.tab.c"
    break;

  case 125: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 279 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2246 "syntaxChecker.tab.c"
    break;

  case 126: /* enum_specifier: ENUM IDENTIFIER  */
#line 280 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2252 "syntaxChecker.tab.c"
    break;

  case 128: /* enumerator_list: enumerator_list ',' enumerator  */
#line 285 "syntaxChecker.y"
                                         { makeList(",", 'p', lineCount); }
#line 2258 "syntaxChecker.tab.c"
    break;

  case 129: /* enumerator: IDENTIFIER  */
#line 289 "syntaxChecker.y"
                                          { makeList(tablePtr, 'v', lineCount); }
#line 2264 "syntaxChecker.tab.c"
    break;

  case 130: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 290 "syntaxChecker.y"
                                         { makeList("=", 'o', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2270 "syntaxChecker.tab.c"
    break;

  case 131: /* type_qualifier: CONST  */
#line 294 "syntaxChecker.y"
                        { makeList("const", 'k', lineCount); }
#line 2276 "syntaxChecker.tab.c"
    break;

  case 132: /* type_qualifier: VOLATILE  */
#line 295 "syntaxChecker.y"
                        { makeList("volatile", 'k', lineCount); }
#line 2282 "syntaxChecker.tab.c"
    break;

  case 135: /* direct_declarator: IDENTIFIER  */
#line 304 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount); }
#line 2288 "syntaxChecker.tab.c"
    break;

  case 136: /* direct_declarator: '(' declarator ')'  */
#line 305 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2294 "syntaxChecker.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 306 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2300 "syntaxChecker.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator '[' ']'  */
#line 307 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2306 "syntaxChecker.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 308 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2312 "syntaxChecker.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 309 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2318 "syntaxChecker.tab.c"
    break;

  case 141: /* direct_declarator: direct_declarator '(' ')'  */
#line 310 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2324 "syntaxChecker.tab.c"
    break;

  case 142: /* pointer: '*'  */
#line 314 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2330 "syntaxChecker.tab.c"
    break;

  case 143: /* pointer: '*' type_qualifier_list  */
#line 315 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2336 "syntaxChecker.tab.c"
    break;

  case 144: /* pointer: '*' pointer  */
#line 316 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2342 "syntaxChecker.tab.c"
    break;

  case 145: /* pointer: '*' type_qualifier_list pointer  */
#line 317 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2348 "syntaxChecker.tab.c"
    break;

  case 149: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 328 "syntaxChecker.y"
                                                { makeList(",", 'p', lineCount); makeList("::", 'o', lineCount); }
#line 2354 "syntaxChecker.tab.c"
    break;

  case 151: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 333 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2360 "syntaxChecker.tab.c"
    break;

  case 155: /* identifier_list: IDENTIFIER  */
#line 343 "syntaxChecker.y"
                                                {makeList(tablePtr, 'v', lineCount);}
#line 2366 "syntaxChecker.tab.c"
    break;

  case 156: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 344 "syntaxChecker.y"
                                                { makeList(tablePtr, 'v', lineCount); makeList(",", 'p', lineCount); }
#line 2372 "syntaxChecker.tab.c"
    break;

  case 162: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 359 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2378 "syntaxChecker.tab.c"
    break;

  case 163: /* direct_abstract_declarator: '[' ']'  */
#line 360 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2384 "syntaxChecker.tab.c"
    break;

  case 164: /* direct_abstract_declarator: '[' constant_expression ']'  */
#line 361 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2390 "syntaxChecker.tab.c"
    break;

  case 165: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 362 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2396 "syntaxChecker.tab.c"
    break;

  case 166: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 363 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2402 "syntaxChecker.tab.c"
    break;

  case 167: /* direct_abstract_declarator: '(' ')'  */
#line 364 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2408 "syntaxChecker.tab.c"
    break;

  case 168: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 365 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2414 "syntaxChecker.tab.c"
    break;

  case 169: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 366 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2420 "syntaxChecker.tab.c"
    break;

  case 170: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 367 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2426 "syntaxChecker.tab.c"
    break;

  case 175: /* initializer_list: initializer_list ',' initializer  */
#line 378 "syntaxChecker.y"
                                           { makeList(",", 'p', lineCount); }
#line 2432 "syntaxChecker.tab.c"
    break;

  case 182: /* statement: error ';'  */
#line 388 "syntaxChecker.y"
                    { yyerror("Invalid statement; skipped."); yyerrok; }
#line 2438 "syntaxChecker.tab.c"
    break;

  case 183: /* labeled_statement: IDENTIFIER ':' statement  */
#line 393 "syntaxChecker.y"
                                                        { makeList(tablePtr, 'v', lineCount);  }
#line 2444 "syntaxChecker.tab.c"
    break;

  case 184: /* labeled_statement: CASE constant_expression ':' statement  */
#line 394 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("case", 'k', lineCount);}
#line 2450 "syntaxChecker.tab.c"
    break;

  case 185: /* labeled_statement: DEFAULT ':' statement  */
#line 395 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("default", 'k', lineCount); }
#line 2456 "syntaxChecker.tab.c"
    break;

  case 194: /* expression_statement: ';'  */
#line 416 "syntaxChecker.y"
                                        { makeList(";", 'p', lineCount); }
#line 2462 "syntaxChecker.tab.c"
    break;

  case 195: /* expression_statement: expression ';'  */
#line 417 "syntaxChecker.y"
                                { makeList(";", 'p', lineCount); }
#line 2468 "syntaxChecker.tab.c"
    break;

  case 196: /* expression_statement: error ';'  */
#line 418 "syntaxChecker.y"
                            { yyerror("Invalid expression; skipped."); yyerrok; }
#line 2474 "syntaxChecker.tab.c"
    break;

  case 197: /* selection_statement: IF '(' expression ')' statement  */
#line 424 "syntaxChecker.y"
                                { makeList("if", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount);}
#line 2480 "syntaxChecker.tab.c"
    break;

  case 198: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 426 "syntaxChecker.y"
                                { makeList("if", 'k', lineCount);  makeList("else", 'k', lineCount); makeList("(", 'p', lineCount); 					  makeList(")", 'p', lineCount); 
  				}
#line 2487 "syntaxChecker.tab.c"
    break;

  case 199: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 429 "syntaxChecker.y"
                                { makeList("switch", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2493 "syntaxChecker.tab.c"
    break;

  case 200: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 434 "syntaxChecker.y"
                        { makeList("while", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2499 "syntaxChecker.tab.c"
    break;

  case 201: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 436 "syntaxChecker.y"
                        { makeList("do", 'k', lineCount); makeList("while", 'k', lineCount); makeList("(", 'p', lineCount);         				  makeList(")", 'p', lineCount); makeList(";", 'p', lineCount); 
			}
#line 2506 "syntaxChecker.tab.c"
    break;

  case 202: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 439 "syntaxChecker.y"
                        { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2512 "syntaxChecker.tab.c"
    break;

  case 203: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 441 "syntaxChecker.y"
                        { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2518 "syntaxChecker.tab.c"
    break;

  case 204: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 445 "syntaxChecker.y"
                                { makeList("goto", 'k', lineCount); makeList(";", 'p', lineCount); makeList(tablePtr, 'v', lineCount);}
#line 2524 "syntaxChecker.tab.c"
    break;

  case 205: /* jump_statement: CONTINUE ';'  */
#line 446 "syntaxChecker.y"
                                { makeList("continue", 'k', lineCount); makeList(";", 'p', lineCount); }
#line 2530 "syntaxChecker.tab.c"
    break;

  case 206: /* jump_statement: BREAK ';'  */
#line 447 "syntaxChecker.y"
                                { makeList("break", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2536 "syntaxChecker.tab.c"
    break;

  case 207: /* jump_statement: RETURN ';'  */
#line 448 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2542 "syntaxChecker.tab.c"
    break;

  case 208: /* jump_statement: RETURN expression ';'  */
#line 449 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2548 "syntaxChecker.tab.c"
    break;


#line 2552 "syntaxChecker.tab.c"

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

#line 469 "syntaxChecker.y"

void yyerror(const char *msg) {
    errorFlag = 1;
    fflush(stdout);
    fprintf(stderr, "\n%s : %d : Syntax error: %s\n", sourceCode, lineCount, msg);
}

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("Invalid, Expected Format: ./a.out <sourceCode>\n");
        return 0;
    }

    yyin = fopen(argv[1], "r");
    sourceCode = argv[1];  // ✅ fixed memory leak
    yyparse();

    if (nestedCommentCount != 0) {
        errorFlag = 1;
        printf("%s : %d : Comment Does Not End\n", sourceCode, lineCount);
    }

    if (commentFlag == 1) {
        errorFlag = 1;
        printf("%s : %d : Nested Comment\n", sourceCode, lineCount);
    }

    if (!errorFlag) {
        printf("\n\n\t\t%s Parsing Completed\n\n", sourceCode);

        FILE *writeParsed = fopen("parsedTable.txt", "w");
        fprintf(writeParsed, "\n\t\t\t\tParsed Table\n\n\t\tToken\t\t\tType\t\t\t\t\t\t\tLineNumber\n");
        for (tokenList *ptr = parsedPtr; ptr != NULL; ptr = ptr->next) {
            fprintf(writeParsed, "\n%20s%30.30s%60s", ptr->token, ptr->type, ptr->line);
        }
        fclose(writeParsed);

        FILE *writeSymbol = fopen("symbolTable.txt", "w");
        fprintf(writeSymbol, "\n\t\t\t\tSymbol Table\n\n\t\tToken\t\t\t\t\t\tType\t\t\t\t\t\t\tLine Number\n");
        for (tokenList *ptr = symbolPtr; ptr != NULL; ptr = ptr->next) {
            fprintf(writeSymbol, "\n%20s%30.30s%60s", ptr->token, ptr->type, ptr->line);
        }
        fclose(writeSymbol);

        FILE *writeConstant = fopen("constantTable.txt", "w");
        fprintf(writeConstant, "\n   \t\t\t\t\t\t\t\tConstant Table \n\n \t\t\t\t\t\tValue\t\t\t\t\t\t\tLine Number\n");
        for (tokenList *ptr = constantPtr; ptr != NULL; ptr = ptr->next) {
            fprintf(writeConstant, "\n%50s%60s", ptr->token, ptr->line);
        }
        fclose(writeConstant);
    }

    printf("\n\n");
    return 0;
}


void makeList(char *tokenName,char tokenType, int tokenLine)
{
	char line[39],lineBuffer[19];
	
  	snprintf(lineBuffer, 19, "%d", tokenLine);
	strcpy(line," ");
	strcat(line,lineBuffer);
	char type[30];
	switch(tokenType)
	{
			case 'c':
					strcpy(type,"Constant");
					break;
			case 'v':
					strcpy(type,"Identifier");
					break;
			case 'p':
					strcpy(type,"Punctuator");
					break;
			case 'o':
					strcpy(type,"Operator");
					break;
			case 'k':
					strcpy(type,"Keyword");
					break;
			case 's':
					strcpy(type,"String Literal");
					break;
			case 'd':
					strcpy(type,"Preprocessor Statement");
					break;
	}
	for(tokenList *p=parsedPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				goto xx;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		
    		tokenList *p=parsedPtr;
    		if(p==NULL){
    			
    			parsedPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}	
    		
	
	xx:
	if(tokenType == 'c')
	{
    		
    		for(tokenList *p=constantPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				return;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		
    		tokenList *p=constantPtr;
    		if(p==NULL){
    			constantPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}	
    		

	}
	if(tokenType=='v')
	{
    		for(tokenList *p=symbolPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				return;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		switch(typeBuffer){
		case 'i': strcpy(temp->type,"INT"); break;
		case 'f': strcpy(temp->type,"FLOAT");break;
		case 'v' :strcpy(temp->type,"VOID");break;
		case 'c': strcpy(temp->type,"CHAR");break;
		
		}
		
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		tokenList *p=symbolPtr;
    		if(p==NULL){
    			
    			symbolPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}
	}
}
