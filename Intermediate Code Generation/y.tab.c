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

#include "icg.h"


extern int yylineno;
extern char *yytext;

int paramCount;
char icgQuad[50];
int funcLineNumber = 0;


#line 84 "y.tab.c"

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

#line 211 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_CONSTANT = 6,                   /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 7,                 /* IDENTIFIER  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_INC_OP = 14,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 15,                    /* DEC_OP  */
  YYSYMBOL_U_PLUS = 16,                    /* U_PLUS  */
  YYSYMBOL_U_MINUS = 17,                   /* U_MINUS  */
  YYSYMBOL_EQUAL = 18,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 19,                 /* NOT_EQUAL  */
  YYSYMBOL_GREATER_OR_EQUAL = 20,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 21,             /* LESS_OR_EQUAL  */
  YYSYMBOL_SHIFTLEFT = 22,                 /* SHIFTLEFT  */
  YYSYMBOL_LOG_AND = 23,                   /* LOG_AND  */
  YYSYMBOL_LOG_OR = 24,                    /* LOG_OR  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* '<'  */
  YYSYMBOL_27_ = 27,                       /* '>'  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* '%'  */
  YYSYMBOL_33_ = 33,                       /* '!'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ')'  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_program_head = 41,              /* program_head  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_function = 43,                  /* function  */
  YYSYMBOL_function_body = 44,             /* function_body  */
  YYSYMBOL_declaration_list = 45,          /* declaration_list  */
  YYSYMBOL_declaration = 46,               /* declaration  */
  YYSYMBOL_parameter_list = 47,            /* parameter_list  */
  YYSYMBOL_var_type = 48,                  /* var_type  */
  YYSYMBOL_statement_list = 49,            /* statement_list  */
  YYSYMBOL_statement = 50,                 /* statement  */
  YYSYMBOL_matched_statement = 51,         /* matched_statement  */
  YYSYMBOL_unmatched_statement = 52,       /* unmatched_statement  */
  YYSYMBOL_assignment = 53,                /* assignment  */
  YYSYMBOL_expression = 54,                /* expression  */
  YYSYMBOL_exp_list = 55,                  /* exp_list  */
  YYSYMBOL_id = 56,                        /* id  */
  YYSYMBOL_marker = 57,                    /* marker  */
  YYSYMBOL_jump_marker = 58                /* jump_marker  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
       2,     2,     2,    33,     2,     2,     2,    32,     2,     2,
      34,    35,    30,    28,    39,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      26,    25,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    83,    90,   102,   109,   120,   125,   133,
     137,   144,   150,   156,   168,   174,   180,   186,   192,   197,
     203,   208,   214,   222,   228,   238,   244,   253,   262,   269,
     278,   287,   296,   302,   322,   328,   337,   344,   353,   374,
     386,   391,   412,   437,   462,   481,   500,   516,   540,   556,
     572,   588,   605,   635,   665,   695,   725,   755,   775,   782,
     795,   804,   810,   836,   863,   879,   890,   904,   911,   917
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "FLOAT",
  "CONSTANT", "IDENTIFIER", "IF", "ELSE", "RETURN", "DO", "WHILE", "FOR",
  "INC_OP", "DEC_OP", "U_PLUS", "U_MINUS", "EQUAL", "NOT_EQUAL",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "SHIFTLEFT", "LOG_AND", "LOG_OR",
  "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'('",
  "')'", "';'", "'{'", "'}'", "','", "$accept", "program_head", "program",
  "function", "function_body", "declaration_list", "declaration",
  "parameter_list", "var_type", "statement_list", "statement",
  "matched_statement", "unmatched_statement", "assignment", "expression",
  "exp_list", "id", "marker", "jump_marker", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -84,    11,    55,    55,   -84,   -84,   -84,   -84,   -84,     6,
     -84,   -84,   -32,    65,   -84,     6,     6,   -30,   -84,   -84,
       2,    88,   -84,   160,   -84,     6,     6,     6,     6,   -84,
     -10,    14,   -84,   -84,    -8,    66,    66,    66,    66,    66,
      66,   175,   160,     1,   -23,   -84,   -84,   -84,    35,   246,
     -24,   -84,   -84,   -84,   -84,    66,   -84,    39,   208,    44,
      66,   -84,    51,   -84,   -84,   -84,   -84,   228,   -84,    52,
      18,    59,   -84,     6,   -84,   208,   -84,    66,    66,    66,
      66,   -84,   -84,    66,    66,    66,    66,    66,    66,    66,
      66,    28,    63,   -84,    91,    66,    68,   -84,   -84,   -84,
     -84,   -84,   -84,   173,   173,   114,   114,    66,    66,   114,
     114,    57,    57,   -84,   -84,   -84,   246,    69,   246,   -12,
     -84,    80,    71,   -84,   276,   261,   -84,    81,    66,   208,
     -84,   -84,    66,   -84,   246,   -84,   110,    66,   208,    85,
     113,    89,   -84,   -84,   -84,   -84,    90,   -84,   -84,    66,
     208,   -84,   -84,   -84,   -84,    99,   -84,   208,   -84,   -84,
     -84,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      69,     0,     2,     0,     1,    20,    21,    22,     4,     0,
       3,    67,     0,    19,    18,     0,     0,     0,    14,    15,
       0,     0,     5,     0,     6,     0,     0,     0,     0,    60,
       0,     0,    68,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    23,    25,    26,     0,    40,
      64,    16,    17,    11,    12,     0,    29,     0,     0,     0,
       0,    42,    64,    43,    58,    59,    57,     0,    35,    68,
       0,    68,     9,     0,     7,     0,    28,     0,     0,     0,
       0,    68,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    61,    34,    10,
       8,    13,    24,    47,    46,    48,    49,     0,     0,    51,
      50,    52,    53,    54,    55,    56,    41,     0,    65,     0,
      68,     0,     0,    68,    45,    44,    63,     0,     0,     0,
      68,    68,     0,    62,    66,    36,    25,     0,     0,     0,
       0,     0,    69,    69,    68,    68,     0,    31,    37,     0,
       0,    32,    69,    27,    39,     0,    68,     0,    69,    69,
      33,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -84,   -84,   -84,   122,   -84,   -84,    93,   -84,   -84,    54,
     -50,   -73,   -83,   -19,    72,   -84,    -9,   -29,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     8,    24,    42,    43,    17,     9,    44,
      45,    46,    47,    48,    49,   119,    62,    75,     3
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    90,    13,    58,    59,    20,    18,    19,    94,    21,
      91,     4,    57,    11,    50,    74,    51,    52,    53,    54,
      29,    11,    50,   127,    55,   102,    60,   128,    35,    36,
      37,    38,    50,    50,    29,    11,    92,    72,    22,    23,
      73,    96,    35,    36,    37,    38,    50,    39,    40,    50,
      56,    50,   107,   108,    99,   143,   136,    73,     5,     6,
       7,    39,    40,   117,   101,   142,    50,   154,    14,    15,
      16,    76,    29,    11,   159,    93,   122,   153,    95,   135,
      35,    36,    37,    38,   158,    91,    50,    87,    88,    89,
      98,   129,    25,    26,   132,    69,    71,   100,   120,    39,
      40,   137,   138,   121,   123,   126,   131,    61,    63,    64,
      65,    66,    67,   139,   130,   149,   150,   133,   141,   -69,
      50,   144,   145,    50,   146,    10,   151,   157,    50,    50,
     152,   140,    77,    78,   156,    70,     0,   147,   148,     0,
      50,    50,    85,    86,    87,    88,    89,   155,    50,   103,
     104,   105,   106,   160,   161,   109,   110,   111,   112,   113,
     114,   115,   116,   118,    27,    28,    29,    11,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,     0,   124,
     125,    29,    11,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,     0,    41,     0,     0,
     134,    85,    86,    87,    88,    89,     0,     0,    39,    40,
       0,     0,    41,    68,    29,    11,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,    41,    77,    78,    79,    80,
       0,    81,    82,     0,    83,    84,    85,    86,    87,    88,
      89,     0,     0,    97,    77,    78,    79,    80,     0,    81,
      82,     0,    83,    84,    85,    86,    87,    88,    89,    77,
      78,    79,    80,     0,    81,     0,     0,    83,    84,    85,
      86,    87,    88,    89,    77,    78,    79,    80,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       9,    25,    34,    32,    33,    35,    15,    16,    58,    39,
      34,     0,    31,     7,    23,    38,    25,    26,    27,    28,
       6,     7,    31,    35,    34,    75,    34,    39,    14,    15,
      16,    17,    41,    42,     6,     7,    55,    36,    36,    37,
      39,    60,    14,    15,    16,    17,    55,    33,    34,    58,
      36,    60,    81,    82,    36,   138,   129,    39,     3,     4,
       5,    33,    34,    35,    73,   138,    75,   150,     3,     4,
       5,    36,     6,     7,   157,    36,    95,   150,    34,   129,
      14,    15,    16,    17,   157,    34,    95,    30,    31,    32,
      38,   120,     4,     5,   123,    41,    42,    38,    35,    33,
      34,   130,   131,    12,    36,    36,    35,    35,    36,    37,
      38,    39,    40,   132,    34,   144,   145,    36,   137,     9,
     129,    36,     9,   132,    35,     3,    36,   156,   137,   138,
     149,   136,    18,    19,    35,    42,    -1,   142,   143,    -1,
     149,   150,    28,    29,    30,    31,    32,   152,   157,    77,
      78,    79,    80,   158,   159,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,   107,
     108,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    33,    34,    -1,    -1,    37,    -1,    -1,
     128,    28,    29,    30,    31,    32,    -1,    -1,    33,    34,
      -1,    -1,    37,    38,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    37,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    18,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    32,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,    58,     0,     3,     4,     5,    43,    48,
      43,     7,    56,    34,     3,     4,     5,    47,    56,    56,
      35,    39,    36,    37,    44,     4,     5,     4,     5,     6,
       8,    10,    11,    12,    13,    14,    15,    16,    17,    33,
      34,    37,    45,    46,    49,    50,    51,    52,    53,    54,
      56,    56,    56,    56,    56,    34,    36,    53,    57,    57,
      34,    54,    56,    54,    54,    54,    54,    54,    38,    49,
      46,    49,    36,    39,    38,    57,    36,    18,    19,    20,
      21,    23,    24,    26,    27,    28,    29,    30,    31,    32,
      25,    34,    53,    36,    50,    34,    53,    35,    38,    36,
      38,    56,    50,    54,    54,    54,    54,    57,    57,    54,
      54,    54,    54,    54,    54,    54,    54,    35,    54,    55,
      35,    12,    53,    36,    54,    54,    36,    35,    39,    57,
      34,    35,    57,    36,    54,    50,    51,    57,    57,    53,
      58,    53,    51,    52,    36,     9,    35,    58,    58,    57,
      57,    36,    53,    51,    52,    58,    35,    57,    51,    52,
      58,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    57,    58
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     6,     6,     3,     4,     2,
       3,     2,     2,     3,     2,     2,     4,     4,     1,     0,
       1,     1,     1,     1,     3,     1,     1,    10,     2,     2,
       3,     8,     9,    14,     3,     2,     6,     8,    14,    10,
       1,     3,     2,     2,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       1,     3,     5,     4,     1,     1,     3,     1,     0,     0
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
  case 2: /* program_head: program  */
#line 72 "syntaxChecker.y"
        {
	    tokenList * mainFunc = getSymbol("main");
	    if(mainFunc == NULL){
		printf("ERROR: Main function not found!\n");
		yyerror();
	    }
	    backpatch((yyvsp[0].stmt).nextList,mainFunc->line+1);
	}
#line 1379 "y.tab.c"
    break;

  case 3: /* program: jump_marker function  */
#line 84 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[-1].mark).nextList;
            backpatch((yyvsp[0].stmt).nextList, nextquad());

        }
#line 1390 "y.tab.c"
    break;

  case 4: /* program: program function  */
#line 91 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
            backpatch((yyvsp[0].stmt).nextList, nextquad());

        }
#line 1401 "y.tab.c"
    break;

  case 5: /* function: var_type id '(' parameter_list ')' ';'  */
#line 103 "syntaxChecker.y"
        {

            addFunctionPrototype((yyvsp[-4].str), paramCount, (yyvsp[-5].type));
            paramCount = 0;
            (yyval.stmt).nextList = NULL;
        }
#line 1412 "y.tab.c"
    break;

  case 6: /* function: var_type id '(' parameter_list ')' function_body  */
#line 110 "syntaxChecker.y"
        {

            addFunction((yyvsp[-4].str), paramCount, (yyvsp[-5].type), funcLineNumber);
            paramCount = 0;
	    funcLineNumber = nextquad();
            (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
        }
#line 1424 "y.tab.c"
    break;

  case 7: /* function_body: '{' statement_list '}'  */
#line 121 "syntaxChecker.y"
        {

            (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
        }
#line 1433 "y.tab.c"
    break;

  case 8: /* function_body: '{' declaration_list statement_list '}'  */
#line 126 "syntaxChecker.y"
        {

            (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
        }
#line 1442 "y.tab.c"
    break;

  case 9: /* declaration_list: declaration ';'  */
#line 134 "syntaxChecker.y"
        {

        }
#line 1450 "y.tab.c"
    break;

  case 10: /* declaration_list: declaration_list declaration ';'  */
#line 138 "syntaxChecker.y"
        {

        }
#line 1458 "y.tab.c"
    break;

  case 11: /* declaration: INT id  */
#line 145 "syntaxChecker.y"
        {
            (yyval.type) = INT_type;
            addSymbolToQueue((yyvsp[0].str), INT_type, 0);

        }
#line 1468 "y.tab.c"
    break;

  case 12: /* declaration: FLOAT id  */
#line 151 "syntaxChecker.y"
        {
            (yyval.type) = FLOAT_type;
            addSymbolToQueue((yyvsp[0].str), FLOAT_type, 0);

        }
#line 1478 "y.tab.c"
    break;

  case 13: /* declaration: declaration ',' id  */
#line 157 "syntaxChecker.y"
        {
            if(INT_type == (yyvsp[-2].type)) {
                addSymbolToQueue((yyvsp[0].str), INT_type, 0);
            } else if(FLOAT_type == (yyvsp[-2].type)) {
                addSymbolToQueue((yyvsp[0].str), FLOAT_type, 0);
            }

        }
#line 1491 "y.tab.c"
    break;

  case 14: /* parameter_list: INT id  */
#line 169 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), INT_type, paramCount);

        }
#line 1501 "y.tab.c"
    break;

  case 15: /* parameter_list: FLOAT id  */
#line 175 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), FLOAT_type, paramCount);

        }
#line 1511 "y.tab.c"
    break;

  case 16: /* parameter_list: parameter_list ',' INT id  */
#line 181 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), INT_type, paramCount);

        }
#line 1521 "y.tab.c"
    break;

  case 17: /* parameter_list: parameter_list ',' FLOAT id  */
#line 187 "syntaxChecker.y"
        {
            paramCount++;
            addSymbolToQueue((yyvsp[0].str), FLOAT_type, paramCount);

        }
#line 1531 "y.tab.c"
    break;

  case 18: /* parameter_list: VOID  */
#line 193 "syntaxChecker.y"
        {

        }
#line 1539 "y.tab.c"
    break;

  case 19: /* parameter_list: %empty  */
#line 197 "syntaxChecker.y"
        {

        }
#line 1547 "y.tab.c"
    break;

  case 20: /* var_type: VOID  */
#line 204 "syntaxChecker.y"
        {
            (yyval.type) = Return_VOID;

        }
#line 1556 "y.tab.c"
    break;

  case 21: /* var_type: INT  */
#line 209 "syntaxChecker.y"
        {
            (yyval.type) = Return_INT;

        }
#line 1565 "y.tab.c"
    break;

  case 22: /* var_type: FLOAT  */
#line 215 "syntaxChecker.y"
        {
            (yyval.type) = Return_FLOAT;

        }
#line 1574 "y.tab.c"
    break;

  case 23: /* statement_list: statement  */
#line 223 "syntaxChecker.y"
        {

            (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1584 "y.tab.c"
    break;

  case 24: /* statement_list: statement_list marker statement  */
#line 229 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-2].stmt).nextList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1595 "y.tab.c"
    break;

  case 25: /* statement: matched_statement  */
#line 239 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1605 "y.tab.c"
    break;

  case 26: /* statement: unmatched_statement  */
#line 245 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;

        }
#line 1615 "y.tab.c"
    break;

  case 27: /* matched_statement: IF '(' assignment ')' marker matched_statement jump_marker ELSE marker matched_statement  */
#line 254 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-7].expr).trueList,(yyvsp[-5].mark).quad);
	    backpatch((yyvsp[-7].expr).falseList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].mark).nextList,(yyvsp[0].stmt).nextList);
	    (yyval.stmt).nextList = mergelists((yyval.stmt).nextList,(yyvsp[-4].stmt).nextList);

        }
#line 1628 "y.tab.c"
    break;

  case 28: /* matched_statement: assignment ';'  */
#line 263 "syntaxChecker.y"
        {

       
	    (yyval.stmt).nextList = NULL;

	}
#line 1639 "y.tab.c"
    break;

  case 29: /* matched_statement: RETURN ';'  */
#line 270 "syntaxChecker.y"
        {


	    (yyval.stmt).nextList = NULL;
	    sprintf(icgQuad,"RETURN");
	    appendCode(icgQuad);

        }
#line 1652 "y.tab.c"
    break;

  case 30: /* matched_statement: RETURN assignment ';'  */
#line 279 "syntaxChecker.y"
        {


	    (yyval.stmt).nextList = NULL;
            sprintf(icgQuad,"RETURN %s",(yyvsp[-1].expr).value);
	    appendCode(icgQuad);

        }
#line 1665 "y.tab.c"
    break;

  case 31: /* matched_statement: WHILE marker '(' assignment ')' marker matched_statement jump_marker  */
#line 288 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-4].expr).trueList,(yyvsp[-2].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-4].expr).falseList;
	    backpatch((yyvsp[-1].stmt).nextList,(yyvsp[-6].mark).quad);
	    backpatch((yyvsp[0].mark).nextList,(yyvsp[-6].mark).quad);

        }
#line 1678 "y.tab.c"
    break;

  case 32: /* matched_statement: DO marker statement WHILE '(' marker assignment ')' ';'  */
#line 297 "syntaxChecker.y"
        {
	    backpatch((yyvsp[-6].stmt).nextList,(yyvsp[-3].mark).quad);
	    backpatch((yyvsp[-2].expr).trueList,(yyvsp[-7].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-2].expr).falseList;
        }
#line 1688 "y.tab.c"
    break;

  case 33: /* matched_statement: FOR '(' assignment ';' marker assignment ';' marker assignment jump_marker ')' marker matched_statement jump_marker  */
#line 303 "syntaxChecker.y"
        {

            if(BOOL_type == (yyvsp[-11].expr).type || BOOL_type == (yyvsp[-5].expr).type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(BOOL_type != (yyvsp[-8].expr).type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch((yyvsp[-11].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-1].stmt).nextList, (yyvsp[-6].mark).quad);
            backpatch((yyvsp[0].mark).nextList, (yyvsp[-6].mark).quad);
            (yyval.stmt).nextList = (yyvsp[-8].expr).falseList;
            backpatch((yyvsp[-8].expr).trueList, (yyvsp[-2].mark).quad);
            backpatch((yyvsp[-5].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-4].mark).nextList, (yyvsp[-9].mark).quad);

        }
#line 1712 "y.tab.c"
    break;

  case 34: /* matched_statement: '{' statement_list '}'  */
#line 323 "syntaxChecker.y"
        {

	    (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;

        }
#line 1722 "y.tab.c"
    break;

  case 35: /* matched_statement: '{' '}'  */
#line 329 "syntaxChecker.y"
        {	    

	    (yyval.stmt).nextList = NULL;

        }
#line 1732 "y.tab.c"
    break;

  case 36: /* unmatched_statement: IF '(' assignment ')' marker statement  */
#line 338 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-3].expr).trueList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].expr).falseList,(yyvsp[0].stmt).nextList);

        }
#line 1743 "y.tab.c"
    break;

  case 37: /* unmatched_statement: WHILE marker '(' assignment ')' marker unmatched_statement jump_marker  */
#line 345 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-4].expr).trueList,(yyvsp[-2].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-4].expr).falseList;
	    backpatch((yyvsp[-1].stmt).nextList,(yyvsp[-6].mark).quad);
	    backpatch((yyvsp[0].mark).nextList,(yyvsp[-6].mark).quad);

        }
#line 1756 "y.tab.c"
    break;

  case 38: /* unmatched_statement: FOR '(' assignment ';' marker assignment ';' marker assignment jump_marker ')' marker unmatched_statement jump_marker  */
#line 354 "syntaxChecker.y"
        {

            if(BOOL_type == (yyvsp[-11].expr).type || BOOL_type == (yyvsp[-5].expr).type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(BOOL_type != (yyvsp[-8].expr).type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch((yyvsp[-11].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-1].stmt).nextList, (yyvsp[-6].mark).quad);
            backpatch((yyvsp[0].mark).nextList, (yyvsp[-6].mark).quad);
            (yyval.stmt).nextList = (yyvsp[-8].expr).falseList;
            backpatch((yyvsp[-8].expr).trueList, (yyvsp[-2].mark).quad);
            backpatch((yyvsp[-5].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-4].mark).nextList, (yyvsp[-9].mark).quad);

        }
#line 1780 "y.tab.c"
    break;

  case 39: /* unmatched_statement: IF '(' assignment ')' marker matched_statement jump_marker ELSE marker unmatched_statement  */
#line 375 "syntaxChecker.y"
        {

	    backpatch((yyvsp[-7].expr).trueList,(yyvsp[-5].mark).quad);
	    backpatch((yyvsp[-7].expr).falseList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].mark).nextList,(yyvsp[0].stmt).nextList);
	    (yyval.stmt).nextList = mergelists((yyval.stmt).nextList,(yyvsp[-4].stmt).nextList);

        }
#line 1793 "y.tab.c"
    break;

  case 40: /* assignment: expression  */
#line 387 "syntaxChecker.y"
        {

            (yyval.expr)=(yyvsp[0].expr);
        }
#line 1802 "y.tab.c"
    break;

  case 41: /* assignment: id '=' expression  */
#line 392 "syntaxChecker.y"
        {
            int destType = getSymbolType((yyvsp[-2].str));
        	if(destType == 0){
        		printf("ERROR: Not in scope");
        	}
            if(destType != (yyvsp[0].expr).type) {
                printf("Type error on line: %d\n", yylineno);
                yyerror();
            }

            sprintf(icgQuad,"%s := %s",(yyvsp[-2].str),(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).type = destType;
            (yyval.expr).trueList = (yyvsp[0].expr).trueList;
            (yyval.expr).cType = VAR_type;
            (yyval.expr).value = (yyvsp[-2].str);
        }
#line 1824 "y.tab.c"
    break;

  case 42: /* expression: INC_OP expression  */
#line 413 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != INT_type){
		    printf("ERROR: Increment not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    //Create a variable if needed
	    if((yyvsp[0].expr).cType != VAR_type){
		    char *var = nextIntVar();
		    sprintf(icgQuad,"%s := %s",var,(yyvsp[0].expr).value);
		    appendCode(icgQuad);
		    free((yyvsp[0].expr).value);
		    (yyvsp[0].expr).value = var;
		    (yyvsp[0].expr).type = INT_type;
		    (yyvsp[0].expr).cType = VAR_type;
	    }
            sprintf(icgQuad,"%s := %s + 1",(yyvsp[0].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            //Set the attributes
            (yyval.expr) = (yyvsp[0].expr);
            (yyval.expr).trueList = NULL;
            (yyval.expr).falseList = NULL;

        }
#line 1853 "y.tab.c"
    break;

  case 43: /* expression: DEC_OP expression  */
#line 438 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != INT_type){
		    printf("ERROR: Decrement not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    //Create a variable if needed
	    if((yyvsp[0].expr).cType != VAR_type){
		    char *var = nextIntVar();
		    sprintf(icgQuad,"%s := %s",var,(yyvsp[0].expr).value);
		appendCode(icgQuad);
		    free((yyvsp[0].expr).value);
		    (yyvsp[0].expr).value = var;
		    (yyvsp[0].expr).type = INT_type;
		    (yyvsp[0].expr).cType = VAR_type;
	    }
            sprintf(icgQuad,"%s := %s - 1",(yyvsp[0].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            //Set the attributes
            (yyval.expr) = (yyvsp[0].expr);
            (yyval.expr).trueList = NULL;
            (yyval.expr).falseList = NULL;

        }
#line 1882 "y.tab.c"
    break;

  case 44: /* expression: expression LOG_OR marker expression  */
#line 463 "syntaxChecker.y"
        {
            if(BOOL_type != (yyvsp[-3].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[-3].expr).value);
                (yyvsp[-3].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[-3].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            if(BOOL_type != (yyvsp[0].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[0].expr).value);
                (yyvsp[0].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[0].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            (yyval.expr).trueList = mergelists((yyvsp[-3].expr).trueList, (yyvsp[0].expr).trueList);
            backpatch((yyvsp[-3].expr).falseList, (yyvsp[-1].mark).quad);
            (yyval.expr).falseList = (yyvsp[0].expr).falseList;
            (yyval.expr).type = BOOL_type;
	}
#line 1905 "y.tab.c"
    break;

  case 45: /* expression: expression LOG_AND marker expression  */
#line 482 "syntaxChecker.y"
        {
            if(BOOL_type != (yyvsp[-3].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[-3].expr).value);
                (yyvsp[-3].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[-3].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            if(BOOL_type != (yyvsp[0].expr).type) {
                sprintf(icgQuad, "IF (%s <> 0) GOTO", (yyvsp[0].expr).value);
                (yyvsp[0].expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
                sprintf(icgQuad, "GOTO");
                (yyvsp[0].expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
            }
            (yyval.expr).falseList = mergelists((yyvsp[-3].expr).falseList, (yyvsp[0].expr).falseList);
            backpatch((yyvsp[-3].expr).trueList, (yyvsp[-1].mark).quad);
            (yyval.expr).trueList = (yyvsp[0].expr).trueList;
            (yyval.expr).type = BOOL_type;
	 }
#line 1928 "y.tab.c"
    break;

  case 46: /* expression: expression NOT_EQUAL expression  */
#line 501 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(icgQuad,"IF (%s <> %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
            sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 1948 "y.tab.c"
    break;

  case 47: /* expression: expression EQUAL expression  */
#line 517 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(icgQuad,"IF (%s = %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
            sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
        if(BOOL_type == (yyvsp[-2].expr).type) {
            (yyval.expr).trueList = mergelists((yyval.expr).trueList, (yyvsp[-2].expr).trueList);
            (yyval.expr).falseList = mergelists((yyval.expr).falseList, (yyvsp[-2].expr).falseList);
        }
        if(BOOL_type == (yyvsp[0].expr).type) {
            (yyval.expr).trueList = mergelists((yyval.expr).trueList, (yyvsp[0].expr).trueList);
            (yyval.expr).falseList = mergelists((yyval.expr).falseList, (yyvsp[0].expr).falseList);
        }
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 1976 "y.tab.c"
    break;

  case 48: /* expression: expression GREATER_OR_EQUAL expression  */
#line 541 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(icgQuad,"IF (%s >= %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
            sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 1996 "y.tab.c"
    break;

  case 49: /* expression: expression LESS_OR_EQUAL expression  */
#line 557 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(icgQuad,"IF (%s <= %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
	    sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2016 "y.tab.c"
    break;

  case 50: /* expression: expression '>' expression  */
#line 573 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(icgQuad,"IF (%s > %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
	    sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2036 "y.tab.c"
    break;

  case 51: /* expression: expression '<' expression  */
#line 589 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type != FLOAT_type){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(icgQuad,"IF (%s < %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = appendToBackPatch(NULL, appendCode(icgQuad));
	    sprintf(icgQuad,"GOTO");
	    (yyval.expr).falseList = appendToBackPatch(NULL, appendCode(icgQuad));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = BOOL_type;
	    (yyval.expr).cType = NONE_type;

        }
#line 2056 "y.tab.c"
    break;

  case 52: /* expression: expression '+' expression  */
#line 606 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when adding numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s + %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2090 "y.tab.c"
    break;

  case 53: /* expression: expression '-' expression  */
#line 636 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when substracting numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s - %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2124 "y.tab.c"
    break;

  case 54: /* expression: expression '*' expression  */
#line 666 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when multiplicating numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s * %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2158 "y.tab.c"
    break;

  case 55: /* expression: expression '/' expression  */
#line 696 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when dividing numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s / %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2192 "y.tab.c"
    break;

  case 56: /* expression: expression '%' expression  */
#line 726 "syntaxChecker.y"
        {

	    if((yyvsp[-2].expr).type != INT_type && (yyvsp[-2].expr).type!= FLOAT_type &&  (yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only integer and float values allowed when caluclating mod.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = FLOAT_type;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case INT_type: var = nextIntVar();break;
            	case FLOAT_type:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(icgQuad,"%s := %s \% %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            appendCode(icgQuad);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = VAR_type;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

        }
#line 2226 "y.tab.c"
    break;

  case 57: /* expression: '!' expression  */
#line 756 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != BOOL_type){
		if((yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		sprintf(icgQuad,"IF (%s <> 0) GOTO",(yyvsp[0].expr).value);
		(yyval.expr).falseList = appendToBackPatch(NULL,appendCode(icgQuad));
		sprintf(icgQuad,"GOTO",(yyvsp[0].expr).value);
		(yyval.expr).trueList = appendToBackPatch(NULL,appendCode (icgQuad));
	    }
	    else{
	      (yyval.expr) = (yyvsp[0].expr);
	      (yyval.expr).trueList = (yyvsp[0].expr).falseList;
	      (yyval.expr).falseList = (yyvsp[0].expr).trueList;
	    }

	}
#line 2250 "y.tab.c"
    break;

  case 58: /* expression: U_PLUS expression  */
#line 776 "syntaxChecker.y"
        {
            if(INT_type != (yyvsp[0].expr).type && FLOAT_type != (yyvsp[0].expr).type) {
                yyerror();
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2261 "y.tab.c"
    break;

  case 59: /* expression: U_MINUS expression  */
#line 783 "syntaxChecker.y"
        {
            (yyval.expr) = (yyvsp[0].expr);
            if(INT_type == (yyvsp[0].expr).type) {
                (yyval.expr).value = nextIntVar();
            } else if (FLOAT_type == (yyvsp[0].expr).type) {
                (yyval.expr).value = nextFloatVar();
            } else {
                yyerror();
            }
            sprintf(icgQuad, "%s := -%s", (yyval.expr).value, (yyvsp[0].expr).value);
            appendCode (icgQuad);
       }
#line 2278 "y.tab.c"
    break;

  case 60: /* expression: CONSTANT  */
#line 796 "syntaxChecker.y"
        {

            (yyval.expr).value = strdup(yytext);
            (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;

            
        }
#line 2291 "y.tab.c"
    break;

  case 61: /* expression: '(' expression ')'  */
#line 805 "syntaxChecker.y"
        {

	    (yyval.expr) = (yyvsp[-1].expr);

        }
#line 2301 "y.tab.c"
    break;

  case 62: /* expression: id '(' exp_list ')' ';'  */
#line 811 "syntaxChecker.y"
        {

            int varType = getFunctionType((yyvsp[-4].str));
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",(yyvsp[-4].str));
		yyerror();
            }
            char* var = NULL;
            switch(varType){
            case Return_INT:
                var = nextIntVar();
                (yyval.expr).type = INT_type;
                break;
            case Return_FLOAT:
                var = nextFloatVar();
                (yyval.expr).type = FLOAT_type;
                break;
            }
	    (yyval.expr).value = var;
	    (yyval.expr).cType = VAR_type;
	    checkAndGenerateParams((yyvsp[-2].exp_list).queue,(yyvsp[-4].str),(yyvsp[-2].exp_list).count);
            sprintf(icgQuad,"%s := CALL %s, %d",var,(yyvsp[-4].str),(yyvsp[-2].exp_list).count);
            appendCode (icgQuad);

        }
#line 2331 "y.tab.c"
    break;

  case 63: /* expression: id '(' ')' ';'  */
#line 837 "syntaxChecker.y"
        {

            int varType = getFunctionType((yyvsp[-3].str));
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",(yyvsp[-3].str));
		yyerror();
            }
            char* var = NULL;
            switch(varType){
             case Return_INT:
                var = nextIntVar;
                (yyval.expr).type = INT_type;
                break;
            case Return_FLOAT:
                var = nextFloatVar;
                (yyval.expr).type = FLOAT_type;
                break;
           
            }
	    (yyval.expr).value = var;
	    (yyval.expr).cType = VAR_type;
	    checkAndGenerateParams(NULL,(yyvsp[-3].str),0);
            sprintf(icgQuad,"%s := CALL %s, %d",var,(yyvsp[-3].str),0);
            appendCode (icgQuad);

        }
#line 2362 "y.tab.c"
    break;

  case 64: /* expression: id  */
#line 864 "syntaxChecker.y"
        {

	    int varType = getSymbolType((yyvsp[0].str));
            if(varType == 0){
            	printf("ERROR: Variable %s not in scope!\n",(yyvsp[0].str));
		yyerror();
            }
	    (yyval.expr).value = (yyvsp[0].str);
	    (yyval.expr).type = varType;
	    (yyval.expr).cType = VAR_type;

        }
#line 2379 "y.tab.c"
    break;

  case 65: /* exp_list: expression  */
#line 880 "syntaxChecker.y"
        {

	    if((yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		yyerror();
	    }
	    (yyval.exp_list).queue = addSymbolToParameterQueue(NULL,(yyvsp[0].expr).value,(yyvsp[0].expr).type);
	    (yyval.exp_list).count = 1;

        }
#line 2394 "y.tab.c"
    break;

  case 66: /* exp_list: exp_list ',' expression  */
#line 891 "syntaxChecker.y"
        {

	      if((yyvsp[0].expr).type != INT_type && (yyvsp[0].expr).type != FLOAT_type){
		  printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		  yyerror();
	      }
	      (yyval.exp_list).queue = addSymbolToParameterQueue((yyvsp[-2].exp_list).queue,(yyvsp[0].expr).value,(yyvsp[0].expr).type);
	      (yyval.exp_list).count = (yyvsp[-2].exp_list).count + 1;

        }
#line 2409 "y.tab.c"
    break;

  case 67: /* id: IDENTIFIER  */
#line 905 "syntaxChecker.y"
        {

            (yyval.str) = strdup(yytext);
        }
#line 2418 "y.tab.c"
    break;

  case 68: /* marker: %empty  */
#line 911 "syntaxChecker.y"
          {	

	      (yyval.mark).quad = nextquad();

	}
#line 2428 "y.tab.c"
    break;

  case 69: /* jump_marker: %empty  */
#line 917 "syntaxChecker.y"
          {

	      (yyval.mark).quad = nextquad();
	      sprintf(icgQuad,"GOTO");
	      (yyval.mark).nextList = appendToBackPatch(NULL, appendCode (icgQuad));

   }
#line 2440 "y.tab.c"
    break;


#line 2444 "y.tab.c"

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

#line 924 "syntaxChecker.y"

