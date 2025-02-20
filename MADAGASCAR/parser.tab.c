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
#line 4 "parser.y"


#include "stdio.h"
#include "main.h"
#include "asyntax.h"

#define YYERROR_VERBOSE

void rparen(char *);

int COST;


#line 85 "parser.tab.c"

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
  YYSYMBOL_rwTYPING = 3,                   /* rwTYPING  */
  YYSYMBOL_rwEITHER = 4,                   /* rwEITHER  */
  YYSYMBOL_rwINCREASE = 5,                 /* rwINCREASE  */
  YYSYMBOL_rwMETRIC = 6,                   /* rwMETRIC  */
  YYSYMBOL_rwMINIMIZE = 7,                 /* rwMINIMIZE  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_VAR = 9,                        /* VAR  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_LPAREN = 11,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 12,                    /* RPAREN  */
  YYSYMBOL_DASH = 13,                      /* DASH  */
  YYSYMBOL_EQUA = 14,                      /* EQUA  */
  YYSYMBOL_rwAND = 15,                     /* rwAND  */
  YYSYMBOL_rwOR = 16,                      /* rwOR  */
  YYSYMBOL_rwNOT = 17,                     /* rwNOT  */
  YYSYMBOL_rwIMPLY = 18,                   /* rwIMPLY  */
  YYSYMBOL_rwPRECOND = 19,                 /* rwPRECOND  */
  YYSYMBOL_rwDEFINE = 20,                  /* rwDEFINE  */
  YYSYMBOL_rwDOMAIN = 21,                  /* rwDOMAIN  */
  YYSYMBOL_rwPROBLEM = 22,                 /* rwPROBLEM  */
  YYSYMBOL_rwPREDICATES = 23,              /* rwPREDICATES  */
  YYSYMBOL_rwFUNCTIONS = 24,               /* rwFUNCTIONS  */
  YYSYMBOL_rwREQUIREMENTS = 25,            /* rwREQUIREMENTS  */
  YYSYMBOL_rwACTION = 26,                  /* rwACTION  */
  YYSYMBOL_rwPARAMS = 27,                  /* rwPARAMS  */
  YYSYMBOL_rwEFFECT = 28,                  /* rwEFFECT  */
  YYSYMBOL_rwOBJECTS = 29,                 /* rwOBJECTS  */
  YYSYMBOL_rwTYPES = 30,                   /* rwTYPES  */
  YYSYMBOL_rwWHEN = 31,                    /* rwWHEN  */
  YYSYMBOL_rwFORALL = 32,                  /* rwFORALL  */
  YYSYMBOL_rwEXISTS = 33,                  /* rwEXISTS  */
  YYSYMBOL_rwLENGTH = 34,                  /* rwLENGTH  */
  YYSYMBOL_rwGOAL = 35,                    /* rwGOAL  */
  YYSYMBOL_rwINIT = 36,                    /* rwINIT  */
  YYSYMBOL_rwCONSTANTS = 37,               /* rwCONSTANTS  */
  YYSYMBOL_rwONEOF = 38,                   /* rwONEOF  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_begin = 40,                     /* begin  */
  YYSYMBOL_idlist = 41,                    /* idlist  */
  YYSYMBOL_costexpr = 42,                  /* costexpr  */
  YYSYMBOL_atom = 43,                      /* atom  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_atomlist = 45,                  /* atomlist  */
  YYSYMBOL_varid = 46,                     /* varid  */
  YYSYMBOL_varidlist = 47,                 /* varidlist  */
  YYSYMBOL_domain = 48,                    /* domain  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_50_3 = 50,                      /* $@3  */
  YYSYMBOL_domaindefs = 51,                /* domaindefs  */
  YYSYMBOL_domaindef = 52,                 /* domaindef  */
  YYSYMBOL_53_4 = 53,                      /* $@4  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_56_7 = 56,                      /* $@7  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_58_9 = 58,                      /* $@9  */
  YYSYMBOL_59_10 = 59,                     /* $@10  */
  YYSYMBOL_actdefs = 60,                   /* actdefs  */
  YYSYMBOL_actdef = 61,                    /* actdef  */
  YYSYMBOL_62_11 = 62,                     /* $@11  */
  YYSYMBOL_opvars = 63,                    /* opvars  */
  YYSYMBOL_varlist = 64,                   /* varlist  */
  YYSYMBOL_opvarlist = 65,                 /* opvarlist  */
  YYSYMBOL_opvar = 66,                     /* opvar  */
  YYSYMBOL_problem = 67,                   /* problem  */
  YYSYMBOL_68_12 = 68,                     /* $@12  */
  YYSYMBOL_69_13 = 69,                     /* $@13  */
  YYSYMBOL_defs = 70,                      /* defs  */
  YYSYMBOL_71_14 = 71,                     /* $@14  */
  YYSYMBOL_72_15 = 72,                     /* $@15  */
  YYSYMBOL_def = 73,                       /* def  */
  YYSYMBOL_objectlist = 74,                /* objectlist  */
  YYSYMBOL_typedvarlist = 75,              /* typedvarlist  */
  YYSYMBOL_76_16 = 76,                     /* $@16  */
  YYSYMBOL_typedatoms = 77,                /* typedatoms  */
  YYSYMBOL_78_17 = 78,                     /* $@17  */
  YYSYMBOL_functiondecls = 79,             /* functiondecls  */
  YYSYMBOL_functiondecl = 80,              /* functiondecl  */
  YYSYMBOL_tdecl = 81,                     /* tdecl  */
  YYSYMBOL_82_18 = 82,                     /* $@18  */
  YYSYMBOL_fma = 83,                       /* fma  */
  YYSYMBOL_84_19 = 84,                     /* $@19  */
  YYSYMBOL_85_20 = 85,                     /* $@20  */
  YYSYMBOL_86_21 = 86,                     /* $@21  */
  YYSYMBOL_87_22 = 87,                     /* $@22  */
  YYSYMBOL_88_23 = 88,                     /* $@23  */
  YYSYMBOL_89_24 = 89,                     /* $@24  */
  YYSYMBOL_90_25 = 90,                     /* $@25  */
  YYSYMBOL_91_26 = 91,                     /* $@26  */
  YYSYMBOL_92_27 = 92,                     /* $@27  */
  YYSYMBOL_fmas = 93,                      /* fmas  */
  YYSYMBOL_effects = 94,                   /* effects  */
  YYSYMBOL_numexpr = 95,                   /* numexpr  */
  YYSYMBOL_effect = 96,                    /* effect  */
  YYSYMBOL_97_28 = 97,                     /* $@28  */
  YYSYMBOL_98_29 = 98,                     /* $@29  */
  YYSYMBOL_99_30 = 99,                     /* $@30  */
  YYSYMBOL_100_31 = 100,                   /* $@31  */
  YYSYMBOL_101_32 = 101,                   /* $@32  */
  YYSYMBOL_102_33 = 102,                   /* $@33  */
  YYSYMBOL_103_34 = 103                    /* $@34  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    59,    59,    62,    63,    66,    69,    69,    72,    73,
      74,    77,    78,    81,    82,    87,    87,    87,    90,    91,
      94,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,    99,   102,   103,   106,   106,   107,   108,   111,
     112,   113,   116,   117,   120,   121,   124,   128,   128,   128,
     131,   131,   132,   132,   135,   136,   137,   138,   139,   143,
     144,   147,   148,   148,   149,   150,   153,   153,   154,   157,
     158,   161,   162,   165,   165,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   177,   177,
     178,   178,   179,   179,   182,   183,   186,   187,   190,   191,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   199,
     199,   200,   200,   201,   201
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "rwTYPING", "rwEITHER",
  "rwINCREASE", "rwMETRIC", "rwMINIMIZE", "ID", "VAR", "INT", "LPAREN",
  "RPAREN", "DASH", "EQUA", "rwAND", "rwOR", "rwNOT", "rwIMPLY",
  "rwPRECOND", "rwDEFINE", "rwDOMAIN", "rwPROBLEM", "rwPREDICATES",
  "rwFUNCTIONS", "rwREQUIREMENTS", "rwACTION", "rwPARAMS", "rwEFFECT",
  "rwOBJECTS", "rwTYPES", "rwWHEN", "rwFORALL", "rwEXISTS", "rwLENGTH",
  "rwGOAL", "rwINIT", "rwCONSTANTS", "rwONEOF", "$accept", "begin",
  "idlist", "costexpr", "atom", "$@1", "atomlist", "varid", "varidlist",
  "domain", "$@2", "$@3", "domaindefs", "domaindef", "$@4", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "actdefs", "actdef", "$@11", "opvars",
  "varlist", "opvarlist", "opvar", "problem", "$@12", "$@13", "defs",
  "$@14", "$@15", "def", "objectlist", "typedvarlist", "$@16",
  "typedatoms", "$@17", "functiondecls", "functiondecl", "tdecl", "$@18",
  "fma", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26",
  "$@27", "fmas", "effects", "numexpr", "effect", "$@28", "$@29", "$@30",
  "$@31", "$@32", "$@33", "$@34", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-137)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    -5,    32,    11,    23,  -137,    34,  -137,    43,    44,
      52,    45,  -137,    57,    61,  -137,  -137,    62,    64,    69,
       0,    71,  -137,    22,    73,  -137,    77,    81,  -137,    81,
      81,  -137,    83,    84,    81,    82,  -137,  -137,    22,    86,
      85,    91,  -137,    77,    90,    81,  -137,    96,    93,  -137,
    -137,  -137,  -137,  -137,    54,  -137,  -137,    97,    95,  -137,
    -137,   101,    98,   102,   100,  -137,   105,  -137,   103,    25,
     106,   104,   107,    97,    30,    30,    82,    82,    82,    82,
      82,   109,   110,     2,  -137,  -137,  -137,   111,   102,  -137,
      18,  -137,  -137,  -137,  -137,    82,   113,   117,  -137,    25,
      81,  -137,  -137,  -137,  -137,    30,  -137,    30,  -137,   119,
      82,    82,  -137,    82,    82,   108,   108,    39,  -137,  -137,
      48,  -137,   121,  -137,   108,     4,  -137,  -137,   122,  -137,
    -137,  -137,   124,  -137,  -137,  -137,   125,   126,   128,  -137,
    -137,   108,   129,   116,  -137,   108,   130,  -137,   136,  -137,
      39,   133,   102,   114,  -137,  -137,   135,   117,   135,    82,
     137,   117,  -137,  -137,   138,  -137,  -137,  -137,   139,   140,
    -137,    82,   141,   116,  -137,    82,   142,  -137,  -137,   145,
     143,    39,   117,  -137,   144,  -137,   117,   108,   117,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,    81,  -137,  -137,  -137,
     146,  -137,   147,  -137,   148,   149,   150,   151,  -137,   152,
    -137,  -137,   153,   117,  -137,  -137,  -137,   154,  -137,  -137,
    -137,   102,   155,  -137,  -137
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     2,     0,     0,
       0,     0,    15,     0,     0,    47,    19,     0,    16,     0,
       0,     0,    18,     0,    48,    68,    70,     4,    30,     4,
       4,    17,     0,     0,     4,     0,    10,    52,     0,     0,
      20,     0,    26,    70,    72,     4,    22,     0,    60,    28,
      24,    10,    54,    55,     0,    87,    57,    56,     0,    50,
      49,     0,     0,    65,     0,    69,     0,     3,     0,     0,
       0,     0,     0,    58,    14,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     9,     8,    53,     0,    65,    21,
      65,    73,    27,    71,    23,     0,     0,     0,    31,    34,
       4,    29,    25,    12,    11,    14,     6,     0,    95,     0,
      77,    81,    85,     0,     0,    41,    41,     0,    51,    66,
       0,    64,     0,    37,    41,     0,   108,    38,     0,    33,
      59,    13,     0,    88,    76,    94,     0,     0,     0,    83,
      79,    43,     0,    39,    40,    45,     0,    99,     0,    98,
       0,     0,    65,     0,    74,    35,     0,   100,     0,     0,
       0,     0,    32,     7,     0,    78,    82,    86,     0,     0,
      42,     0,     0,     0,    44,     0,     0,    67,    61,     0,
       0,     0,   102,    97,     0,   109,     0,    41,   113,    89,
      84,    80,    90,    46,    92,     5,     4,    36,   111,    96,
       0,   101,     0,   104,     0,     0,     0,     0,    62,     0,
     103,   110,     0,     0,   114,    91,    93,     0,   112,   105,
     106,    65,     0,    63,   107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,   -27,  -137,   -56,  -137,   120,   -67,    42,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,    74,  -137,  -137,  -111,  -112,    27,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,   132,   -23,   -86,  -137,  -137,  -137,
     131,  -137,  -137,  -137,   -32,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,    99,     7,  -136,   -91,  -137,  -137,
    -137,  -137,  -137,  -137,  -137
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    48,    84,    55,   132,    57,   105,   106,     3,
      14,    21,    18,    22,    62,    68,    72,    64,    71,    47,
     128,    98,    99,   180,   142,   143,   144,   145,     7,    17,
      39,    24,    87,    58,    37,    49,    91,   217,    40,   151,
      42,    43,    44,   122,   108,   109,   136,   169,   137,   168,
     138,   164,   206,   207,   110,   182,   150,   183,   184,   200,
     212,   222,   202,   209,   205
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      46,    85,   119,    56,   121,   146,   127,    50,   107,   156,
      74,    53,    74,   155,   176,     4,   117,    85,    67,   157,
       1,   158,     6,    25,    26,    27,    28,    90,    32,   170,
      29,   120,     5,   173,     8,   159,   160,    30,   103,   104,
     133,   126,   161,    33,    95,   198,   112,   113,   114,   147,
     148,    34,    96,    97,     9,    11,   152,    35,    36,   153,
      12,   149,    74,   123,    10,    15,   178,    13,    75,    76,
      77,    78,    79,    16,    19,    20,   204,   130,   135,   135,
      23,   139,   140,    31,    38,    80,    81,    82,    41,    45,
      51,   199,    52,    54,   149,   203,    61,   199,    60,    63,
     181,   126,   185,    66,    69,   126,    70,    86,    83,    88,
      89,    90,    92,    93,   100,    94,   101,   141,   179,   102,
     115,   116,   220,   118,   124,   149,   126,   186,   125,   172,
     126,   134,   126,   154,   162,   223,   163,   165,   166,   192,
     167,   171,   175,   194,    74,   177,   148,   131,   187,   193,
     189,   190,   191,   196,   195,   197,   201,   126,   210,   211,
     213,   214,   215,   216,   218,   219,   221,   224,   188,   208,
      59,    73,   174,   129,    65,     0,   111
};

static const yytype_int16 yycheck[] =
{
      27,    57,    88,    35,    90,   116,    97,    30,    75,     5,
       8,    34,     8,   124,   150,    20,    14,    73,    45,    15,
      11,    17,    11,    23,    24,    25,    26,     9,     6,   141,
      30,    13,     0,   145,    11,    31,    32,    37,     8,     9,
     107,    97,    38,    21,    19,   181,    78,    79,    80,    10,
      11,    29,    27,    28,    20,    11,     8,    35,    36,    11,
       8,   117,     8,    95,    21,     8,   152,    22,    14,    15,
      16,    17,    18,    12,    12,    11,   187,   100,   110,   111,
      11,   113,   114,    12,    11,    31,    32,    33,    11,     8,
       7,   182,     8,    11,   150,   186,    11,   188,    12,     8,
     156,   157,   158,    13,     8,   161,    13,    12,    11,     8,
      12,     9,    12,     8,     8,    12,    12,     9,     4,    12,
      11,    11,   213,    12,    11,   181,   182,   159,    11,    13,
     186,    12,   188,    12,    12,   221,    12,    12,    12,   171,
      12,    12,    12,   175,     8,    12,    11,   105,    11,     8,
      12,    12,    12,     8,    12,    12,    12,   213,    12,    12,
      12,    12,    12,    12,    12,    12,    12,    12,   161,   196,
      38,    51,   145,    99,    43,    -1,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    40,    48,    20,     0,    11,    67,    11,    20,
      21,    11,     8,    22,    49,     8,    12,    68,    51,    12,
      11,    50,    52,    11,    70,    23,    24,    25,    26,    30,
      37,    12,     6,    21,    29,    35,    36,    73,    11,    69,
      77,    11,    79,    80,    81,     8,    41,    58,    41,    74,
      74,     7,     8,    74,    11,    43,    83,    45,    72,    73,
      12,    11,    53,     8,    56,    79,    13,    41,    54,     8,
      13,    57,    55,    45,     8,    14,    15,    16,    17,    18,
      31,    32,    33,    11,    42,    43,    12,    71,     8,    12,
       9,    75,    12,     8,    12,    19,    27,    28,    60,    61,
       8,    12,    12,     8,     9,    46,    47,    46,    83,    84,
      93,    93,    83,    83,    83,    11,    11,    14,    12,    75,
      13,    75,    82,    83,    11,    11,    43,    96,    59,    60,
      74,    47,    44,    46,    12,    83,    85,    87,    89,    83,
      83,     9,    63,    64,    65,    66,    63,    10,    11,    43,
      95,    78,     8,    11,    12,    63,     5,    15,    17,    31,
      32,    38,    12,    12,    90,    12,    12,    12,    88,    86,
      64,    12,    13,    64,    65,    12,    95,    12,    75,     4,
      62,    43,    94,    96,    97,    43,    83,    11,    94,    12,
      12,    12,    83,     8,    83,    12,     8,    12,    95,    96,
      98,    12,   101,    96,    63,   103,    91,    92,    41,   102,
      12,    12,    99,    12,    12,    12,    12,    76,    12,    12,
      96,    12,   100,    75,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    44,    43,    45,    45,
      45,    46,    46,    47,    47,    49,    50,    48,    51,    51,
      53,    52,    54,    52,    55,    52,    56,    52,    57,    52,
      58,    59,    52,    60,    60,    62,    61,    61,    61,    63,
      63,    63,    64,    64,    65,    65,    66,    68,    69,    67,
      71,    70,    72,    70,    73,    73,    73,    73,    73,    74,
      74,    75,    76,    75,    75,    75,    78,    77,    77,    79,
      79,    80,    80,    82,    81,    84,    83,    85,    83,    86,
      83,    87,    83,    88,    83,    89,    83,    83,    90,    83,
      91,    83,    92,    83,    93,    93,    94,    94,    95,    95,
      97,    96,    98,    96,    99,    96,   100,    96,    96,   101,
      96,   102,    96,   103,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     5,     0,     5,     2,     2,
       0,     1,     1,     2,     0,     0,     0,    10,     2,     0,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     5,
       0,     0,     7,     2,     1,     0,     5,     2,     2,     1,
       1,     0,     2,     1,     2,     1,     3,     0,     0,    10,
       0,     5,     0,     4,     2,     2,     2,     2,     3,     4,
       1,     4,     0,     9,     2,     0,     0,     6,     0,     2,
       0,     3,     1,     0,     5,     0,     4,     0,     5,     0,
       6,     0,     5,     0,     6,     0,     5,     1,     0,     6,
       0,     8,     0,     8,     2,     1,     2,     1,     1,     1,
       0,     4,     0,     5,     0,     6,     0,     8,     1,     0,
       5,     0,     6,     0,     5
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 3: /* idlist: ID idlist  */
#line 62 "parser.y"
                    { (yyval.intlistp) = intcons((yyvsp[-1].i),(yyvsp[0].intlistp)); }
#line 1594 "parser.tab.c"
    break;

  case 4: /* idlist: %empty  */
#line 63 "parser.y"
          { (yyval.intlistp) = EMPTYLIST; }
#line 1600 "parser.tab.c"
    break;

  case 5: /* costexpr: LPAREN EQUA numexpr numexpr RPAREN  */
#line 66 "parser.y"
                                                     { }
#line 1606 "parser.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 69 "parser.y"
                              { rparen("term"); }
#line 1612 "parser.tab.c"
    break;

  case 7: /* atom: LPAREN ID varidlist $@1 RPAREN  */
#line 69 "parser.y"
                                                         { (yyval.atomp) = newatom((yyvsp[-3].i),(yyvsp[-2].intlistp)); }
#line 1618 "parser.tab.c"
    break;

  case 8: /* atomlist: atomlist atom  */
#line 72 "parser.y"
                                { (yyval.atomlistp) = atomcons((yyvsp[0].atomp),(yyvsp[-1].atomlistp)); }
#line 1624 "parser.tab.c"
    break;

  case 9: /* atomlist: atomlist costexpr  */
#line 73 "parser.y"
                            { (yyval.atomlistp) = (yyvsp[-1].atomlistp); }
#line 1630 "parser.tab.c"
    break;

  case 10: /* atomlist: %empty  */
#line 74 "parser.y"
          { (yyval.atomlistp) = EMPTYLIST; }
#line 1636 "parser.tab.c"
    break;

  case 11: /* varid: VAR  */
#line 77 "parser.y"
              { (yyval.i) = (yyvsp[0].i); }
#line 1642 "parser.tab.c"
    break;

  case 12: /* varid: ID  */
#line 78 "parser.y"
             { (yyval.i) = (yyvsp[0].i); }
#line 1648 "parser.tab.c"
    break;

  case 13: /* varidlist: varid varidlist  */
#line 81 "parser.y"
                                  { (yyval.intlistp) = intcons((yyvsp[-1].i),(yyvsp[0].intlistp)); }
#line 1654 "parser.tab.c"
    break;

  case 14: /* varidlist: %empty  */
#line 82 "parser.y"
                  { (yyval.intlistp) = EMPTYLIST; }
#line 1660 "parser.tab.c"
    break;

  case 15: /* $@2: %empty  */
#line 87 "parser.y"
                                             { rparen("domain"); }
#line 1666 "parser.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 87 "parser.y"
                                                                                     { rparen("domain body"); }
#line 1672 "parser.tab.c"
    break;

  case 17: /* domain: LPAREN rwDEFINE LPAREN rwDOMAIN ID $@2 RPAREN domaindefs $@3 RPAREN  */
#line 87 "parser.y"
                                                                                                                       { storedomain((yyvsp[-5].i)); }
#line 1678 "parser.tab.c"
    break;

  case 19: /* domaindefs: %empty  */
#line 91 "parser.y"
                  { }
#line 1684 "parser.tab.c"
    break;

  case 20: /* $@4: %empty  */
#line 94 "parser.y"
                                                 { rparen(":predicates"); }
#line 1690 "parser.tab.c"
    break;

  case 21: /* domaindef: LPAREN rwPREDICATES typedatoms $@4 RPAREN  */
#line 94 "parser.y"
                                                                                   { storepredicates(); }
#line 1696 "parser.tab.c"
    break;

  case 22: /* $@5: %empty  */
#line 95 "parser.y"
                                       { rparen(":requirements"); }
#line 1702 "parser.tab.c"
    break;

  case 23: /* domaindef: LPAREN rwREQUIREMENTS idlist $@5 RPAREN  */
#line 95 "parser.y"
                                                                           { checkrequirements((yyvsp[-2].intlistp)); }
#line 1708 "parser.tab.c"
    break;

  case 24: /* $@6: %empty  */
#line 96 "parser.y"
                                        { rparen(":constants"); }
#line 1714 "parser.tab.c"
    break;

  case 25: /* domaindef: LPAREN rwCONSTANTS objectlist $@6 RPAREN  */
#line 96 "parser.y"
                                                                         { storeconstants((yyvsp[-2].typedvarlistp)); }
#line 1720 "parser.tab.c"
    break;

  case 26: /* $@7: %empty  */
#line 97 "parser.y"
                                           { rparen(":functions"); }
#line 1726 "parser.tab.c"
    break;

  case 27: /* domaindef: LPAREN rwFUNCTIONS functiondecls $@7 RPAREN  */
#line 97 "parser.y"
                                                                            { }
#line 1732 "parser.tab.c"
    break;

  case 28: /* $@8: %empty  */
#line 98 "parser.y"
                                    { rparen(":types"); }
#line 1738 "parser.tab.c"
    break;

  case 29: /* domaindef: LPAREN rwTYPES objectlist $@8 RPAREN  */
#line 98 "parser.y"
                                                                 { storetypes((yyvsp[-2].typedvarlistp)); }
#line 1744 "parser.tab.c"
    break;

  case 30: /* $@9: %empty  */
#line 99 "parser.y"
                          { COST = 0; }
#line 1750 "parser.tab.c"
    break;

  case 31: /* $@10: %empty  */
#line 99 "parser.y"
                                                   { rparen(":action"); }
#line 1756 "parser.tab.c"
    break;

  case 32: /* domaindef: LPAREN rwACTION $@9 ID actdefs $@10 RPAREN  */
#line 99 "parser.y"
                                                                                 { addactioncost(COST); addnewaction((yyvsp[-3].i)); }
#line 1762 "parser.tab.c"
    break;

  case 35: /* $@11: %empty  */
#line 106 "parser.y"
                                 { rparen(":action definitions"); }
#line 1768 "parser.tab.c"
    break;

  case 36: /* actdef: rwPARAMS LPAREN opvars $@11 RPAREN  */
#line 106 "parser.y"
                                                                           { addactionparameters((yyvsp[-2].typedvarlistp)); }
#line 1774 "parser.tab.c"
    break;

  case 37: /* actdef: rwPRECOND fma  */
#line 107 "parser.y"
                        { addactionprecond((yyvsp[0].Sfmap)); }
#line 1780 "parser.tab.c"
    break;

  case 38: /* actdef: rwEFFECT effect  */
#line 108 "parser.y"
                          { addactioneffect((yyvsp[0].Seffp)); }
#line 1786 "parser.tab.c"
    break;

  case 39: /* opvars: varlist  */
#line 111 "parser.y"
                  { (yyval.typedvarlistp) = withtype(UNIVTYPE,(yyvsp[0].intlistp)); }
#line 1792 "parser.tab.c"
    break;

  case 40: /* opvars: opvarlist  */
#line 112 "parser.y"
                    { (yyval.typedvarlistp) = (yyvsp[0].typedvarlistp); }
#line 1798 "parser.tab.c"
    break;

  case 41: /* opvars: %empty  */
#line 113 "parser.y"
          { (yyval.typedvarlistp) = EMPTYLIST; }
#line 1804 "parser.tab.c"
    break;

  case 42: /* varlist: VAR varlist  */
#line 116 "parser.y"
                      { (yyval.intlistp) = intcons((yyvsp[-1].i),(yyvsp[0].intlistp)); }
#line 1810 "parser.tab.c"
    break;

  case 43: /* varlist: VAR  */
#line 117 "parser.y"
              { (yyval.intlistp) = intcons((yyvsp[0].i), EMPTYLIST); }
#line 1816 "parser.tab.c"
    break;

  case 44: /* opvarlist: opvar opvarlist  */
#line 120 "parser.y"
                                  { (yyval.typedvarlistp) = TVappend((yyvsp[-1].typedvarlistp),(yyvsp[0].typedvarlistp)); }
#line 1822 "parser.tab.c"
    break;

  case 45: /* opvarlist: opvar  */
#line 121 "parser.y"
                { (yyval.typedvarlistp) = (yyvsp[0].typedvarlistp); }
#line 1828 "parser.tab.c"
    break;

  case 46: /* opvar: varlist DASH ID  */
#line 124 "parser.y"
                          { (yyval.typedvarlistp) = withtype((yyvsp[0].i),(yyvsp[-2].intlistp)); }
#line 1834 "parser.tab.c"
    break;

  case 47: /* $@12: %empty  */
#line 128 "parser.y"
                                                      { rparen(":problem"); }
#line 1840 "parser.tab.c"
    break;

  case 48: /* $@13: %empty  */
#line 128 "parser.y"
                                                                                          { rparen("problem definition"); }
#line 1846 "parser.tab.c"
    break;

  case 49: /* problem: LPAREN rwDEFINE LPAREN rwPROBLEM ID $@12 RPAREN defs $@13 RPAREN  */
#line 128 "parser.y"
                                                                                                                                   { addproblem((yyvsp[-5].i)); }
#line 1852 "parser.tab.c"
    break;

  case 50: /* $@14: %empty  */
#line 131 "parser.y"
                          { rparen("problem definitions"); }
#line 1858 "parser.tab.c"
    break;

  case 51: /* defs: defs LPAREN def $@14 RPAREN  */
#line 131 "parser.y"
                                                                    { }
#line 1864 "parser.tab.c"
    break;

  case 52: /* $@15: %empty  */
#line 132 "parser.y"
                     { rparen("problem definitions"); }
#line 1870 "parser.tab.c"
    break;

  case 53: /* defs: LPAREN def $@15 RPAREN  */
#line 132 "parser.y"
                                                               { }
#line 1876 "parser.tab.c"
    break;

  case 54: /* def: rwDOMAIN ID  */
#line 135 "parser.y"
                      { checkdomain((yyvsp[0].i)); }
#line 1882 "parser.tab.c"
    break;

  case 55: /* def: rwOBJECTS objectlist  */
#line 136 "parser.y"
                                { storeobjects((yyvsp[0].typedvarlistp)); }
#line 1888 "parser.tab.c"
    break;

  case 56: /* def: rwINIT atomlist  */
#line 137 "parser.y"
                          { storeinit((yyvsp[0].atomlistp)); }
#line 1894 "parser.tab.c"
    break;

  case 57: /* def: rwGOAL fma  */
#line 138 "parser.y"
                     { storegoal((yyvsp[0].Sfmap)); }
#line 1900 "parser.tab.c"
    break;

  case 58: /* def: rwMETRIC rwMINIMIZE atomlist  */
#line 139 "parser.y"
                                       { }
#line 1906 "parser.tab.c"
    break;

  case 59: /* objectlist: idlist DASH ID objectlist  */
#line 143 "parser.y"
                                            { (yyval.typedvarlistp) = TVappend(withtype((yyvsp[-1].i),(yyvsp[-3].intlistp)),(yyvsp[0].typedvarlistp)); }
#line 1912 "parser.tab.c"
    break;

  case 60: /* objectlist: idlist  */
#line 144 "parser.y"
                 { (yyval.typedvarlistp) = withtype(UNIVTYPE,(yyvsp[0].intlistp)); }
#line 1918 "parser.tab.c"
    break;

  case 61: /* typedvarlist: VAR DASH ID typedvarlist  */
#line 147 "parser.y"
                                           { }
#line 1924 "parser.tab.c"
    break;

  case 62: /* $@16: %empty  */
#line 148 "parser.y"
                                                     { rparen("typed variable list"); }
#line 1930 "parser.tab.c"
    break;

  case 63: /* typedvarlist: VAR DASH LPAREN rwEITHER ID idlist $@16 RPAREN typedvarlist  */
#line 148 "parser.y"
                                                                                                            { }
#line 1936 "parser.tab.c"
    break;

  case 64: /* typedvarlist: VAR typedvarlist  */
#line 149 "parser.y"
                                   { }
#line 1942 "parser.tab.c"
    break;

  case 65: /* typedvarlist: %empty  */
#line 150 "parser.y"
                  { }
#line 1948 "parser.tab.c"
    break;

  case 66: /* $@17: %empty  */
#line 153 "parser.y"
                                                     { rparen("typed atom list"); }
#line 1954 "parser.tab.c"
    break;

  case 67: /* typedatoms: typedatoms LPAREN ID typedvarlist $@17 RPAREN  */
#line 153 "parser.y"
                                                                                           { }
#line 1960 "parser.tab.c"
    break;

  case 68: /* typedatoms: %empty  */
#line 154 "parser.y"
                   { }
#line 1966 "parser.tab.c"
    break;

  case 69: /* functiondecls: functiondecl functiondecls  */
#line 157 "parser.y"
                                             { }
#line 1972 "parser.tab.c"
    break;

  case 70: /* functiondecls: %empty  */
#line 158 "parser.y"
                  { }
#line 1978 "parser.tab.c"
    break;

  case 71: /* functiondecl: tdecl DASH ID  */
#line 161 "parser.y"
                                { }
#line 1984 "parser.tab.c"
    break;

  case 72: /* functiondecl: tdecl  */
#line 162 "parser.y"
                { }
#line 1990 "parser.tab.c"
    break;

  case 73: /* $@18: %empty  */
#line 165 "parser.y"
                                 { rparen("function list"); }
#line 1996 "parser.tab.c"
    break;

  case 75: /* $@19: %empty  */
#line 170 "parser.y"
                       { rparen("empty conjunction"); }
#line 2002 "parser.tab.c"
    break;

  case 76: /* fma: LPAREN rwAND $@19 RPAREN  */
#line 170 "parser.y"
                                                               { (yyval.Sfmap) = Strue(); }
#line 2008 "parser.tab.c"
    break;

  case 77: /* $@20: %empty  */
#line 171 "parser.y"
                            { rparen("conjunction"); }
#line 2014 "parser.tab.c"
    break;

  case 78: /* fma: LPAREN rwAND fmas $@20 RPAREN  */
#line 171 "parser.y"
                                                              { (yyval.Sfmap) = Sconjunction((yyvsp[-2].Sfmalistp)); }
#line 2020 "parser.tab.c"
    break;

  case 79: /* $@21: %empty  */
#line 172 "parser.y"
                                { rparen("when"); }
#line 2026 "parser.tab.c"
    break;

  case 80: /* fma: LPAREN rwWHEN fma fma $@21 RPAREN  */
#line 172 "parser.y"
                                                           { (yyval.Sfmap) = Sconjunction(Sfmacons(Sneg((yyvsp[-3].Sfmap)),Sfmacons((yyvsp[-2].Sfmap),EMPTYLIST))); }
#line 2032 "parser.tab.c"
    break;

  case 81: /* $@22: %empty  */
#line 173 "parser.y"
                           { rparen("disjunction"); }
#line 2038 "parser.tab.c"
    break;

  case 82: /* fma: LPAREN rwOR fmas $@22 RPAREN  */
#line 173 "parser.y"
                                                             { (yyval.Sfmap) = Sdisjunction((yyvsp[-2].Sfmalistp)); }
#line 2044 "parser.tab.c"
    break;

  case 83: /* $@23: %empty  */
#line 174 "parser.y"
                                 { rparen("imply"); }
#line 2050 "parser.tab.c"
    break;

  case 84: /* fma: LPAREN rwIMPLY fma fma $@23 RPAREN  */
#line 174 "parser.y"
                                                             { (yyval.Sfmap) = Sdisjunction(Sfmacons(Sneg((yyvsp[-3].Sfmap)),Sfmacons((yyvsp[-2].Sfmap),EMPTYLIST))); }
#line 2056 "parser.tab.c"
    break;

  case 85: /* $@24: %empty  */
#line 175 "parser.y"
                           { rparen("not"); }
#line 2062 "parser.tab.c"
    break;

  case 86: /* fma: LPAREN rwNOT fma $@24 RPAREN  */
#line 175 "parser.y"
                                                     { (yyval.Sfmap) = Sneg((yyvsp[-2].Sfmap)); }
#line 2068 "parser.tab.c"
    break;

  case 87: /* fma: atom  */
#line 176 "parser.y"
               { (yyval.Sfmap) = Satom((yyvsp[0].atomp)); }
#line 2074 "parser.tab.c"
    break;

  case 88: /* $@25: %empty  */
#line 177 "parser.y"
                                  { rparen("equality"); }
#line 2080 "parser.tab.c"
    break;

  case 89: /* fma: LPAREN EQUA varid varid $@25 RPAREN  */
#line 177 "parser.y"
                                                                 { (yyval.Sfmap) = SfmaEQ((yyvsp[-3].i),(yyvsp[-2].i)); }
#line 2086 "parser.tab.c"
    break;

  case 90: /* $@26: %empty  */
#line 178 "parser.y"
                                                   { rparen("forall"); }
#line 2092 "parser.tab.c"
    break;

  case 91: /* fma: LPAREN rwFORALL LPAREN opvars RPAREN fma $@26 RPAREN  */
#line 178 "parser.y"
                                                                                { (yyval.Sfmap) = Sfmaforall((yyvsp[-4].typedvarlistp),(yyvsp[-2].Sfmap)); }
#line 2098 "parser.tab.c"
    break;

  case 92: /* $@27: %empty  */
#line 179 "parser.y"
                                                   { rparen("exists"); }
#line 2104 "parser.tab.c"
    break;

  case 93: /* fma: LPAREN rwEXISTS LPAREN opvars RPAREN fma $@27 RPAREN  */
#line 179 "parser.y"
                                                                                { (yyval.Sfmap) = Sfmaforsome((yyvsp[-4].typedvarlistp),(yyvsp[-2].Sfmap)); }
#line 2110 "parser.tab.c"
    break;

  case 94: /* fmas: fmas fma  */
#line 182 "parser.y"
                   { (yyval.Sfmalistp) = Sfmacons((yyvsp[0].Sfmap),(yyvsp[-1].Sfmalistp)); }
#line 2116 "parser.tab.c"
    break;

  case 95: /* fmas: fma  */
#line 183 "parser.y"
              { (yyval.Sfmalistp) = Sfmacons((yyvsp[0].Sfmap),EMPTYLIST); }
#line 2122 "parser.tab.c"
    break;

  case 96: /* effects: effects effect  */
#line 186 "parser.y"
                         { (yyval.Sefflistp) = Seffcons((yyvsp[0].Seffp),(yyvsp[-1].Sefflistp)); }
#line 2128 "parser.tab.c"
    break;

  case 97: /* effects: effect  */
#line 187 "parser.y"
                 { (yyval.Sefflistp) = Seffcons((yyvsp[0].Seffp),EMPTYLIST); }
#line 2134 "parser.tab.c"
    break;

  case 98: /* numexpr: atom  */
#line 190 "parser.y"
               { (yyval.i) = 0; }
#line 2140 "parser.tab.c"
    break;

  case 99: /* numexpr: INT  */
#line 191 "parser.y"
              { (yyval.i) = (yyvsp[0].i); }
#line 2146 "parser.tab.c"
    break;

  case 100: /* $@28: %empty  */
#line 194 "parser.y"
                     { rparen("empty conjunction"); }
#line 2152 "parser.tab.c"
    break;

  case 101: /* effect: LPAREN rwAND $@28 RPAREN  */
#line 194 "parser.y"
                                                             { (yyval.Seffp) = Seffconjunction(EMPTYLIST); }
#line 2158 "parser.tab.c"
    break;

  case 102: /* $@29: %empty  */
#line 195 "parser.y"
                               { rparen("compound effect"); }
#line 2164 "parser.tab.c"
    break;

  case 103: /* effect: LPAREN rwAND effects $@29 RPAREN  */
#line 195 "parser.y"
                                                                     { (yyval.Seffp) = Seffconjunction((yyvsp[-2].Sefflistp)); }
#line 2170 "parser.tab.c"
    break;

  case 104: /* $@30: %empty  */
#line 196 "parser.y"
                                   { rparen("when"); }
#line 2176 "parser.tab.c"
    break;

  case 105: /* effect: LPAREN rwWHEN fma effect $@30 RPAREN  */
#line 196 "parser.y"
                                                              { (yyval.Seffp) = Seffwhen((yyvsp[-3].Sfmap),(yyvsp[-2].Seffp)); }
#line 2182 "parser.tab.c"
    break;

  case 106: /* $@31: %empty  */
#line 197 "parser.y"
                                                      { rparen("forall"); }
#line 2188 "parser.tab.c"
    break;

  case 107: /* effect: LPAREN rwFORALL LPAREN opvars RPAREN effect $@31 RPAREN  */
#line 197 "parser.y"
                                                                                   { (yyval.Seffp) = Seffforall((yyvsp[-4].typedvarlistp),(yyvsp[-2].Seffp)); }
#line 2194 "parser.tab.c"
    break;

  case 108: /* effect: atom  */
#line 198 "parser.y"
               { (yyval.Seffp) = SPeffatom((yyvsp[0].atomp)); }
#line 2200 "parser.tab.c"
    break;

  case 109: /* $@32: %empty  */
#line 199 "parser.y"
                            { rparen("not"); }
#line 2206 "parser.tab.c"
    break;

  case 110: /* effect: LPAREN rwNOT atom $@32 RPAREN  */
#line 199 "parser.y"
                                                      { (yyval.Seffp) = SNeffatom((yyvsp[-2].atomp)); }
#line 2212 "parser.tab.c"
    break;

  case 111: /* $@33: %empty  */
#line 200 "parser.y"
                                         { rparen("increase"); }
#line 2218 "parser.tab.c"
    break;

  case 112: /* effect: LPAREN rwINCREASE atom numexpr $@33 RPAREN  */
#line 200 "parser.y"
                                                                        { (yyval.Seffp) = Seffconjunction(NULL); COST = (yyvsp[-2].i); }
#line 2224 "parser.tab.c"
    break;

  case 113: /* $@34: %empty  */
#line 201 "parser.y"
                                 { rparen("oneof effect"); }
#line 2230 "parser.tab.c"
    break;

  case 114: /* effect: LPAREN rwONEOF effects $@34 RPAREN  */
#line 201 "parser.y"
                                                                    { (yyval.Seffp) = Seffoneof((yyvsp[-2].Sefflistp)); }
#line 2236 "parser.tab.c"
    break;


#line 2240 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 204 "parser.y"


void parseerror(char *s) {
  errorstring = s;
}

void rparen(char *s) {
  errorstring = s;
}
