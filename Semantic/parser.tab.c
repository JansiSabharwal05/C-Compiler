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
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"

	void ins();
	void insV();

	int flag=0;
	
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];

	extern int current_nesting;

	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	extern int params_count;
	int call_params_count;

#line 113 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_ENDIF = 20,                     /* ENDIF  */
  YYSYMBOL_identifier = 21,                /* identifier  */
  YYSYMBOL_array_identifier = 22,          /* array_identifier  */
  YYSYMBOL_func_identifier = 23,           /* func_identifier  */
  YYSYMBOL_integer_constant = 24,          /* integer_constant  */
  YYSYMBOL_string_constant = 25,           /* string_constant  */
  YYSYMBOL_float_constant = 26,            /* float_constant  */
  YYSYMBOL_character_constant = 27,        /* character_constant  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_leftshift_assignment_operator = 29, /* leftshift_assignment_operator  */
  YYSYMBOL_rightshift_assignment_operator = 30, /* rightshift_assignment_operator  */
  YYSYMBOL_XOR_assignment_operator = 31,   /* XOR_assignment_operator  */
  YYSYMBOL_OR_assignment_operator = 32,    /* OR_assignment_operator  */
  YYSYMBOL_AND_assignment_operator = 33,   /* AND_assignment_operator  */
  YYSYMBOL_modulo_assignment_operator = 34, /* modulo_assignment_operator  */
  YYSYMBOL_multiplication_assignment_operator = 35, /* multiplication_assignment_operator  */
  YYSYMBOL_division_assignment_operator = 36, /* division_assignment_operator  */
  YYSYMBOL_addition_assignment_operator = 37, /* addition_assignment_operator  */
  YYSYMBOL_subtraction_assignment_operator = 38, /* subtraction_assignment_operator  */
  YYSYMBOL_assignment_operator = 39,       /* assignment_operator  */
  YYSYMBOL_OR_operator = 40,               /* OR_operator  */
  YYSYMBOL_AND_operator = 41,              /* AND_operator  */
  YYSYMBOL_pipe_operator = 42,             /* pipe_operator  */
  YYSYMBOL_caret_operator = 43,            /* caret_operator  */
  YYSYMBOL_amp_operator = 44,              /* amp_operator  */
  YYSYMBOL_equality_operator = 45,         /* equality_operator  */
  YYSYMBOL_inequality_operator = 46,       /* inequality_operator  */
  YYSYMBOL_lessthan_assignment_operator = 47, /* lessthan_assignment_operator  */
  YYSYMBOL_lessthan_operator = 48,         /* lessthan_operator  */
  YYSYMBOL_greaterthan_assignment_operator = 49, /* greaterthan_assignment_operator  */
  YYSYMBOL_greaterthan_operator = 50,      /* greaterthan_operator  */
  YYSYMBOL_leftshift_operator = 51,        /* leftshift_operator  */
  YYSYMBOL_rightshift_operator = 52,       /* rightshift_operator  */
  YYSYMBOL_add_operator = 53,              /* add_operator  */
  YYSYMBOL_subtract_operator = 54,         /* subtract_operator  */
  YYSYMBOL_multiplication_operator = 55,   /* multiplication_operator  */
  YYSYMBOL_division_operator = 56,         /* division_operator  */
  YYSYMBOL_modulo_operator = 57,           /* modulo_operator  */
  YYSYMBOL_SIZEOF = 58,                    /* SIZEOF  */
  YYSYMBOL_tilde_operator = 59,            /* tilde_operator  */
  YYSYMBOL_exclamation_operator = 60,      /* exclamation_operator  */
  YYSYMBOL_increment_operator = 61,        /* increment_operator  */
  YYSYMBOL_decrement_operator = 62,        /* decrement_operator  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_declaration_list = 73,          /* declaration_list  */
  YYSYMBOL_D = 74,                         /* D  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_variable_declaration = 76,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 77, /* variable_declaration_list  */
  YYSYMBOL_variable_declaration_identifier = 78, /* variable_declaration_identifier  */
  YYSYMBOL_79_1 = 79,                      /* $@1  */
  YYSYMBOL_80_2 = 80,                      /* $@2  */
  YYSYMBOL_vdi = 81,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 82,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 83,      /* initilization_params  */
  YYSYMBOL_initilization = 84,             /* initilization  */
  YYSYMBOL_type_specifier = 85,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 86,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 87,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 88,              /* long_grammar  */
  YYSYMBOL_short_grammar = 89,             /* short_grammar  */
  YYSYMBOL_function_declaration = 90,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 91, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 92, /* function_declaration_param_statement  */
  YYSYMBOL_params = 93,                    /* params  */
  YYSYMBOL_parameters_list = 94,           /* parameters_list  */
  YYSYMBOL_95_3 = 95,                      /* $@3  */
  YYSYMBOL_parameters_identifier_list = 96, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 97, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 98,          /* param_identifier  */
  YYSYMBOL_99_4 = 99,                      /* $@4  */
  YYSYMBOL_param_identifier_breakup = 100, /* param_identifier_breakup  */
  YYSYMBOL_statement = 101,                /* statement  */
  YYSYMBOL_compound_statement = 102,       /* compound_statement  */
  YYSYMBOL_103_5 = 103,                    /* $@5  */
  YYSYMBOL_statment_list = 104,            /* statment_list  */
  YYSYMBOL_expression_statment = 105,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 106,   /* conditional_statements  */
  YYSYMBOL_107_6 = 107,                    /* $@6  */
  YYSYMBOL_conditional_statements_breakup = 108, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 109,     /* iterative_statements  */
  YYSYMBOL_110_7 = 110,                    /* $@7  */
  YYSYMBOL_111_8 = 111,                    /* $@8  */
  YYSYMBOL_112_9 = 112,                    /* $@9  */
  YYSYMBOL_return_statement = 113,         /* return_statement  */
  YYSYMBOL_break_statement = 114,          /* break_statement  */
  YYSYMBOL_string_initilization = 115,     /* string_initilization  */
  YYSYMBOL_array_initialization = 116,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 117,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 118, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_simple_expression = 120,        /* simple_expression  */
  YYSYMBOL_and_expression = 121,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 122, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 123,       /* regular_expression  */
  YYSYMBOL_relational_operators = 124,     /* relational_operators  */
  YYSYMBOL_sum_expression = 125,           /* sum_expression  */
  YYSYMBOL_sum_operators = 126,            /* sum_operators  */
  YYSYMBOL_term = 127,                     /* term  */
  YYSYMBOL_MULOP = 128,                    /* MULOP  */
  YYSYMBOL_factor = 129,                   /* factor  */
  YYSYMBOL_mutable = 130,                  /* mutable  */
  YYSYMBOL_131_10 = 131,                   /* $@10  */
  YYSYMBOL_immutable = 132,                /* immutable  */
  YYSYMBOL_call = 133,                     /* call  */
  YYSYMBOL_134_11 = 134,                   /* $@11  */
  YYSYMBOL_arguments = 135,                /* arguments  */
  YYSYMBOL_arguments_list = 136,           /* arguments_list  */
  YYSYMBOL_137_12 = 137,                   /* $@12  */
  YYSYMBOL_A = 138,                        /* A  */
  YYSYMBOL_139_13 = 139,                   /* $@13  */
  YYSYMBOL_constant = 140                  /* constant  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    68,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
       0,    84,    84,    87,    90,    91,    94,    95,    98,   101,
     101,   104,   104,   105,   105,   109,   109,   112,   113,   116,
     117,   120,   121,   122,   125,   125,   125,   125,   126,   127,
     128,   129,   130,   133,   133,   133,   133,   136,   136,   136,
     136,   139,   139,   142,   142,   145,   148,   151,   154,   154,
     157,   157,   160,   163,   164,   167,   167,   170,   171,   174,
     174,   175,   175,   176,   176,   177,   180,   180,   183,   184,
     187,   188,   191,   191,   194,   195,   198,   198,   199,   199,
     200,   200,   202,   203,   216,   219,   222,   225,   228,   229,
     232,   240,   246,   252,   258,   264,   270,   271,   272,   276,
     277,   280,   281,   285,   286,   289,   290,   293,   293,   293,
     294,   294,   294,   297,   298,   301,   302,   305,   306,   309,
     309,   309,   312,   313,   316,   328,   328,   336,   337,   338,
     341,   341,   358,   358,   361,   361,   364,   364,   365,   368,
     369,   370,   371
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF",
  "identifier", "array_identifier", "func_identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "leftshift_assignment_operator", "rightshift_assignment_operator",
  "XOR_assignment_operator", "OR_assignment_operator",
  "AND_assignment_operator", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "SIZEOF", "tilde_operator",
  "exclamation_operator", "increment_operator", "decrement_operator",
  "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "$accept",
  "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "$@3", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@4",
  "param_identifier_breakup", "statement", "compound_statement", "$@5",
  "statment_list", "expression_statment", "conditional_statements", "$@6",
  "conditional_statements_breakup", "iterative_statements", "$@7", "$@8",
  "$@9", "return_statement", "break_statement", "string_initilization",
  "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "simple_expression",
  "and_expression", "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@10", "immutable", "call", "$@11",
  "arguments", "arguments_list", "$@12", "A", "$@13", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-63)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     171,   -63,   -63,   -63,   -63,    16,    67,    77,   132,   -63,
       7,   -63,   171,   -63,   -12,   -63,   171,   -63,   -63,   -63,
     -63,   -63,    16,    67,   -63,   -63,    16,    67,   -63,   -63,
     -63,   -63,    15,   -63,   -41,   -63,   -63,   -63,    43,   -63,
     -63,   -63,   -63,   -63,   -63,     4,     4,   -63,    69,    63,
      97,   123,    -5,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
      53,    61,     3,    66,    68,    97,    57,    75,   -63,   -63,
     -63,   -63,   -63,   123,   -63,   123,   -63,    69,   -63,   -63,
      65,   -63,   -63,   -63,   -63,   -63,    80,   111,   112,   -63,
     153,    44,    70,   -63,   135,   -63,   -63,   -63,   111,   -63,
      86,   115,   -63,    91,   171,   -63,   123,   -63,    95,   123,
     123,   143,   -63,   -63,    96,   -63,   116,    29,   -63,   123,
     123,   -63,   -63,   -63,   -63,   -63,   -63,   141,   -63,   -63,
     141,   -63,   -63,   -63,   141,   123,   123,   123,   123,   123,
     123,   -63,   -63,   146,   162,   -63,   122,   -63,   -63,   -37,
     -63,   -27,   126,   124,   123,   123,   -63,    29,   125,   112,
     -63,    44,    70,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -17,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   123,   123,
     -63,   136,   -63,   127,   -63,   -63,   168,    97,    97,    25,
      27,   130,   -63,   -63,   142,   137,   177,   -63,   -63,   -63,
     123,   -63,   168,   -63,   -63,    97,   -63,   123,   147,   -63,
     -63,   -63,   144,   -63,   130,   -63,   -63
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,    26,    27,    42,    44,    40,    36,    32,
       0,     2,     5,     6,     0,     7,    49,    41,    28,    43,
      29,    37,    42,    44,    31,    33,    42,    44,    30,     1,
       4,     3,    11,    13,     0,    10,    50,    45,     0,    48,
      38,    39,    34,    35,    46,    18,    18,     8,     0,     0,
      66,     0,     0,    12,    15,    14,    11,     9,    55,    51,
      54,     0,     0,     0,     0,    66,     0,   124,   125,   139,
     140,   141,   142,     0,    71,     0,    65,     0,    47,    60,
       0,    59,    61,    62,    63,    64,     0,    98,   100,   102,
     104,   106,   114,   118,   123,   122,   128,   129,    16,   123,
       0,     0,    17,    58,     0,    52,     0,    82,     0,     0,
       0,     0,    84,   130,     0,   103,     0,    66,    70,     0,
       0,   111,   112,   108,   110,   107,   109,     0,   115,   116,
       0,   119,   120,   121,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    23,     0,    20,     0,    56,    53,     0,
      83,     0,     0,     0,   133,     0,   127,    66,     0,    99,
     101,   105,   113,   117,    95,    93,    94,    91,    92,    90,
       0,    19,    21,    22,    85,    57,    72,    76,     0,     0,
     134,     0,   132,     0,    68,    67,     0,    66,    66,     0,
       0,   138,   131,   126,    89,     0,    75,    77,    78,    80,
       0,   135,     0,    87,    86,    66,    73,     0,     0,   136,
      88,    74,     0,    81,   138,    79,   137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   197,   -63,   -63,     6,   -63,   163,   -63,   -63,
     167,   -63,   -63,   -63,     5,   -63,   -63,   -10,    41,   -63,
     -63,   -63,   -63,   110,   -63,   -63,   -63,   -63,   -63,   -63,
     -50,   -63,   -63,    58,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,    73,   -63,    17,   -63,   -61,   -49,
      98,   -62,   -63,   -63,    93,   -63,    88,   -63,    87,   -47,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     8,   -63,   -63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    31,    12,    76,    34,    35,    45,    46,
      53,    54,   102,   171,    77,    28,    24,    18,    20,    15,
      16,    37,    38,    39,    49,    59,   105,    60,   103,   147,
     157,    79,    80,   158,    81,    82,   187,   206,    83,   188,
     207,   208,    84,    85,   145,   173,   195,   203,    86,    87,
      88,    89,    90,   127,    91,   130,    92,   134,    93,    94,
     114,    95,    96,   154,   181,   182,   191,   201,   214,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   108,    98,   119,    99,    14,    13,    29,   174,    32,
      33,   115,    40,   119,   116,   111,    42,    14,    13,   100,
      17,    36,    47,    48,    67,    68,    99,    69,    70,    71,
      72,   176,    61,     1,     2,     3,     4,     5,     6,     7,
       8,   177,    62,    51,     9,    63,    64,    65,    66,   152,
      67,    68,   186,    69,    70,    71,    72,   149,   160,    99,
     151,   101,    99,    73,    41,   119,   107,   119,    43,    52,
      75,    19,    99,    99,   164,   165,   166,   167,   168,   169,
      99,    21,    44,    99,    58,    22,    23,    99,   198,    73,
      56,    33,    74,   180,   183,   199,    75,   128,   129,   -69,
      61,     1,     2,     3,     4,     5,     6,     7,     8,    36,
      62,    50,     9,    63,    64,    65,    66,   104,    67,    68,
     112,    69,    70,    71,    72,   131,   132,   133,   106,   189,
     190,    99,    99,   109,   117,   110,    25,   196,   197,   209,
      26,    27,   113,   118,    67,    68,   212,    69,    70,    71,
      72,   119,   143,   120,   144,   211,   146,    73,   150,   153,
      74,   155,    67,    68,    75,    69,    70,    71,    72,   135,
     136,   137,   138,   139,   140,     1,     2,     3,     4,     5,
       6,     7,     8,    73,   156,   170,     9,   174,   175,   178,
      75,   179,   194,   193,   200,   185,   141,   142,   121,   122,
     123,   124,   125,   126,   192,   205,   202,   204,    75,    30,
     213,    57,   215,    55,   148,   184,   172,   159,   162,   210,
     161,   163,   216
};

static const yytype_uint8 yycheck[] =
{
      50,    62,    51,    40,    51,     0,     0,     0,    25,    21,
      22,    73,    22,    40,    75,    65,    26,    12,    12,    24,
       4,    16,    63,    64,    21,    22,    73,    24,    25,    26,
      27,    68,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    68,    13,    39,    15,    16,    17,    18,    19,   110,
      21,    22,    69,    24,    25,    26,    27,   106,   120,   106,
     109,    66,   109,    60,    23,    40,    63,    40,    27,    65,
      67,     4,   119,   120,   135,   136,   137,   138,   139,   140,
     127,     4,    67,   130,    21,     8,     9,   134,    63,    60,
      21,    22,    63,   154,   155,    68,    67,    53,    54,    70,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   104,
      13,    68,    15,    16,    17,    18,    19,    64,    21,    22,
      63,    24,    25,    26,    27,    55,    56,    57,    67,   178,
     179,   178,   179,    67,    69,    67,     4,   187,   188,   200,
       8,     9,    67,    63,    21,    22,   207,    24,    25,    26,
      27,    40,    66,    41,    39,   205,    65,    60,    63,    16,
      63,    65,    21,    22,    67,    24,    25,    26,    27,    34,
      35,    36,    37,    38,    39,     4,     5,     6,     7,     8,
       9,    10,    11,    60,    68,    39,    15,    25,    66,    63,
      67,    67,    24,    66,    64,    70,    61,    62,    45,    46,
      47,    48,    49,    50,    68,    28,    64,    70,    67,    12,
      63,    48,    68,    46,   104,   157,   143,   119,   130,   202,
     127,   134,   214
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    15,
      72,    73,    75,    76,    85,    90,    91,     4,    88,     4,
      89,     4,     8,     9,    87,     4,     8,     9,    86,     0,
      73,    74,    21,    22,    77,    78,    85,    92,    93,    94,
      88,    89,    88,    89,    67,    79,    80,    63,    64,    95,
      68,    39,    65,    81,    82,    81,    21,    78,    21,    96,
      98,     3,    13,    16,    17,    18,    19,    21,    22,    24,
      25,    26,    27,    60,    63,    67,    76,    85,   101,   102,
     103,   105,   106,   109,   113,   114,   119,   120,   121,   122,
     123,   125,   127,   129,   130,   132,   133,   140,   120,   130,
      24,    66,    83,    99,    64,    97,    67,    63,   119,    67,
      67,   101,    63,    67,   131,   122,   119,    69,    63,    40,
      41,    45,    46,    47,    48,    49,    50,   124,    53,    54,
     126,    55,    56,    57,   128,    34,    35,    36,    37,    38,
      39,    61,    62,    66,    39,   115,    65,   100,    94,   120,
      63,   120,   119,    16,   134,    65,    68,   101,   104,   121,
     122,   125,   127,   129,   119,   119,   119,   119,   119,   119,
      39,    84,   115,   116,    25,    66,    68,    68,    63,    67,
     119,   135,   136,   119,   104,    70,    69,   107,   110,   120,
     120,   137,    68,    66,    24,   117,   101,   101,    63,    68,
      64,   138,    64,   118,    70,    28,   108,   111,   112,   119,
     117,   101,   119,    63,   139,    68,   138
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    76,    77,
      77,    79,    78,    80,    78,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    91,    92,    93,    93,
      95,    94,    96,    97,    97,    99,    98,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   103,   102,   104,   104,
     105,   105,   107,   106,   108,   108,   110,   109,   111,   109,
     112,   109,   113,   113,   114,   115,   116,   117,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   129,   129,   130,   131,   130,   132,   132,   132,
     134,   133,   135,   135,   137,   136,   139,   138,   138,   140,
     140,   140,   140
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       2,     1,     1,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     2,     3,     3,     1,     0,
       0,     3,     2,     2,     0,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     2,     0,
       2,     1,     0,     7,     2,     0,     0,     6,     0,     9,
       0,     8,     2,     3,     2,     2,     4,     2,     2,     0,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     1,
       0,     5,     1,     0,     0,     3,     0,     4,     0,     1,
       1,     1,     1
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
  case 11: /* $@1: %empty  */
#line 104 "parser.y"
                                     {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,current_nesting); ins();  }
#line 1429 "parser.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 105 "parser.y"
                                             {if(duplicate(curid)){printf("Duplicate\n");exit(0);}insertSTnest(curid,current_nesting); ins();  }
#line 1435 "parser.tab.c"
    break;

  case 19: /* initilization_params: integer_constant ']' initilization  */
#line 116 "parser.y"
                                                             {if(yyval < 1) {printf("Wrong array size\n"); exit(0);} }
#line 1441 "parser.tab.c"
    break;

  case 46: /* function_declaration_type: type_specifier identifier '('  */
#line 148 "parser.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1447 "parser.tab.c"
    break;

  case 50: /* $@3: %empty  */
#line 157 "parser.y"
                                         { check_params(curtype); }
#line 1453 "parser.tab.c"
    break;

  case 51: /* parameters_list: type_specifier $@3 parameters_identifier_list  */
#line 157 "parser.y"
                                                                                               { insertSTparamscount(currfunc, params_count); }
#line 1459 "parser.tab.c"
    break;

  case 55: /* $@4: %empty  */
#line 167 "parser.y"
                                     { ins();insertSTnest(curid,1); params_count++; }
#line 1465 "parser.tab.c"
    break;

  case 66: /* $@5: %empty  */
#line 180 "parser.y"
                          {current_nesting++;}
#line 1471 "parser.tab.c"
    break;

  case 67: /* compound_statement: $@5 '{' statment_list '}'  */
#line 180 "parser.y"
                                                                       {deletedata(current_nesting);current_nesting--;}
#line 1477 "parser.tab.c"
    break;

  case 72: /* $@6: %empty  */
#line 191 "parser.y"
                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1483 "parser.tab.c"
    break;

  case 76: /* $@7: %empty  */
#line 198 "parser.y"
                                                          {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1489 "parser.tab.c"
    break;

  case 78: /* $@8: %empty  */
#line 199 "parser.y"
                                                                       {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1495 "parser.tab.c"
    break;

  case 80: /* $@9: %empty  */
#line 200 "parser.y"
                                                                      {if(yyvsp[-1]!=1){printf("Condition checking is not of type int\n");exit(0);}}
#line 1501 "parser.tab.c"
    break;

  case 82: /* return_statement: RETURN ';'  */
#line 202 "parser.y"
                                     {if(strcmp(currfunctype,"void")) {printf("Returning void of a non-void function\n"); exit(0);}}
#line 1507 "parser.tab.c"
    break;

  case 83: /* return_statement: RETURN expression ';'  */
#line 203 "parser.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{ 
											yyerror("Function returns something but is declared void");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("Expression doesn't match return type of function\n"); exit(0);
										}
			              
			                     	}
#line 1523 "parser.tab.c"
    break;

  case 85: /* string_initilization: assignment_operator string_constant  */
#line 219 "parser.y"
                                                              {insV();}
#line 1529 "parser.tab.c"
    break;

  case 90: /* expression: mutable assignment_operator expression  */
#line 232 "parser.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
																	  {
			                                                          yyval=1;
			                                                          } 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1542 "parser.tab.c"
    break;

  case 91: /* expression: mutable addition_assignment_operator expression  */
#line 240 "parser.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1553 "parser.tab.c"
    break;

  case 92: /* expression: mutable subtraction_assignment_operator expression  */
#line 246 "parser.y"
                                                                              {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1564 "parser.tab.c"
    break;

  case 93: /* expression: mutable multiplication_assignment_operator expression  */
#line 252 "parser.y"
                                                                                {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1575 "parser.tab.c"
    break;

  case 94: /* expression: mutable division_assignment_operator expression  */
#line 258 "parser.y"
                                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1586 "parser.tab.c"
    break;

  case 95: /* expression: mutable modulo_assignment_operator expression  */
#line 264 "parser.y"
                                                                                        {
																	  if(yyvsp[-2]==1 && yyvsp[0]==1) 
			                                                          yyval=1; 
			                                                          else 
			                                                          {yyval=-1; printf("Type mismatch\n"); exit(0);} 
			                                                       }
#line 1597 "parser.tab.c"
    break;

  case 96: /* expression: mutable increment_operator  */
#line 270 "parser.y"
                                                                                                        {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1603 "parser.tab.c"
    break;

  case 97: /* expression: mutable decrement_operator  */
#line 271 "parser.y"
                                                                                                        {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1609 "parser.tab.c"
    break;

  case 98: /* expression: simple_expression  */
#line 272 "parser.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1615 "parser.tab.c"
    break;

  case 99: /* simple_expression: simple_expression OR_operator and_expression  */
#line 276 "parser.y"
                                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1621 "parser.tab.c"
    break;

  case 100: /* simple_expression: and_expression  */
#line 277 "parser.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1627 "parser.tab.c"
    break;

  case 101: /* and_expression: and_expression AND_operator unary_relation_expression  */
#line 280 "parser.y"
                                                                                {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1633 "parser.tab.c"
    break;

  case 102: /* and_expression: unary_relation_expression  */
#line 281 "parser.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1639 "parser.tab.c"
    break;

  case 103: /* unary_relation_expression: exclamation_operator unary_relation_expression  */
#line 285 "parser.y"
                                                                         {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1645 "parser.tab.c"
    break;

  case 104: /* unary_relation_expression: regular_expression  */
#line 286 "parser.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1651 "parser.tab.c"
    break;

  case 105: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 289 "parser.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1657 "parser.tab.c"
    break;

  case 106: /* regular_expression: sum_expression  */
#line 290 "parser.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1663 "parser.tab.c"
    break;

  case 113: /* sum_expression: sum_expression sum_operators term  */
#line 297 "parser.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1669 "parser.tab.c"
    break;

  case 114: /* sum_expression: term  */
#line 298 "parser.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1675 "parser.tab.c"
    break;

  case 117: /* term: term MULOP factor  */
#line 305 "parser.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1681 "parser.tab.c"
    break;

  case 118: /* term: factor  */
#line 306 "parser.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1687 "parser.tab.c"
    break;

  case 122: /* factor: immutable  */
#line 312 "parser.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1693 "parser.tab.c"
    break;

  case 123: /* factor: mutable  */
#line 313 "parser.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1699 "parser.tab.c"
    break;

  case 124: /* mutable: identifier  */
#line 316 "parser.y"
                                     {
						  if(check_id_is_func(curid))
						  {printf("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Undeclared\n");exit(0);} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 1716 "parser.tab.c"
    break;

  case 125: /* $@10: %empty  */
#line 328 "parser.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("Undeclared\n");exit(0);}}
#line 1722 "parser.tab.c"
    break;

  case 126: /* mutable: array_identifier $@10 '[' expression ']'  */
#line 329 "parser.y"
                                           {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1732 "parser.tab.c"
    break;

  case 127: /* immutable: '(' expression ')'  */
#line 336 "parser.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1738 "parser.tab.c"
    break;

  case 129: /* immutable: constant  */
#line 338 "parser.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1744 "parser.tab.c"
    break;

  case 130: /* $@11: %empty  */
#line 341 "parser.y"
                                        {
			             if(!check_declaration(curid, "Function"))
			             { printf("Need to declare function"); exit(0);} 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 1755 "parser.tab.c"
    break;

  case 131: /* call: identifier '(' $@11 arguments ')'  */
#line 347 "parser.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("function arguments required does not match the passed arguments...");
									exit(8);
								}
							} 
						 }
#line 1769 "parser.tab.c"
    break;

  case 134: /* $@12: %empty  */
#line 361 "parser.y"
                                     { call_params_count++; }
#line 1775 "parser.tab.c"
    break;

  case 136: /* $@13: %empty  */
#line 364 "parser.y"
                                         { call_params_count++; }
#line 1781 "parser.tab.c"
    break;

  case 139: /* constant: integer_constant  */
#line 368 "parser.y"
                                                {  insV(); yyval=1; }
#line 1787 "parser.tab.c"
    break;

  case 140: /* constant: string_constant  */
#line 369 "parser.y"
                                                {  insV(); yyval=-1;}
#line 1793 "parser.tab.c"
    break;

  case 141: /* constant: float_constant  */
#line 370 "parser.y"
                                                {  insV(); }
#line 1799 "parser.tab.c"
    break;

  case 142: /* constant: character_constant  */
#line 371 "parser.y"
                                            {  insV();yyval=1; }
#line 1805 "parser.tab.c"
    break;


#line 1809 "parser.tab.c"

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

#line 373 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf( "PASSED: Semantic Phase\n");
		printf("%30s"  "PRINTING SYMBOL TABLE"  "\n\n", " ");
		printST();
		printf("%30s %s\n", " ", "-------------------------------");
		printf("\n\n%30s"  "PRINTING CONSTANT TABLE"  "\n\n", " ");
		printCT();
	}
}

void yyerror(char *s)
{
	printf( "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf( "FAILED: Semantic Phase Parsing failed\n" );
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
