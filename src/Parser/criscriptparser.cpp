
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "criscript.y"

//    Copyright (c) 2007 CRI Middleware inc.  All rights reserved.
#include "stdafx.h"
#include "criScript.h"
#include "parser.h"
#include "cilCodeGen.h"
#include "cilVm.h"

namespace cri {
#define YYMAXDEPTH 65535
extern "C" {
int32_t yylex( void );
void yyerror( char *pMessage);
}

using namespace cri;

#ifdef DEBUG_PARSING
#define dbgprint(x)     printf x
#define YYDEBUG 1
#else
#define dbgprint(x)     
#endif
 


/* Line 189 of yacc.c  */
#line 100 "criscriptparser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_ERROR = 258,
     TOKEN_LINETERM = 259,
     TOKEN_SEMICOLONAUTO = 260,
     TOKEN_BREAK = 261,
     TOKEN_ELSE = 262,
     TOKEN_NEW = 263,
     TOKEN_VAR = 264,
     TOKEN_CASE = 265,
     TOKEN_FINALLY = 266,
     TOKEN_RETURN = 267,
     TOKEN_VOID = 268,
     TOKEN_CATCH = 269,
     TOKEN_FOR = 270,
     TOKEN_SWITCH = 271,
     TOKEN_WHILE = 272,
     TOKEN_CONTINUE = 273,
     TOKEN_FUNCTION = 274,
     TOKEN_THIS = 275,
     TOKEN_WITH = 276,
     TOKEN_DEFAULT = 277,
     TOKEN_IF = 278,
     TOKEN_THROW = 279,
     TOKEN_DELETE = 280,
     TOKEN_IN = 281,
     TOKEN_TRY = 282,
     TOKEN_DO = 283,
     TOKEN_TYPEOF = 284,
     TOKEN_ATSET = 285,
     TOKEN_ATIF = 286,
     TOKEN_ATELIF = 287,
     TOKEN_ATELSE = 288,
     TOKEN_ATEND = 289,
     TOKEN_ATCC_ON = 290,
     TOKEN_IMPORT = 291,
     TOKEN_ABSTRACT = 292,
     TOKEN_ENUM = 293,
     TOKEN_INT = 294,
     TOKEN_SHORT = 295,
     TOKEN_BOOLEAN = 296,
     TOKEN_EXPORT = 297,
     TOKEN_INTERFACE = 298,
     TOKEN_STATIC = 299,
     TOKEN_BYTE = 300,
     TOKEN_EXTENDS = 301,
     TOKEN_LONG = 302,
     TOKEN_SUPER = 303,
     TOKEN_CHAR = 304,
     TOKEN_FINAL = 305,
     TOKEN_NATIVE = 306,
     TOKEN_SYNCHRONIZED = 307,
     TOKEN_CLASS = 308,
     TOKEN_FLOAT = 309,
     TOKEN_PACKAGE = 310,
     TOKEN_THROWS = 311,
     TOKEN_CONST = 312,
     TOKEN_GOTO = 313,
     TOKEN_PRIVATE = 314,
     TOKEN_TRANSIENT = 315,
     TOKEN_DEBUGGER = 316,
     TOKEN_IMPLEMENTS = 317,
     TOKEN_PROTECTED = 318,
     TOKEN_VOLATILE = 319,
     TOKEN_DOUBLE = 320,
     TOKEN_PUBLIC = 321,
     LITERAL_NULL = 322,
     LITERAL_UNDEFINED = 323,
     LITERAL_REGULAR_EXPRESSION = 324,
     LITERAL_BOOLEAN = 325,
     LITERAL_STRING = 326,
     LITERAL_INTEGER = 327,
     LITERAL_DECIMAL = 328,
     IDENTIFIER_NAME = 329,
     TOKEN_EOF = 330,
     TOKEN_RESTARG_PREFIX = 331,
     ATIDENTIFIER_NAME = 332,
     TOKEN_SHLASSIGNOP = 333,
     TOKEN_SHRUASSIGNOP = 334,
     TOKEN_SHRASSIGNOP = 335,
     TOKEN_MODASSIGNOP = 336,
     TOKEN_XORASSIGNOP = 337,
     TOKEN_ORASSIGNOP = 338,
     TOKEN_ANDASSIGNOP = 339,
     TOKEN_SUBASSIGNOP = 340,
     TOKEN_ADDASSIGNOP = 341,
     TOKEN_DIVASSIGNOP = 342,
     TOKEN_MULASSIGNOP = 343,
     TOKEN_LOGOR = 344,
     TOKEN_LOGAND = 345,
     TOKEN_NOTEQUALOP = 346,
     TOKEN_EQUALOP = 347,
     TOKEN_STRICTNOTEQUALOP = 348,
     TOKEN_STRICTEQUALOP = 349,
     TOKEN_INSTANCEOF = 350,
     TOKEN_LESSEQUAL = 351,
     TOKEN_LESS = 352,
     TOKEN_GREATEREQUAL = 353,
     TOKEN_GREATER = 354,
     TOKEN_SHIFTRIGHTUNSIGNED = 355,
     TOKEN_SHIFTRIGHT = 356,
     TOKEN_SHIFTLEFT = 357,
     TOKEN_UNDEC = 358,
     TOKEN_UNINC = 359
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "criscript.y"

	struct {
		union {
			int64_t iValue;
			float fValue;
			double dValue;
			bool bValue;
			uint8_t op;
			const wchar_t * pString;
			CCgNodeData* pObjectData;
		};
		uint32_t iFileId;	//FileId, not used now
		uint32_t iLineNumber;	//Linenumber of the token
		uint32_t iColumn;		//Column of the token
	};



/* Line 214 of yacc.c  */
#line 259 "criscriptparser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 271 "criscriptparser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  153
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  334
/* YYNRULES -- Number of states.  */
#define YYNSTATES  584

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   359

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   125,     2,     2,     2,   114,    97,     2,
     118,   119,   112,   110,    78,   111,   117,   113,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,   126,
       2,    79,     2,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   120,     2,   121,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,    95,   123,   124,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    93,    94,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   115,   116
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    15,    17,    19,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    44,    46,    49,    53,    59,    63,    68,    70,    74,
      76,    79,    83,    86,    87,    88,    90,    93,    96,   100,
     104,   106,   108,   110,   112,   114,   119,   123,   127,   129,
     132,   134,   137,   140,   145,   149,   152,   155,   160,   164,
     167,   171,   173,   177,   179,   181,   183,   185,   187,   190,
     193,   195,   198,   201,   204,   207,   210,   213,   216,   219,
     222,   224,   228,   232,   236,   238,   242,   246,   248,   252,
     256,   260,   262,   266,   270,   274,   278,   282,   286,   288,
     292,   296,   300,   304,   308,   310,   314,   318,   322,   326,
     328,   332,   336,   340,   344,   346,   350,   352,   356,   358,
     362,   364,   368,   370,   374,   376,   380,   382,   386,   388,
     392,   394,   398,   400,   404,   406,   412,   414,   420,   424,
     428,   432,   436,   440,   444,   448,   452,   456,   460,   464,
     468,   470,   474,   478,   482,   486,   490,   494,   498,   502,
     506,   510,   514,   518,   520,   521,   523,   525,   529,   530,
     532,   534,   538,   540,   542,   544,   546,   548,   550,   552,
     554,   556,   558,   560,   562,   564,   566,   568,   570,   572,
     574,   577,   580,   584,   587,   589,   592,   593,   598,   600,
     604,   606,   610,   613,   616,   617,   619,   625,   629,   632,
     635,   636,   638,   641,   644,   646,   647,   651,   658,   659,
     662,   669,   675,   685,   696,   705,   713,   714,   719,   720,
     725,   726,   731,   737,   743,   746,   750,   752,   754,   757,
     760,   765,   769,   773,   776,   780,   781,   786,   790,   795,
     799,   803,   809,   812,   815,   817,   819,   821,   828,   837,
     844,   853,   854,   856,   861,   866,   868,   872,   874,   878,
     882,   885,   887,   889,   891,   893,   895,   897,   898,   902,
     905,   907,   911,   913,   914,   916,   924,   932,   939,   940,
     942,   945,   947,   949,   951,   953,   955,   957,   962,   964,
     967,   970,   973,   976,   978,   982,   986,   990,   992,   996,
    1000,  1002,  1006,  1010,  1014,  1016,  1020,  1024,  1028,  1032,
    1034,  1038,  1042,  1046,  1050,  1052,  1056,  1058,  1062,  1064,
    1068,  1070,  1074,  1076,  1080
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     128,     0,    -1,   129,    75,    -1,   129,   130,    -1,   130,
      -1,   219,    -1,   178,    -1,    20,    -1,   137,    -1,   118,
     175,   119,    -1,   228,    -1,   134,    -1,   132,    -1,   227,
      -1,   226,    -1,   225,    -1,   229,    -1,    67,    -1,    68,
      -1,   230,    -1,    -1,   228,    -1,   120,   121,    -1,   120,
     136,   121,    -1,   120,   136,   135,   136,   121,    -1,   120,
     135,   121,    -1,   120,   135,   136,   121,    -1,   172,    -1,
     135,   136,   172,    -1,    78,    -1,   136,    78,    -1,   122,
     138,   123,    -1,   140,   139,    -1,    -1,    -1,    78,    -1,
      78,   140,    -1,   139,    78,    -1,   139,    78,   140,    -1,
     141,    92,   172,    -1,   228,    -1,   225,    -1,   226,    -1,
     131,    -1,   220,    -1,   142,   120,   175,   121,    -1,   142,
     117,   228,    -1,     8,   142,   147,    -1,   142,    -1,     8,
     143,    -1,   142,    -1,   142,   147,    -1,   145,   147,    -1,
     145,   120,   175,   121,    -1,   145,   117,   228,    -1,   144,
     147,    -1,   145,   147,    -1,   145,   120,   175,   121,    -1,
     145,   117,   228,    -1,   118,   119,    -1,   118,   148,   119,
      -1,   172,    -1,   148,    78,   172,    -1,   145,    -1,   143,
      -1,   146,    -1,   144,    -1,   149,    -1,   149,   116,    -1,
     149,   115,    -1,   151,    -1,    25,   152,    -1,    29,   152,
      -1,    13,   152,    -1,   116,   152,    -1,   115,   152,    -1,
     110,   152,    -1,   111,   152,    -1,   124,   152,    -1,   125,
     152,    -1,   152,    -1,   153,   112,   152,    -1,   153,   113,
     152,    -1,   153,   114,   152,    -1,   153,    -1,   154,   110,
     153,    -1,   154,   111,   153,    -1,   154,    -1,   155,   109,
     154,    -1,   155,   108,   154,    -1,   155,   107,   154,    -1,
     155,    -1,   156,   106,   155,    -1,   156,   105,   155,    -1,
     156,   104,   155,    -1,   156,   103,   155,    -1,   156,   102,
     155,    -1,   156,    26,   155,    -1,   155,    -1,   157,   106,
     155,    -1,   157,   105,   155,    -1,   157,   104,   155,    -1,
     157,   103,   155,    -1,   157,   102,   155,    -1,   156,    -1,
     158,    99,   156,    -1,   158,    98,   156,    -1,   158,   101,
     156,    -1,   158,   100,   156,    -1,   157,    -1,   159,    99,
     157,    -1,   159,    98,   157,    -1,   159,   101,   157,    -1,
     159,   100,   157,    -1,   158,    -1,   160,    97,   158,    -1,
     159,    -1,   161,    97,   159,    -1,   160,    -1,   162,    96,
     160,    -1,   161,    -1,   163,    96,   161,    -1,   162,    -1,
     164,    95,   162,    -1,   163,    -1,   165,    95,   163,    -1,
     164,    -1,   166,    94,   164,    -1,   165,    -1,   167,    94,
     165,    -1,   166,    -1,   168,    93,   166,    -1,   167,    -1,
     169,    93,   167,    -1,   168,    -1,   168,    91,   172,    92,
     172,    -1,   169,    -1,   169,    91,   173,    92,   173,    -1,
     149,    79,   172,    -1,   149,    90,   172,    -1,   149,    89,
     172,    -1,   149,    88,   172,    -1,   149,    87,   172,    -1,
     149,    85,   172,    -1,   149,    84,   172,    -1,   149,    86,
     172,    -1,   149,    82,   172,    -1,   149,    81,   172,    -1,
     149,    80,   172,    -1,   149,    83,   172,    -1,   170,    -1,
     149,    79,   173,    -1,   149,    90,   173,    -1,   149,    89,
     173,    -1,   149,    88,   173,    -1,   149,    87,   173,    -1,
     149,    85,   173,    -1,   149,    84,   173,    -1,   149,    86,
     173,    -1,   149,    82,   173,    -1,   149,    81,   173,    -1,
     149,    80,   173,    -1,   149,    83,   173,    -1,   171,    -1,
      -1,   175,    -1,   172,    -1,   175,    78,   172,    -1,    -1,
     177,    -1,   173,    -1,   177,    78,   173,    -1,   179,    -1,
     181,    -1,   193,    -1,   211,    -1,   194,    -1,   196,    -1,
     198,    -1,   199,    -1,   201,    -1,   203,    -1,   205,    -1,
     206,    -1,   212,    -1,   214,    -1,   236,    -1,   242,    -1,
     234,    -1,   232,    -1,     1,   224,    -1,     1,    75,    -1,
     122,   180,   123,    -1,   122,   123,    -1,   178,    -1,   180,
     178,    -1,    -1,     9,   183,   182,   224,    -1,   185,    -1,
     183,    78,   185,    -1,   189,    -1,   184,    78,   189,    -1,
     228,   186,    -1,   188,   186,    -1,    -1,   191,    -1,   228,
      92,   120,   228,   121,    -1,   228,    92,   228,    -1,   228,
     190,    -1,   188,   186,    -1,    -1,   192,    -1,    79,   172,
      -1,    79,   173,    -1,   224,    -1,    -1,   175,   195,   224,
      -1,    23,   118,   175,   119,   178,   197,    -1,    -1,     7,
     178,    -1,    28,   178,    17,   118,   175,   119,    -1,    17,
     118,   175,   119,   178,    -1,    15,   118,   176,   126,   174,
     126,   174,   119,   178,    -1,    15,   118,     9,   184,   126,
     174,   126,   174,   119,   178,    -1,    15,   118,     9,   189,
      26,   175,   119,   178,    -1,    15,   118,   150,    26,   175,
     119,   178,    -1,    -1,    18,   133,   200,   224,    -1,    -1,
       6,   133,   202,   224,    -1,    -1,    12,   174,   204,   224,
      -1,    21,   118,   175,   119,   178,    -1,    16,   118,   175,
     119,   207,    -1,   122,   123,    -1,   122,   208,   123,    -1,
     209,    -1,   210,    -1,   208,   209,    -1,   208,   210,    -1,
      10,   175,    92,   180,    -1,    10,   175,    92,    -1,    22,
      92,   180,    -1,    22,    92,    -1,   228,    92,   178,    -1,
      -1,    24,   175,   213,   224,    -1,    27,   179,   216,    -1,
      27,   179,   215,   216,    -1,    27,   179,   215,    -1,    27,
     179,     1,    -1,    14,   118,   228,   119,   179,    -1,    11,
     179,    -1,   217,   218,    -1,   218,    -1,   219,    -1,   178,
      -1,    19,   228,   118,   221,   119,   223,    -1,    19,   228,
     118,   221,   119,    92,   228,   223,    -1,    19,   133,   118,
     221,   119,   223,    -1,    19,   133,   118,   221,   119,    92,
     228,   223,    -1,    -1,   222,    -1,   222,    78,    76,   228,
      -1,   222,    78,    76,   187,    -1,   228,    -1,   222,    78,
     228,    -1,   188,    -1,   222,    78,   188,    -1,   122,   217,
     123,    -1,   122,   123,    -1,   126,    -1,    71,    -1,    72,
      -1,    73,    -1,    74,    -1,    70,    -1,    -1,   231,   113,
      69,    -1,    36,   233,    -1,   228,    -1,   233,   117,   228,
      -1,    35,    -1,    -1,   180,    -1,    31,   118,   254,   119,
     235,   238,    34,    -1,    31,   118,   254,   119,   235,   237,
      34,    -1,    32,   118,   254,   119,   235,   238,    -1,    -1,
      33,    -1,    33,   180,    -1,   227,    -1,   226,    -1,   229,
      -1,    77,    -1,   239,    -1,   240,    -1,    30,   240,    79,
     254,    -1,   241,    -1,   110,   243,    -1,   111,   243,    -1,
     124,   243,    -1,   125,   243,    -1,   243,    -1,   244,   112,
     243,    -1,   244,   113,   243,    -1,   244,   114,   243,    -1,
     244,    -1,   245,   110,   244,    -1,   245,   111,   244,    -1,
     245,    -1,   246,   109,   245,    -1,   246,   108,   245,    -1,
     246,   107,   245,    -1,   246,    -1,   247,   106,   246,    -1,
     247,   105,   246,    -1,   247,   104,   246,    -1,   247,   103,
     246,    -1,   247,    -1,   248,    99,   247,    -1,   248,    98,
     247,    -1,   248,   101,   247,    -1,   248,   100,   247,    -1,
     248,    -1,   249,    97,   248,    -1,   249,    -1,   250,    96,
     249,    -1,   250,    -1,   251,    95,   250,    -1,   251,    -1,
     252,    94,   251,    -1,   252,    -1,   253,    93,   252,    -1,
     253,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   265,   265,   277,   281,   286,   299,   313,   318,   323,
     328,   333,   338,   344,   349,   354,   359,   364,   369,   374,
     381,   385,   391,   396,   405,   430,   435,   445,   451,   469,
     474,   488,   497,   504,   510,   514,   519,   524,   529,   543,
     549,   554,   559,   565,   570,   575,   580,   585,   591,   596,
     602,   608,   613,   618,   623,   629,   634,   639,   644,   650,
     655,   661,   666,   674,   679,   685,   690,   696,   701,   708,
     716,   721,   726,   731,   736,   743,   750,   755,   760,   765,
     771,   776,   781,   786,   792,   797,   802,   808,   813,   818,
     823,   829,   834,   839,   844,   849,   854,   859,   865,   870,
     875,   880,   885,   890,   896,   901,   906,   911,   916,   922,
     927,   932,   937,   942,   948,   953,   959,   964,   970,   975,
     981,   986,   992,   997,  1003,  1008,  1014,  1019,  1025,  1030,
    1036,  1041,  1047,  1052,  1058,  1063,  1069,  1074,  1080,  1085,
    1092,  1099,  1106,  1113,  1120,  1127,  1134,  1141,  1148,  1155,
    1162,  1168,  1173,  1180,  1187,  1194,  1201,  1208,  1215,  1222,
    1229,  1236,  1243,  1250,  1257,  1261,  1267,  1272,  1280,  1284,
    1290,  1295,  1302,  1307,  1312,  1317,  1322,  1327,  1332,  1337,
    1342,  1347,  1352,  1357,  1362,  1367,  1372,  1379,  1386,  1394,
    1402,  1409,  1417,  1422,  1428,  1433,  1445,  1445,  1451,  1456,
    1463,  1468,  1475,  1480,  1489,  1493,  1499,  1509,  1519,  1524,
    1534,  1538,  1544,  1550,  1556,  1562,  1562,  1568,  1575,  1579,
    1585,  1590,  1595,  1600,  1605,  1613,  1621,  1621,  1627,  1627,
    1633,  1633,  1639,  1645,  1651,  1656,  1662,  1667,  1672,  1678,
    1685,  1690,  1696,  1701,  1707,  1713,  1713,  1719,  1724,  1729,
    1734,  1741,  1747,  1755,  1766,  1772,  1777,  1783,  1788,  1796,
    1801,  1810,  1814,  1819,  1831,  1846,  1851,  1857,  1862,  1869,
    1874,  1881,  1888,  1897,  1906,  1915,  1924,  1933,  1933,  1946,
    1953,  1954,  1956,  1963,  1967,  1973,  1980,  1988,  1997,  2003,
    2010,  2018,  2023,  2028,  2034,  2044,  2050,  2057,  2077,  2082,
    2087,  2092,  2097,  2103,  2108,  2113,  2118,  2124,  2129,  2134,
    2140,  2145,  2150,  2155,  2161,  2166,  2171,  2176,  2181,  2187,
    2192,  2197,  2202,  2207,  2213,  2218,  2224,  2229,  2235,  2240,
    2246,  2251,  2257,  2262,  2268
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_ERROR", "TOKEN_LINETERM",
  "TOKEN_SEMICOLONAUTO", "TOKEN_BREAK", "TOKEN_ELSE", "TOKEN_NEW",
  "TOKEN_VAR", "TOKEN_CASE", "TOKEN_FINALLY", "TOKEN_RETURN", "TOKEN_VOID",
  "TOKEN_CATCH", "TOKEN_FOR", "TOKEN_SWITCH", "TOKEN_WHILE",
  "TOKEN_CONTINUE", "TOKEN_FUNCTION", "TOKEN_THIS", "TOKEN_WITH",
  "TOKEN_DEFAULT", "TOKEN_IF", "TOKEN_THROW", "TOKEN_DELETE", "TOKEN_IN",
  "TOKEN_TRY", "TOKEN_DO", "TOKEN_TYPEOF", "TOKEN_ATSET", "TOKEN_ATIF",
  "TOKEN_ATELIF", "TOKEN_ATELSE", "TOKEN_ATEND", "TOKEN_ATCC_ON",
  "TOKEN_IMPORT", "TOKEN_ABSTRACT", "TOKEN_ENUM", "TOKEN_INT",
  "TOKEN_SHORT", "TOKEN_BOOLEAN", "TOKEN_EXPORT", "TOKEN_INTERFACE",
  "TOKEN_STATIC", "TOKEN_BYTE", "TOKEN_EXTENDS", "TOKEN_LONG",
  "TOKEN_SUPER", "TOKEN_CHAR", "TOKEN_FINAL", "TOKEN_NATIVE",
  "TOKEN_SYNCHRONIZED", "TOKEN_CLASS", "TOKEN_FLOAT", "TOKEN_PACKAGE",
  "TOKEN_THROWS", "TOKEN_CONST", "TOKEN_GOTO", "TOKEN_PRIVATE",
  "TOKEN_TRANSIENT", "TOKEN_DEBUGGER", "TOKEN_IMPLEMENTS",
  "TOKEN_PROTECTED", "TOKEN_VOLATILE", "TOKEN_DOUBLE", "TOKEN_PUBLIC",
  "LITERAL_NULL", "LITERAL_UNDEFINED", "LITERAL_REGULAR_EXPRESSION",
  "LITERAL_BOOLEAN", "LITERAL_STRING", "LITERAL_INTEGER",
  "LITERAL_DECIMAL", "IDENTIFIER_NAME", "TOKEN_EOF",
  "TOKEN_RESTARG_PREFIX", "ATIDENTIFIER_NAME", "','", "'='",
  "TOKEN_SHLASSIGNOP", "TOKEN_SHRUASSIGNOP", "TOKEN_SHRASSIGNOP",
  "TOKEN_MODASSIGNOP", "TOKEN_XORASSIGNOP", "TOKEN_ORASSIGNOP",
  "TOKEN_ANDASSIGNOP", "TOKEN_SUBASSIGNOP", "TOKEN_ADDASSIGNOP",
  "TOKEN_DIVASSIGNOP", "TOKEN_MULASSIGNOP", "'?'", "':'", "TOKEN_LOGOR",
  "TOKEN_LOGAND", "'|'", "'^'", "'&'", "TOKEN_NOTEQUALOP", "TOKEN_EQUALOP",
  "TOKEN_STRICTNOTEQUALOP", "TOKEN_STRICTEQUALOP", "TOKEN_INSTANCEOF",
  "TOKEN_LESSEQUAL", "TOKEN_LESS", "TOKEN_GREATEREQUAL", "TOKEN_GREATER",
  "TOKEN_SHIFTRIGHTUNSIGNED", "TOKEN_SHIFTRIGHT", "TOKEN_SHIFTLEFT", "'+'",
  "'-'", "'*'", "'/'", "'%'", "TOKEN_UNDEC", "TOKEN_UNINC", "'.'", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "'~'", "'!'", "';'", "$accept",
  "Program", "SourceElements", "SourceElement", "PrimaryExpression",
  "Literal", "IdentifierOpt", "arrayLiteral", "ElementList", "Elision",
  "objectLiteral", "propertyNameAndValueList", "propertyNameAndValueOpt",
  "propertyNameAndValue", "PropertyName", "MemberExpression",
  "NewExpression", "MemberExpressionForIn", "callExpression",
  "callExpressionForIn", "Arguments", "ArgumentList",
  "LeftHandSideExpression", "LeftHandSideExpressionForIn",
  "PostfixExpression", "unaryExpression", "MultiplicativeExpression",
  "AdditiveExpression", "shiftExpression", "RelationalExpression",
  "RelationalExpressionNoIn", "EqualityExpression",
  "EqualityExpressionNoIn", "bitwiseANDExpression",
  "bitwiseANDExpressionNoIn", "bitwiseXORExpression",
  "bitwiseXORExpressionNoIn", "bitwiseORExpression",
  "bitwiseORExpressionNoIn", "logicalANDExpression",
  "logicalANDExpressionNoIn", "logicalORExpression",
  "logicalORExpressionNoIn", "conditionalExpression",
  "ConditionalExpressionNoIn", "AssignmentExpression",
  "AssignmentExpressionNoIn", "ExpressionOpt", "Expression",
  "ExpressionNoInOpt", "ExpressionNoIn", "Statement", "Block",
  "StatementList", "VariableStatement", "$@1", "VariableDeclarationList",
  "VariableDeclarationListNoIn", "variableDeclaration", "InitialiserOpt",
  "ArrayTypedIdentifier", "TypedIdentifier", "VariableDeclarationNoIn",
  "InitialiserNoInOpt", "Initialiser", "InitialiserNoIn", "EmptyStatement",
  "expressionStatement", "$@2", "ifStatement", "ElseStatementOpt",
  "IterationStatement", "continueStatement", "$@3", "breakStatement",
  "$@4", "returnStatement", "$@5", "withStatement", "switchStatement",
  "CaseBlock", "CaseClauses", "caseClause", "DefaultClause",
  "LabelledStatement", "throwStatement", "$@6", "TryStatement", "Catch",
  "Finally", "FunctionSourceElements", "FunctionSourceElement",
  "functionDeclaration", "FunctionExpression", "FormalParameterList",
  "Identifiers", "FunctionBody", "SemiColon", "LiteralString",
  "LiteralInteger", "LiteralFloat", "identifier", "LiteralBoolean",
  "LiteralRegex", "$@7", "Extension_ImportStatement",
  "Extension_ImportComponent", "Extension_AtCcOnStatement",
  "StatementListOpt", "Extension_AtIfStatement",
  "Extension_AtElifStatement", "Extension_AtElseStatementOpt",
  "Extension_AtLiteral", "Extension_AtIdentifier",
  "Extension_AtPrimaryExpression", "Extension_AtSetStatement",
  "Extension_AtunaryExpression", "Extension_AtMultiplicativeExpression",
  "Extension_AtAdditiveExpression", "Extension_AtshiftExpression",
  "Extension_AtRelationalExpression", "Extension_AtEqualityExpression",
  "Extension_AtbitwiseANDExpression", "Extension_AtbitwiseXORExpression",
  "Extension_AtbitwiseORExpression", "Extension_AtlogicalANDExpression",
  "Extension_AtlogicalORExpression", "Extension_AtExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    44,    61,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    63,    58,   344,   345,   124,    94,    38,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
      43,    45,    42,    47,    37,   358,   359,    46,    40,    41,
      91,    93,   123,   125,   126,    33,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   127,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   138,   138,   139,   139,   139,   139,   139,   140,
     141,   141,   141,   142,   142,   142,   142,   142,   143,   143,
     144,   145,   145,   145,   145,   146,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   151,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     153,   153,   153,   153,   154,   154,   154,   155,   155,   155,
     155,   156,   156,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   157,   158,   158,   158,   158,   158,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   174,   175,   175,   176,   176,
     177,   177,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   179,   180,   180,   182,   181,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   188,   189,   189,
     190,   190,   191,   192,   193,   195,   194,   196,   197,   197,
     198,   198,   198,   198,   198,   198,   200,   199,   202,   201,
     204,   203,   205,   206,   207,   207,   208,   208,   208,   208,
     209,   209,   210,   210,   211,   213,   212,   214,   214,   214,
     214,   215,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   221,   221,   221,   222,   222,   222,   222,   223,
     223,   224,   225,   226,   227,   228,   229,   231,   230,   232,
     233,   233,   234,   235,   235,   236,   236,   237,   238,   238,
     238,   239,   239,   239,   240,   241,   241,   242,   243,   243,
     243,   243,   243,   244,   244,   244,   244,   245,   245,   245,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   248,
     248,   248,   248,   248,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   253,   254
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     5,     3,     4,     1,     3,     1,
       2,     3,     2,     0,     0,     1,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     4,     3,     3,     1,     2,
       1,     2,     2,     4,     3,     2,     2,     4,     3,     2,
       3,     1,     3,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     0,     1,     1,     3,     0,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     1,     2,     0,     4,     1,     3,
       1,     3,     2,     2,     0,     1,     5,     3,     2,     2,
       0,     1,     2,     2,     1,     0,     3,     6,     0,     2,
       6,     5,     9,    10,     8,     7,     0,     4,     0,     4,
       0,     4,     5,     5,     2,     3,     1,     1,     2,     2,
       4,     3,     3,     2,     3,     0,     4,     3,     4,     3,
       3,     5,     2,     2,     1,     1,     1,     6,     8,     6,
       8,     0,     1,     4,     4,     1,     3,     1,     3,     3,
       2,     1,     1,     1,     1,     1,     1,     0,     3,     2,
       1,     3,     1,     0,     1,     7,     7,     6,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     4,     1,     2,
       2,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    20,   277,     0,   164,   277,     0,     0,     0,
      20,    20,     7,     0,     0,   277,   277,     0,     0,   277,
       0,     0,   282,     0,    17,    18,   276,   272,   273,   274,
     275,   277,   277,   277,   277,   277,   277,     0,   277,   277,
     271,     0,     0,     4,    43,    12,    11,     8,    48,    64,
      63,    67,    70,    80,    84,    87,    91,   104,   114,   118,
     122,   126,   130,   134,   150,   166,   215,     6,   172,   173,
     174,   176,   177,   178,   179,   180,   181,   182,   183,   175,
     184,   185,     5,    44,   214,    15,    14,    13,    10,    16,
      19,     0,   189,   188,   186,   187,   191,   190,   228,    21,
      20,    33,    48,    49,    10,   196,   198,   204,   204,   230,
     165,    67,    73,   168,   277,   277,   226,     0,     0,   277,
     277,   245,    71,     0,     0,     0,    72,   294,     0,     0,
     280,   279,    76,    77,    75,    74,     0,    29,    22,     0,
     277,    27,   193,     0,    34,     0,   194,     0,    15,    14,
      10,    78,    79,     1,     2,     3,     0,   277,   277,    51,
       0,   277,    52,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,    69,    68,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,     0,     0,     0,     0,    41,    42,    40,    47,
       0,     0,   277,   203,   205,     0,   202,     0,     0,    48,
      66,    63,    65,    67,     0,    98,   109,   116,   120,   124,
     128,   132,   136,   163,   170,     0,   169,     0,     0,     0,
     261,   261,     0,     0,     0,   250,     0,     0,   249,   247,
       0,     0,     0,     0,     0,     0,   292,   291,   293,   295,
     296,   298,   303,   307,   310,   314,   319,   324,   326,   328,
     330,   332,   334,     0,     0,     9,    25,   277,    30,    23,
       0,    31,    35,    32,   277,   192,   195,    46,    59,     0,
      61,     0,    54,     0,   138,   148,   147,   146,   149,   144,
     143,   145,   142,   141,   140,   139,    81,    82,    83,    85,
      86,    90,    89,    88,    97,    96,    95,    94,    93,    92,
     106,   105,   108,   107,   115,   119,   123,   127,     0,   131,
     167,   216,   244,   278,   229,   199,   197,   212,   207,   231,
       0,   204,   200,   210,    55,     0,   277,    52,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   164,   277,     0,     0,
     227,   267,     0,   262,   265,     0,     0,     0,   246,   252,
       0,   248,   277,   297,   299,   300,   301,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     281,    26,    28,   277,    36,    37,    39,   277,    60,    45,
      53,   277,     0,   164,   209,   277,   277,   208,   211,    54,
       0,   151,   161,   160,   159,   162,   157,   156,   158,   155,
     154,   153,   152,     0,   103,   102,   101,   100,    99,   111,
     110,   113,   112,   117,   121,   125,   129,     0,   133,     0,
     171,     0,   233,   221,     0,     0,     0,   232,   218,     0,
       0,   304,   305,   306,   308,   309,   313,   312,   311,   318,
     317,   316,   315,   321,   320,   323,   322,   325,   327,   329,
     331,   333,     0,   288,    24,    38,    62,   135,   201,     0,
       0,   213,    53,     0,   277,   164,   277,     0,   234,     0,
     236,   237,     0,     0,   259,     0,   268,   266,     0,   257,
       0,   217,     0,   220,     0,     0,     0,     0,   164,     0,
     225,   137,     0,     0,     0,   235,   238,   239,     0,   270,
     256,     0,   254,   255,   264,   263,     0,   219,   251,     0,
       0,   286,   285,     0,   224,     0,     0,     0,   260,   269,
     253,     0,   258,     0,     0,   222,     0,     0,     0,   223,
       0,   288,   206,   287
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    42,    43,    44,    45,   117,    46,   139,   140,
      47,   143,   283,   144,   145,    48,    49,   220,    50,   222,
     159,   289,    51,   224,    52,    53,    54,    55,    56,    57,
     226,    58,   227,    59,   228,    60,   229,    61,   230,    62,
     231,    63,   232,    64,   233,    65,   234,   109,    66,   235,
     236,   146,    68,   147,    69,   211,   105,   340,   106,   213,
     554,   107,   342,   437,   214,   438,    70,    71,   202,    72,
     531,    73,    74,   239,    75,   205,    76,   217,    77,    78,
     472,   519,   520,   521,    79,    80,   244,    81,   248,   249,
     551,   552,    82,    83,   382,   383,   524,    84,    85,    86,
      87,   104,    89,    90,    91,    92,   131,    93,   503,    94,
     536,   537,   259,   260,   261,    95,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -460
static const yytype_int16 yypact[] =
{
    2471,   -36,   -53,    43,   -53,  2962,  3096,   -74,   -70,   -59,
     -53,   -53,  -460,   -44,   -23,  3096,  3096,   -24,  2593,  3096,
      81,    80,  -460,   -53,  -460,  -460,  -460,  -460,  -460,  -460,
    -460,  3096,  3096,  3096,  3096,  3096,  2617,  1601,  3096,  3096,
    -460,   209,  1727,  -460,  -460,  -460,  -460,  -460,    87,  -460,
     126,   267,  -460,  -460,   159,   110,   232,    86,   135,   140,
     106,   184,   190,   102,  -460,  -460,   228,  -460,  -460,  -460,
    -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,
    -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,   220,  -460,
    -460,   201,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,
     -53,   192,    87,  -460,  -460,   280,  -460,   285,    30,  -460,
     228,    97,  -460,  2735,  3096,  3096,  -460,   260,   270,  3096,
    3096,   228,  -460,  1601,   205,   372,  -460,  -460,   313,    -4,
    -460,   296,  -460,  -460,  -460,  -460,   -20,  -460,  -460,   -33,
    2753,  -460,  -460,   279,   339,   326,  -460,  1849,   328,   329,
     220,  -460,  -460,  -460,  -460,  -460,   -53,  3029,  3096,  -460,
     -53,  3096,  -460,  3096,  3096,  3096,  3096,  3096,  3096,  3096,
    3096,  3096,  3096,  3096,  3096,  -460,  -460,  3096,  3096,  3096,
    3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,
    3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,
    3096,  3096,   297,  2593,   353,   297,  -460,  -460,  -460,  -460,
     -53,   297,  3096,  -460,  -460,   -53,  -460,   297,   -53,    31,
     306,   163,  -460,   558,   400,   232,   122,   153,   330,   332,
     334,   336,   138,  -460,  -460,   305,   355,    16,    25,   297,
     -53,   -53,    26,    47,   297,  -460,   -24,   316,   424,  -460,
     318,    -4,    -4,    -4,    -4,    -4,  -460,  -460,  -460,  -460,
    -460,  -460,  -460,   248,   226,   291,   152,   161,   340,   342,
     344,   346,   348,   323,   -53,  -460,  -460,  2868,  -460,  -460,
     365,  -460,   192,   366,  3096,  -460,  -460,  -460,  -460,    68,
    -460,   -29,  -460,   -13,  -460,  -460,  -460,  -460,  -460,  -460,
    -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,   159,
     159,   110,   110,   110,   232,   232,   232,   232,   232,   232,
      86,    86,    86,    86,   135,   140,   106,   184,   356,   190,
    -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,
     -35,   285,   419,   105,  -460,   -53,  3096,   423,  3096,  3096,
    3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,
    3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,  3096,
    3096,  3096,  3096,  3096,  3096,  3096,  2962,  3096,   325,  2593,
    -460,  -460,   358,   373,   361,   363,  2593,  2593,  -460,  -460,
     -53,  -460,  3096,  -460,  -460,  -460,  -460,  -460,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,   689,
    -460,  -460,  -460,  2886,  -460,   192,  -460,  3096,  -460,  -460,
    -460,  3096,   -53,  2962,  -460,  3096,  3096,  -460,  -460,   454,
      -3,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,
    -460,  -460,  -460,    75,   232,   232,   232,   232,   232,   122,
     122,   122,   122,   153,   330,   332,   334,   391,   336,   359,
    -460,     3,  -460,  -460,   -72,   173,   -52,  -460,   477,   368,
      77,  -460,  -460,  -460,   248,   248,   226,   226,   226,   291,
     291,   291,   291,   152,   152,   152,   152,   161,   340,   342,
     344,   346,   847,   311,  -460,  -460,  -460,  -460,  -460,   364,
      95,  -460,   463,  2593,  3096,  2962,  3096,   401,  -460,     4,
    -460,  -460,   -53,  1975,  -460,   -53,  -460,   361,   -53,  -460,
    2593,  -460,   -24,  -460,   374,  2101,   460,   461,  2962,  2593,
    -460,  -460,   377,    41,   975,  -460,  -460,  -460,   375,  -460,
    -460,  2223,  -460,  -460,  -460,   406,   375,  -460,  -460,    -4,
    2349,  -460,  -460,   380,  -460,  2593,  1101,  1227,  -460,  -460,
    -460,   381,  -460,   388,  2593,  -460,  1353,   -53,  1479,  -460,
     379,   475,  -460,  -460
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -460,  -460,  -460,   467,  -460,  -460,   157,  -460,   378,  -130,
    -460,  -460,  -460,  -263,  -460,    21,   509,  -460,   402,  -460,
     -38,  -460,   472,  -460,  -460,    22,   200,   -54,   421,    76,
     -91,   319,   147,   324,   148,   327,   149,   331,   154,   337,
     151,  -460,  -460,  -460,  -460,   202,  -272,  -361,    17,  -460,
    -460,    29,   -16,  -392,  -460,  -460,  -460,  -460,   333,  -102,
    -460,  -210,   104,  -460,  -460,  -460,  -460,  -460,  -460,  -460,
    -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,  -460,
    -460,  -460,    19,    27,  -460,  -460,  -460,  -460,  -460,   292,
    -460,   -10,  -427,  -460,   304,  -460,  -459,     6,   -34,    56,
    -113,     0,   -83,  -460,  -460,  -460,  -460,  -460,   -31,  -460,
    -460,   -32,  -460,   528,  -460,  -460,  -219,   -17,     7,   -12,
      -6,   136,   139,   137,   141,   143,  -460,  -246
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -291
static const yytype_int16 yytable[] =
{
      88,   124,    99,   148,   108,   393,   216,    97,   341,   277,
      99,   118,   162,   516,   516,   469,   257,   529,    88,   424,
     522,    30,   110,   130,   102,   517,   517,   502,   112,    67,
     381,   381,   121,   394,   395,   396,   397,   150,   122,    96,
     528,   126,    88,   432,   113,   137,   258,   125,   114,   201,
     523,     3,   136,   132,   133,   134,   135,   -50,   201,   115,
     151,   152,   100,    12,   209,   201,    26,   206,    28,    29,
     523,    67,   509,   127,   119,   201,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   276,   568,
      40,   433,   429,   149,   201,   120,   553,   572,   123,   275,
      99,   208,   467,   201,   201,   470,   252,   253,   430,   212,
      24,    25,   185,    26,    27,    28,    29,    30,   512,   201,
     254,   255,   215,    88,   553,   201,   518,   545,   311,   312,
     313,   237,   238,   566,   219,   378,   242,   243,   257,   257,
     257,   257,   257,   560,   379,   386,   427,    88,   156,   157,
     423,   158,   567,   201,   542,   201,   287,   207,   127,    98,
     292,    35,   505,    36,   511,   101,   387,   116,   258,   258,
     258,   258,   258,   201,   576,   291,   286,   563,   293,   481,
     482,   483,   344,   347,   436,   256,   502,   428,   186,   187,
     188,   189,   190,   199,   513,   200,   533,   215,   129,   306,
     307,   308,   196,    88,   156,   157,   245,   158,   331,   153,
     108,   334,   175,   176,   539,   338,   246,   336,   343,   247,
     180,   181,   341,   339,   361,   362,   363,   364,   365,   374,
     389,   375,   332,   191,   192,   193,   194,   195,   141,   434,
     384,   384,   541,   160,   157,   380,   161,    30,   206,   525,
     388,   366,   367,   368,   369,   406,   407,   408,   409,   410,
     411,   412,   413,    27,    28,   526,    30,   320,   321,   322,
     323,   177,   178,   179,   420,   459,   460,   461,   462,   197,
     345,   157,   208,   346,   198,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   201,   256,   256,   256,
     256,   256,   203,   573,   204,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   401,   402,   207,   182,
     183,   184,   141,   534,   535,   439,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   210,   290,
     398,   399,   400,   440,   212,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   453,   240,    88,
     309,   310,   175,   176,   484,   485,    88,    88,   241,   250,
     479,   206,   251,   110,   489,   490,   491,   492,   403,   404,
     405,   328,   281,   330,   493,   494,   495,   496,   473,   480,
     486,   487,   488,   274,   337,   477,   478,   282,   284,    88,
     -41,   -42,   333,    40,   157,   208,   360,   370,   371,   372,
     373,   376,   343,   377,   390,   246,   392,   414,   415,   416,
     417,   418,   419,   137,   425,   435,   257,   471,   431,   -56,
     110,   475,   510,   215,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   527,   258,   474,   111,   422,
     -58,   207,   476,   514,   530,   515,   426,   532,   111,   -57,
     538,   111,   559,   544,   561,   562,   565,   523,   571,   574,
     582,   577,    88,   111,   111,   111,   111,   578,   535,   155,
     111,   111,   103,    88,   324,   221,   558,   463,   280,   464,
     325,   465,   548,    88,   326,   555,   468,   466,   556,   327,
      88,   286,   110,   543,   225,    88,   508,   329,   546,    88,
     391,   570,   540,   335,    88,   385,   547,   581,   128,   583,
     497,    88,   550,   499,   498,   110,     0,     0,   500,   557,
      88,   501,     0,     0,     0,    88,    88,    88,   564,     0,
       0,     0,     0,     0,    88,     0,    88,   580,    88,     0,
     550,     0,     0,     0,     0,   223,     0,     0,     0,   286,
       0,     0,     0,     0,   575,     0,   286,     0,     0,     0,
       0,     0,     0,   579,     0,   286,   314,   315,   316,   317,
     318,   319,     0,     0,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,     0,     0,     0,   506,
       0,     0,     0,   507,     0,     0,     0,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,     0,   111,   175,   176,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     2,     0,     3,     4,     0,
       0,     5,     6,     0,     7,     8,     9,    10,   100,    12,
      13,     0,    14,    15,    16,     0,    17,    18,    19,    20,
      21,  -283,  -283,  -283,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,     0,   454,   455,   456,   457,   458,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,     0,   225,    31,
      32,     0,  -277,     0,    33,    34,     0,    35,     0,    36,
       0,    37,     0,    38,    39,    40,     0,     0,     0,     0,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,     0,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   223,   111,     1,   223,
       0,     0,     0,     2,     0,     3,     4,   225,     0,     5,
       6,     0,     7,     8,     9,    10,   100,    12,    13,     0,
      14,    15,    16,     0,    17,    18,    19,    20,    21,  -284,
    -284,  -284,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
    -277,     0,    33,    34,     0,    35,     0,    36,     0,    37,
       0,    38,    39,    40,     0,     0,     1,     0,     0,     0,
       0,     2,     0,     3,     4,  -243,   223,     5,     6,     0,
       7,     8,     9,    10,   100,    12,    13,  -243,    14,    15,
      16,     0,    17,    18,    19,    20,    21,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,  -277,     0,
      33,    34,     0,    35,     0,    36,     0,    37,  -243,    38,
      39,    40,     1,     0,     0,     0,     0,     2,     0,     3,
       4,  -241,     0,     5,     6,     0,     7,     8,     9,    10,
     100,    12,    13,  -241,    14,    15,    16,     0,    17,    18,
      19,    20,    21,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,  -277,     0,    33,    34,     0,    35,
       0,    36,     0,    37,  -241,    38,    39,    40,     1,     0,
       0,     0,     0,     2,     0,     3,     4,  -242,     0,     5,
       6,     0,     7,     8,     9,    10,   100,    12,    13,  -242,
      14,    15,    16,     0,    17,    18,    19,    20,    21,     0,
       0,     0,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
    -277,     0,    33,    34,     0,    35,     0,    36,     0,    37,
    -242,    38,    39,    40,     1,     0,     0,     0,     0,     2,
       0,     3,     4,  -240,     0,     5,     6,     0,     7,     8,
       9,    10,   100,    12,    13,  -240,    14,    15,    16,     0,
      17,    18,    19,    20,    21,     0,     0,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,  -277,     0,    33,    34,
       0,    35,     0,    36,     0,    37,  -240,    38,    39,    40,
       1,     0,     0,     0,     0,     2,     0,     3,     4,     0,
       0,     5,     6,     0,     7,     8,     9,    10,   100,    12,
      13,     0,    14,    15,    16,     0,    17,    18,    19,    20,
      21,     0,  -283,  -283,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,  -277,     0,    33,    34,     0,    35,     0,    36,
       0,    37,     1,    38,    39,    40,     0,     2,     0,     3,
       4,     0,     0,     5,     6,     0,     7,     8,     9,    10,
     100,    12,    13,     0,    14,    15,    16,     0,    17,    18,
      19,    20,    21,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,  -277,     0,    33,    34,     0,    35,
       0,    36,     0,    37,   142,    38,    39,    40,     1,     0,
       0,     0,     0,     2,     0,     3,     4,     0,     0,     5,
       6,     0,     7,     8,     9,    10,    11,    12,    13,     0,
      14,    15,    16,     0,    17,    18,    19,    20,    21,     0,
       0,     0,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,     0,    26,    27,    28,
      29,    30,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
    -277,     0,    33,    34,     0,    35,     0,    36,     0,    37,
       1,    38,    39,    40,     0,     2,     0,     3,     4,     0,
       0,     5,     6,     0,     7,     8,     9,    10,   100,    12,
      13,     0,    14,    15,    16,     0,    17,    18,    19,    20,
      21,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,  -277,     0,    33,    34,     0,    35,     0,    36,
       0,    37,   285,    38,    39,    40,     1,     0,     0,     0,
       0,     2,     0,     3,     4,     0,     0,     5,     6,     0,
       7,     8,     9,    10,    11,    12,    13,     0,    14,    15,
      16,     0,    17,    18,    19,    20,    21,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,  -277,     0,
      33,    34,     0,    35,     0,    36,     0,    37,   549,    38,
      39,    40,     1,     0,     0,     0,     0,     2,     0,     3,
       4,     0,     0,     5,     6,     0,     7,     8,     9,    10,
     100,    12,    13,     0,    14,    15,    16,     0,    17,    18,
      19,    20,    21,     0,     0,  -289,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,  -277,     0,    33,    34,     0,    35,
       0,    36,     0,    37,     1,    38,    39,    40,     0,     2,
       0,     3,     4,     0,     0,     5,     6,     0,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,     0,
      17,    18,    19,    20,    21,     0,     0,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,  -277,     0,    33,    34,
       0,    35,     0,    36,     0,    37,   569,    38,    39,    40,
       1,     0,     0,     0,     0,     2,     0,     3,     4,     0,
       0,     5,     6,     0,     7,     8,     9,    10,   100,    12,
      13,     0,    14,    15,    16,     0,    17,    18,    19,    20,
      21,     0,     0,  -290,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    26,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,  -277,     0,    33,    34,     0,    35,     0,    36,
       0,    37,     1,    38,    39,    40,     0,     2,     0,     3,
       4,     0,     0,     5,     6,     0,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,    16,     0,    17,    18,
      19,    20,    21,     0,     0,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,  -277,     0,    33,    34,     0,    35,
       0,    36,     0,    37,     1,    38,    39,    40,     0,     2,
       0,     3,     4,     0,     0,     5,     6,     0,     7,     8,
       9,    10,   100,    12,    13,     0,    14,    15,    16,     0,
      17,    18,    19,    20,    21,     3,     0,     0,    22,    23,
       6,     0,     0,     0,     0,     0,   100,    12,     0,     0,
       0,     0,    16,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,  -277,     0,    33,    34,
       0,    35,     0,    36,     0,    37,     0,    38,    39,    40,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    33,    34,     0,    35,     0,    36,   138,   101,
       0,    38,    39,     3,   218,     0,     0,     0,     6,     0,
       0,     0,     0,     0,   100,    12,     0,     0,     0,     0,
      16,     3,     0,     0,    19,     0,     6,     0,     0,     0,
       0,     0,   100,    12,     0,     0,     0,     0,    16,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,  -277,     0,
      33,    34,     0,    35,     0,    36,     0,   101,     0,    38,
      39,     0,     0,    31,    32,     0,     0,     0,    33,    34,
       0,    35,     0,    36,   279,   101,     3,    38,    39,     0,
       0,     6,     0,     0,     0,     0,     0,   100,    12,     0,
       0,     0,     0,    16,     3,     0,     0,    19,     0,     6,
       0,     0,     0,     0,     0,   100,    12,     0,     0,     0,
       0,    16,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,   278,     0,     0,     0,
       0,     0,     0,    24,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,   278,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     6,     0,     0,    31,    32,
       0,   100,    12,    33,    34,     0,    35,    16,    36,   421,
     101,    19,    38,    39,     0,     0,    31,    32,     0,     0,
       0,    33,    34,     0,    35,     0,    36,   504,   101,     0,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,     0,    26,    27,    28,    29,    30,     3,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,   100,    12,
       0,     0,     0,     0,    16,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,  -277,     0,    33,    34,     0,
      35,     0,    36,     0,   101,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,    24,    25,     0,    26,
      27,    28,    29,    30,     3,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   100,    12,     0,     0,     0,
       0,    16,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    33,    34,     0,    35,   288,    36,
       0,   101,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    33,    34,     0,    35,     0,    36,     0,   101,     0,
      38,    39
};

static const yytype_int16 yycheck[] =
{
       0,    17,     2,    37,     4,   251,   108,     1,   218,   139,
      10,    11,    50,    10,    10,   376,   129,   476,    18,   282,
      92,    74,     5,    23,     3,    22,    22,   419,     6,     0,
     240,   241,    15,   252,   253,   254,   255,    37,    16,    75,
      92,    19,    42,    78,   118,    78,   129,    18,   118,    78,
     122,     8,    35,    31,    32,    33,    34,    26,    78,   118,
      38,    39,    19,    20,   102,    78,    70,   101,    72,    73,
     122,    42,   433,    77,   118,    78,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   121,   548,
     126,   126,   121,    37,    78,   118,   523,   556,   122,   119,
     100,   101,   374,    78,    78,   377,   110,   111,   121,    79,
      67,    68,    26,    70,    71,    72,    73,    74,   121,    78,
     124,   125,    92,   123,   551,    78,   123,   123,   182,   183,
     184,   114,   115,    92,   113,   119,   119,   120,   251,   252,
     253,   254,   255,   535,   119,   119,    78,   147,   117,   118,
     280,   120,   544,    78,   515,    78,   156,   101,    77,     2,
     160,   118,   425,   120,   436,   122,   119,    10,   251,   252,
     253,   254,   255,    78,   566,   158,   147,   538,   161,   398,
     399,   400,   220,   221,    79,   129,   578,   119,   102,   103,
     104,   105,   106,    91,   119,    93,   119,    92,   118,   177,
     178,   179,    96,   203,   117,   118,     1,   120,   202,     0,
     210,   205,   115,   116,   119,   215,    11,   211,   218,    14,
     110,   111,   432,   217,   102,   103,   104,   105,   106,    91,
     246,    93,   203,    98,    99,   100,   101,    97,    36,   341,
     240,   241,   514,   117,   118,   239,   120,    74,   282,    76,
     244,    98,    99,   100,   101,   103,   104,   105,   106,    98,
      99,   100,   101,    71,    72,   475,    74,   191,   192,   193,
     194,   112,   113,   114,   274,   366,   367,   368,   369,    95,
     117,   118,   282,   120,    94,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,    78,   251,   252,   253,
     254,   255,    92,   559,   113,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   110,   111,   282,   107,
     108,   109,   140,    32,    33,   345,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    78,   157,
     112,   113,   114,   346,    79,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   360,   118,   379,
     180,   181,   115,   116,   401,   402,   386,   387,   118,    17,
     390,   425,    79,   376,   406,   407,   408,   409,   107,   108,
     109,   199,   123,   201,   410,   411,   412,   413,   379,   392,
     403,   404,   405,   117,   212,   386,   387,    78,    92,   419,
      92,    92,    69,   126,   118,   425,    26,    97,    96,    95,
      94,   126,   432,    78,   118,    11,   118,    97,    96,    95,
      94,    93,   119,    78,    78,    26,   559,   122,    92,    26,
     433,    78,   435,    92,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   475,   559,   119,     6,   277,
      26,   425,   119,    92,     7,   126,   284,   119,    16,    26,
     126,    19,   118,    92,    34,    34,   119,   122,    92,   119,
     121,   120,   502,    31,    32,    33,    34,   119,    33,    42,
      38,    39,     3,   513,   195,   113,   532,   370,   140,   371,
     196,   372,   522,   523,   197,   525,   375,   373,   528,   198,
     530,   502,   515,   516,   113,   535,   432,   200,   519,   539,
     248,   551,   513,   210,   544,   241,   519,   578,    20,   581,
     414,   551,   523,   416,   415,   538,    -1,    -1,   417,   530,
     560,   418,    -1,    -1,    -1,   565,   566,   567,   539,    -1,
      -1,    -1,    -1,    -1,   574,    -1,   576,   577,   578,    -1,
     551,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,   560,
      -1,    -1,    -1,    -1,   565,    -1,   567,    -1,    -1,    -1,
      -1,    -1,    -1,   574,    -1,   576,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,   559,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,   427,
      -1,    -1,    -1,   431,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,   200,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,    -1,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,    -1,   377,   110,
     111,    -1,   113,    -1,   115,   116,    -1,   118,    -1,   120,
      -1,   122,    -1,   124,   125,   126,    -1,    -1,    -1,    -1,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,    -1,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,     1,   377,
      -1,    -1,    -1,     6,    -1,     8,     9,   436,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   436,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,    -1,   118,    -1,   120,    -1,   122,
      -1,   124,   125,   126,    -1,    -1,     1,    -1,    -1,    -1,
      -1,     6,    -1,     8,     9,    10,   514,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,    -1,   118,    -1,   120,    -1,   122,   123,   124,
     125,   126,     1,    -1,    -1,    -1,    -1,     6,    -1,     8,
       9,    10,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,   120,    -1,   122,   123,   124,   125,   126,     1,    -1,
      -1,    -1,    -1,     6,    -1,     8,     9,    10,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,    -1,   118,    -1,   120,    -1,   122,
     123,   124,   125,   126,     1,    -1,    -1,    -1,    -1,     6,
      -1,     8,     9,    10,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,
      -1,   118,    -1,   120,    -1,   122,   123,   124,   125,   126,
       1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,   116,    -1,   118,    -1,   120,
      -1,   122,     1,   124,   125,   126,    -1,     6,    -1,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,   120,    -1,   122,   123,   124,   125,   126,     1,    -1,
      -1,    -1,    -1,     6,    -1,     8,     9,    -1,    -1,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,
     113,    -1,   115,   116,    -1,   118,    -1,   120,    -1,   122,
       1,   124,   125,   126,    -1,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,   116,    -1,   118,    -1,   120,
      -1,   122,   123,   124,   125,   126,     1,    -1,    -1,    -1,
      -1,     6,    -1,     8,     9,    -1,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,    -1,   118,    -1,   120,    -1,   122,   123,   124,
     125,   126,     1,    -1,    -1,    -1,    -1,     6,    -1,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,   120,    -1,   122,     1,   124,   125,   126,    -1,     6,
      -1,     8,     9,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,
      -1,   118,    -1,   120,    -1,   122,   123,   124,   125,   126,
       1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,    -1,
      -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,   116,    -1,   118,    -1,   120,
      -1,   122,     1,   124,   125,   126,    -1,     6,    -1,     8,
       9,    -1,    -1,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,   120,    -1,   122,     1,   124,   125,   126,    -1,     6,
      -1,     8,     9,    -1,    -1,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,     8,    -1,    -1,    35,    36,
      13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,
      -1,   118,    -1,   120,    -1,   122,    -1,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,
      -1,    -1,   115,   116,    -1,   118,    -1,   120,   121,   122,
      -1,   124,   125,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      25,     8,    -1,    -1,    29,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,   116,    -1,   118,    -1,   120,    -1,   122,    -1,   124,
     125,    -1,    -1,   110,   111,    -1,    -1,    -1,   115,   116,
      -1,   118,    -1,   120,   121,   122,     8,   124,   125,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    25,     8,    -1,    -1,    29,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    13,    -1,    -1,   110,   111,
      -1,    19,    20,   115,   116,    -1,   118,    25,   120,   121,
     122,    29,   124,   125,    -1,    -1,   110,   111,    -1,    -1,
      -1,   115,   116,    -1,   118,    -1,   120,   121,   122,    -1,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    70,    71,    72,    73,    74,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,   116,    -1,
     118,    -1,   120,    -1,   122,    -1,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
      71,    72,    73,    74,     8,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
     111,    -1,    -1,    -1,   115,   116,    -1,   118,   119,   120,
      -1,   122,    -1,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,    -1,
      -1,   115,   116,    -1,   118,    -1,   120,    -1,   122,    -1,
     124,   125
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,     8,     9,    12,    13,    15,    16,    17,
      18,    19,    20,    21,    23,    24,    25,    27,    28,    29,
      30,    31,    35,    36,    67,    68,    70,    71,    72,    73,
      74,   110,   111,   115,   116,   118,   120,   122,   124,   125,
     126,   128,   129,   130,   131,   132,   134,   137,   142,   143,
     145,   149,   151,   152,   153,   154,   155,   156,   158,   160,
     162,   164,   166,   168,   170,   172,   175,   178,   179,   181,
     193,   194,   196,   198,   199,   201,   203,   205,   206,   211,
     212,   214,   219,   220,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   234,   236,   242,    75,   224,   133,   228,
      19,   122,   142,   143,   228,   183,   185,   188,   228,   174,
     175,   149,   152,   118,   118,   118,   133,   133,   228,   118,
     118,   175,   152,   122,   179,   178,   152,    77,   240,   118,
     228,   233,   152,   152,   152,   152,   175,    78,   121,   135,
     136,   172,   123,   138,   140,   141,   178,   180,   225,   226,
     228,   152,   152,     0,    75,   130,   117,   118,   120,   147,
     117,   120,   147,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,   115,   116,   112,   113,   114,
     110,   111,   107,   108,   109,    26,   102,   103,   104,   105,
     106,    98,    99,   100,   101,    97,    96,    95,    94,    91,
      93,    78,   195,    92,   113,   202,   225,   226,   228,   147,
      78,   182,    79,   186,   191,    92,   186,   204,     9,   142,
     144,   145,   146,   149,   150,   155,   157,   159,   161,   163,
     165,   167,   169,   171,   173,   176,   177,   175,   175,   200,
     118,   118,   175,   175,   213,     1,    11,    14,   215,   216,
      17,    79,   110,   111,   124,   125,   226,   227,   229,   239,
     240,   241,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   117,   119,   121,   136,    78,   121,
     135,   123,    78,   139,    92,   123,   178,   228,   119,   148,
     172,   175,   228,   175,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   152,   152,   152,   153,
     153,   154,   154,   154,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   156,   158,   160,   162,   164,   172,   166,
     172,   224,   178,    69,   224,   185,   224,   172,   228,   224,
     184,   188,   189,   228,   147,   117,   120,   147,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      26,   102,   103,   104,   105,   106,    98,    99,   100,   101,
      97,    96,    95,    94,    91,    93,   126,    78,   119,   119,
     224,   188,   221,   222,   228,   221,   119,   119,   224,   179,
     118,   216,   118,   254,   243,   243,   243,   243,   112,   113,
     114,   110,   111,   107,   108,   109,   103,   104,   105,   106,
      98,    99,   100,   101,    97,    96,    95,    94,    93,   119,
     228,   121,   172,   136,   140,    78,   172,    78,   119,   121,
     121,    92,    78,   126,   186,    26,    79,   190,   192,   228,
     175,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   175,   155,   155,   155,   155,   155,   157,
     157,   157,   157,   159,   161,   163,   165,   173,   167,   174,
     173,   122,   207,   178,   119,    78,   119,   178,   178,   228,
     175,   243,   243,   243,   244,   244,   245,   245,   245,   246,
     246,   246,   246,   247,   247,   247,   247,   248,   249,   250,
     251,   252,   180,   235,   121,   140,   172,   172,   189,   174,
     175,   173,   121,   119,    92,   126,    10,    22,   123,   208,
     209,   210,    92,   122,   223,    76,   188,   228,    92,   223,
       7,   197,   119,   119,    32,    33,   237,   238,   126,   119,
     178,   173,   174,   175,    92,   123,   209,   210,   228,   123,
     178,   217,   218,   219,   187,   228,   228,   178,   179,   118,
     180,    34,    34,   174,   178,   119,    92,   180,   223,   123,
     218,    92,   223,   254,   119,   178,   180,   120,   119,   178,
     228,   235,   121,   238
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 266 "criscript.y"
    {
	 	if( !CParser::getparser()->getCodeGen()->isMultiPasses() )
	 	{
			CParser::getparser()->getCodeGen()->endOfFile();
		}
		YYACCEPT;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 278 "criscript.y"
    {
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 282 "criscript.y"
    {
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 287 "criscript.y"
    {
	 	if( !CParser::getparser()->getCodeGen()->isMultiPasses() )
	 	{
			CParser::getparser()->getCodeGen()->parseFunctionDeclarationNode( (yyvsp[(1) - (1)].pObjectData) );
		}
		else
		{
			//Keep statements to the list.
			CParser::getparser()->getCodeGen()->updateStatementTree( (yyvsp[(1) - (1)].pObjectData) );
		}
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 300 "criscript.y"
    {
	 	if( !CParser::getparser()->getCodeGen()->isMultiPasses() )
	 	{
			CParser::getparser()->getCodeGen()->parseStatementNodeTree( (yyvsp[(1) - (1)].pObjectData) );
		}
		else
		{
			//Keep statements to the list.
			CParser::getparser()->getCodeGen()->updateStatementTree( (yyvsp[(1) - (1)].pObjectData) );
		}
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 314 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_THIS, (yyvsp[(1) - (1)].iFileId), (yyvsp[(1) - (1)].iLineNumber), (yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 319 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->objectLiteral( (yyvsp[(1) - (1)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 324 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 329 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 334 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->arrayLiteral( (yyvsp[(1) - (1)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 339 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 345 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 350 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 355 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 360 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 365 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_NULL, (yyvsp[(1) - (1)].iFileId), (yyvsp[(1) - (1)].iLineNumber), (yyvsp[(1) - (1)].iColumn)  );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 370 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_UNDEFINED, (yyvsp[(1) - (1)].iFileId), (yyvsp[(1) - (1)].iLineNumber), (yyvsp[(1) - (1)].iColumn)  );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 375 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 381 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 386 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 392 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 397 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_UNDEFINED, (yyvsp[(1) - (3)].iFileId), (yyvsp[(1) - (3)].iLineNumber), (yyvsp[(1) - (3)].iColumn) );
		node = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, node );
		// add 1 more 'undefined' node
		node->SetSibling( (yyvsp[(2) - (3)].pObjectData) );
		(yyval.pObjectData) = node;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 406 "criscript.y"
    {
		CCgNodeData* nodetop = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_UNDEFINED, (yyvsp[(1) - (5)].iFileId), (yyvsp[(1) - (5)].iLineNumber), (yyvsp[(1) - (5)].iColumn) );
		nodetop = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, nodetop );
		CCgNodeData* nodetail = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_UNDEFINED, (yyvsp[(1) - (5)].iFileId), (yyvsp[(1) - (5)].iLineNumber), (yyvsp[(1) - (5)].iColumn)  );
		nodetail = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, nodetail );
		// add 1 more 'undefined' node

		if( (yyvsp[(2) - (5)].pObjectData) != NULL )
		{
			nodetop->SetSibling( (yyvsp[(2) - (5)].pObjectData) );
			(yyvsp[(2) - (5)].pObjectData)->SetSibling( (yyvsp[(3) - (5)].pObjectData) );
			(yyvsp[(3) - (5)].pObjectData)->SetSibling( nodetail );
			nodetail->SetSibling( (yyvsp[(4) - (5)].pObjectData) );
			(yyval.pObjectData) = nodetail;		
		}
		else
		{
			nodetop->SetSibling( (yyvsp[(3) - (5)].pObjectData) );
			(yyvsp[(3) - (5)].pObjectData)->SetSibling( nodetail );
			nodetail->SetSibling( (yyvsp[(4) - (5)].pObjectData) );
			(yyval.pObjectData) = nodetop;		
		}
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 431 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 436 "criscript.y"
    {
		CCgNodeData* nodetail = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_UNDEFINED, (yyvsp[(1) - (4)].iFileId), (yyvsp[(1) - (4)].iLineNumber), (yyvsp[(1) - (4)].iColumn) );
		nodetail = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, nodetail );
		(yyvsp[(2) - (4)].pObjectData)->SetSibling( nodetail );
		nodetail->SetSibling( (yyvsp[(3) - (4)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(2) - (4)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 446 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, (yyvsp[(1) - (1)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 452 "criscript.y"
    {
		if( (yyvsp[(2) - (3)].pObjectData) != NULL )
		{
			(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(2) - (3)].pObjectData) );
			CCgNodeData* node = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, (yyvsp[(3) - (3)].pObjectData) );
			(yyvsp[(2) - (3)].pObjectData)->SetSibling( node );
			(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		}
		else
		{
			CCgNodeData* node = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, (yyvsp[(3) - (3)].pObjectData) );
			(yyvsp[(1) - (3)].pObjectData)->SetSibling( node );
			(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		}
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 470 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 475 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->identifier( STRING_INTERNAL_UNDEFINED, (yyvsp[(1) - (2)].iFileId), (yyvsp[(1) - (2)].iLineNumber), (yyvsp[(1) - (2)].iColumn) );
		node = CParser::getparser()->getCodeGen()->propertyNameAndValue( NULL, node );

 		if( (yyvsp[(1) - (2)].pObjectData) != NULL )
 		{
			(yyvsp[(1) - (2)].pObjectData)->SetSibling( node );	
 		}
 		else
			(yyval.pObjectData) = node;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 489 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 498 "criscript.y"
    {
		(yyvsp[(1) - (2)].pObjectData)->SetSibling( (yyvsp[(2) - (2)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 504 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 510 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 515 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 520 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 525 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 530 "criscript.y"
    {
 		if( (yyvsp[(1) - (3)].pObjectData) != NULL )
 		{ 
			(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
			(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		}
		else
		{
			(yyval.pObjectData) = (yyvsp[(3) - (3)].pObjectData);
		}
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 544 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->propertyNameAndValue( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 550 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 555 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 560 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 566 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 571 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 576 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyAccessExpressionByExp( (yyvsp[(1) - (4)].pObjectData), (yyvsp[(3) - (4)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 581 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyAccessExpressionById( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 586 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->newOperator( (yyvsp[(2) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 592 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 597 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->newOperator( (yyvsp[(2) - (2)].pObjectData), NULL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 603 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 609 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->callExpression( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 614 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->callExpression( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 619 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyAccessExpressionByExp( (yyvsp[(1) - (4)].pObjectData), (yyvsp[(3) - (4)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 624 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyAccessExpressionById( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 630 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->callExpression( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 635 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->callExpression( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 640 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyAccessExpressionByExp( (yyvsp[(1) - (4)].pObjectData), (yyvsp[(3) - (4)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 645 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->propertyAccessExpressionById( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 651 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 656 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 662 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 667 "criscript.y"
    {
		//Note that flipping the order of the arg
		(yyvsp[(3) - (3)].pObjectData)->SetSibling( (yyvsp[(1) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(3) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 675 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 680 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 686 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 691 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 697 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 702 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (2)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->unaryIncOperator( node, true );
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (2)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 709 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (2)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->unaryDecOperator( node, true );
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (2)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 717 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 722 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryDeleteOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 727 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryTypeofOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 732 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryVoidOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 737 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(2) - (2)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->unaryIncOperator( node, false );
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(2) - (2)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 744 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(2) - (2)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->unaryDecOperator( node, false );
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(2) - (2)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 751 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryPlusOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 756 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryMinusOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 761 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryBitwiseNotOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 766 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryLogicalNotOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 772 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 777 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->multiplyOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 782 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->divisionOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 787 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->reminderOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 793 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 798 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->addOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 803 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->subtractOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 809 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 814 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->shiftLeftOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 819 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->shiftRightOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 824 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->shiftRightUnsignedOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 830 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 835 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_GREATER );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 840 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_GREATEREQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 845 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_LESS );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 850 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_LESSEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 855 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->instanceOfOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 860 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->inOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 866 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 871 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_GREATER );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 876 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_GREATEREQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 881 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_LESS );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 886 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_LESSEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 891 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->instanceOfOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 897 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 902 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_EQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 907 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_NOTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 912 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_STRICTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 917 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_STRICTNOTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 923 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 928 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_EQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 933 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_NOTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 938 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_STRICTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 943 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_STRICTNOTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 949 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 954 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseAndOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 960 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 965 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseAndOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 971 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 976 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseXorOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 982 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 987 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseXorOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 993 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 998 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseOrOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1004 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1009 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseOrOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1015 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1020 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->logicalAndOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1026 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1031 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->logicalAndOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1037 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1042 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->logicalOrOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1048 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1053 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->logicalOrOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1059 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1064 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->conditionalExpression( (yyvsp[(1) - (5)].pObjectData), (yyvsp[(3) - (5)].pObjectData), (yyvsp[(5) - (5)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1070 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1075 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->conditionalExpression( (yyvsp[(1) - (5)].pObjectData), (yyvsp[(3) - (5)].pObjectData), (yyvsp[(5) - (5)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1081 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1086 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->multiplyOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1093 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->divisionOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1100 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->addOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1107 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->subtractOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1114 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->bitwiseOrOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1121 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->bitwiseXorOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1128 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->bitwiseAndOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1135 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->shiftRightOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1142 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->shiftRightUnsignedOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1149 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->shiftLeftOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1156 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->reminderOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1163 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1169 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1174 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->multiplyOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1181 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->divisionOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1188 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->addOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1195 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->subtractOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1202 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->bitwiseOrOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1209 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->bitwiseXorOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1216 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->bitwiseAndOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1223 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->shiftRightOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1230 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->shiftRightUnsignedOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1237 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->shiftLeftOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1244 "criscript.y"
    {
		CCgNodeData* node = CParser::getparser()->getCodeGen()->duplicateNode( (yyvsp[(1) - (3)].pObjectData) );
		node = CParser::getparser()->getCodeGen()->reminderOperator( node, (yyvsp[(3) - (3)].pObjectData) ); 
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(1) - (3)].pObjectData), node );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1251 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1257 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1262 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1268 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1273 "criscript.y"
    {
		(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1280 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1285 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1291 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1296 "criscript.y"
    {
		(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1303 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1308 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1313 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1318 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1323 "criscript.y"
    {
		//Clear eval stack
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->expressionStatement( (yyvsp[(1) - (1)].pObjectData) ); 
	;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1328 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1333 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1338 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1343 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1348 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1353 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1358 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1363 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1368 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1373 "criscript.y"
    {
 		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1380 "criscript.y"
    {
 		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1387 "criscript.y"
    {
 		(yyval.pObjectData) = NULL;
 		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
 		/* Do nothing*/
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1395 "criscript.y"
    {
 		(yyval.pObjectData) = NULL;
 		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
 		/* Do nothing*/
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1403 "criscript.y"
    {
		CParser::getparser()->getCodeGen()->reportError( ERROR_SYNTAXERROR, (yyvsp[(1) - (2)].iFileId), (yyvsp[(1) - (2)].iLineNumber), (yyvsp[(1) - (2)].iColumn) );
		(yyval.pObjectData) = NULL;
		yyerrok;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1410 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		//CParser::getparser()->getCodeGen()->endOfFile();
		YYACCEPT;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1418 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1423 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1429 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1434 "criscript.y"
    {
		if( (yyvsp[(1) - (2)].pObjectData) != NULL )
		{
			(yyvsp[(1) - (2)].pObjectData)->SetSibling( (yyvsp[(2) - (2)].pObjectData) );
			(yyval.pObjectData) = (yyvsp[(1) - (2)].pObjectData);
		}
		else
			(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1445 "criscript.y"
    { AUTOSEMICOLON ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1446 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (4)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1452 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1457 "criscript.y"
    {
		(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1464 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1469 "criscript.y"
    {
		(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1476 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->variableDeclaration( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1481 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->typedVariableDeclaration( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1489 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1494 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1500 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
 		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->makeNode( CG_NODE_TYPEDIDENTIFIER,
 														(CG_OPERATIONTYPE)0,
 														(yyvsp[(1) - (5)].pObjectData), (yyvsp[(4) - (5)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1510 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
 		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->makeNode( CG_NODE_TYPEDIDENTIFIER,
 														(CG_OPERATIONTYPE)0,
 														(yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1520 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->variableDeclaration( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1525 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->typedVariableDeclaration( (yyvsp[(1) - (2)].pObjectData), (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1534 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1539 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1545 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1551 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1557 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1562 "criscript.y"
    { AUTOSEMICOLON ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1563 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1569 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->ifStatement( (yyvsp[(3) - (6)].pObjectData), (yyvsp[(5) - (6)].pObjectData), (yyvsp[(6) - (6)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1575 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1580 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1586 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->forStatement( NULL, (yyvsp[(5) - (6)].pObjectData), NULL, (yyvsp[(2) - (6)].pObjectData), true ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1591 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->forStatement( NULL, (yyvsp[(3) - (5)].pObjectData), NULL, (yyvsp[(5) - (5)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1596 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->forStatement( (yyvsp[(3) - (9)].pObjectData), (yyvsp[(5) - (9)].pObjectData), (yyvsp[(7) - (9)].pObjectData), (yyvsp[(9) - (9)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1601 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->forStatement( (yyvsp[(4) - (10)].pObjectData), (yyvsp[(6) - (10)].pObjectData), (yyvsp[(8) - (10)].pObjectData), (yyvsp[(10) - (10)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1606 "criscript.y"
    {
		CCgNodeData* dummy = CParser::getparser()->getCodeGen()->makeFormulaNode( CG_NONE, NULL, NULL, false, false );
//		assert( $4->rhsNode == NULL );
		(yyvsp[(4) - (8)].pObjectData)->rhsNode = dummy;
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->forInStatement( (yyvsp[(4) - (8)].pObjectData), (yyvsp[(6) - (8)].pObjectData), (yyvsp[(8) - (8)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1614 "criscript.y"
    {
		CCgNodeData* dummy = CParser::getparser()->getCodeGen()->makeFormulaNode( CG_NONE, NULL, NULL, false, false );
		CCgNodeData* node = CParser::getparser()->getCodeGen()->variableAssignment( (yyvsp[(3) - (7)].pObjectData), dummy );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->forInStatement( node, (yyvsp[(5) - (7)].pObjectData), (yyvsp[(7) - (7)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1621 "criscript.y"
    { AUTOSEMICOLON ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1622 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->continueStatement( (yyvsp[(2) - (4)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1627 "criscript.y"
    { AUTOSEMICOLON ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1628 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->breakStatement( (yyvsp[(2) - (4)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1633 "criscript.y"
    { AUTOSEMICOLON ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1634 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->returnStatement( (yyvsp[(2) - (4)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1640 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->withStatement( (yyvsp[(3) - (5)].pObjectData), (yyvsp[(5) - (5)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1646 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->switchStatement( (yyvsp[(3) - (5)].pObjectData), (yyvsp[(5) - (5)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1652 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1657 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1663 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1668 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1673 "criscript.y"
    {
		(yyvsp[(1) - (2)].pObjectData)->SetSibling( (yyvsp[(2) - (2)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1679 "criscript.y"
    {
		(yyvsp[(1) - (2)].pObjectData)->SetSibling( (yyvsp[(2) - (2)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1686 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->caseClause( (yyvsp[(2) - (4)].pObjectData), (yyvsp[(4) - (4)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1691 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->caseClause( (yyvsp[(2) - (3)].pObjectData), NULL ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1697 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->caseClause( NULL, (yyvsp[(3) - (3)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1702 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->caseClause( NULL, NULL ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1708 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->labeledStatement( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1713 "criscript.y"
    { AUTOSEMICOLON ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1714 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->throwStatement( (yyvsp[(2) - (4)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1720 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->exceptionHandlingClause( (yyvsp[(2) - (3)].pObjectData), NULL, (yyvsp[(3) - (3)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1725 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->exceptionHandlingClause( (yyvsp[(2) - (4)].pObjectData), (yyvsp[(3) - (4)].pObjectData), (yyvsp[(4) - (4)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1730 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->exceptionHandlingClause( (yyvsp[(2) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), NULL ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1735 "criscript.y"
    {
		CParser::getparser()->getCodeGen()->reportError( ERROR_EXPECTED_CATCH, (yyvsp[(3) - (3)].iFileId), (yyvsp[(3) - (3)].iLineNumber), (yyvsp[(3) - (3)].iColumn) );
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1742 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->catchBlock( (yyvsp[(3) - (5)].pObjectData), (yyvsp[(5) - (5)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1748 "criscript.y"
    {
		//$$ = $2;
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->finallyBlock( (yyvsp[(2) - (2)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1756 "criscript.y"
    {
		if( (yyvsp[(1) - (2)].pObjectData) != NULL )
		{
			(yyvsp[(1) - (2)].pObjectData)->SetSibling( (yyvsp[(2) - (2)].pObjectData) );
			(yyval.pObjectData) = (yyvsp[(1) - (2)].pObjectData);
		}
		else
			(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1767 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1773 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1778 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1784 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->functionDeclaration( (yyvsp[(2) - (6)].pObjectData), (yyvsp[(4) - (6)].pObjectData), (yyvsp[(6) - (6)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1789 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->typedFunctionDeclaration( (yyvsp[(2) - (8)].pObjectData), (yyvsp[(4) - (8)].pObjectData), (yyvsp[(8) - (8)].pObjectData), (yyvsp[(7) - (8)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1797 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->functionDeclaration( (yyvsp[(2) - (6)].pObjectData), (yyvsp[(4) - (6)].pObjectData), (yyvsp[(6) - (6)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1802 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->typedFunctionDeclaration( (yyvsp[(2) - (8)].pObjectData), (yyvsp[(4) - (8)].pObjectData), (yyvsp[(8) - (8)].pObjectData), (yyvsp[(7) - (8)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1810 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1815 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1820 "criscript.y"
    {
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
 		CCgNodeData* node = CParser::getparser()->getCodeGen()->makeNode( CG_NODE_RESTARGS,
 														(CG_OPERATIONTYPE)0,
 														NULL, (yyvsp[(4) - (4)].pObjectData) );
		(yyvsp[(1) - (4)].pObjectData)->SetSibling( node );
		(yyval.pObjectData) = (yyvsp[(1) - (4)].pObjectData);

		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1832 "criscript.y"
    {
		//Array typed restArgs
		
 		/*ECMA4 compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_ES4DRAFT );
 		CCgNodeData* node = CParser::getparser()->getCodeGen()->makeNode( CG_NODE_RESTARGS,
 														(CG_OPERATIONTYPE)0,
 														NULL, (yyvsp[(4) - (4)].pObjectData) );
		(yyvsp[(1) - (4)].pObjectData)->SetSibling( node );
		(yyval.pObjectData) = (yyvsp[(1) - (4)].pObjectData);

		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1847 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1852 "criscript.y"
    {
		(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1858 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1863 "criscript.y"
    {
		(yyvsp[(1) - (3)].pObjectData)->SetSibling( (yyvsp[(3) - (3)].pObjectData) );
		(yyval.pObjectData) = (yyvsp[(1) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1870 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(2) - (3)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1875 "criscript.y"
    {
		//For Empty statement
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1882 "criscript.y"
    {
		//CParser::getparser()->getCodeGen()->tagTheLine();
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1889 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->literalConstant( (yyvsp[(1) - (1)].pString),
													(yyvsp[(1) - (1)].iFileId),
													(yyvsp[(1) - (1)].iLineNumber),
													(yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1898 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->integerConstant( (yyvsp[(1) - (1)].iValue),
													(yyvsp[(1) - (1)].iFileId),
													(yyvsp[(1) - (1)].iLineNumber),
													(yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1907 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->floatConstant( (yyvsp[(1) - (1)].dValue),
													(yyvsp[(1) - (1)].iFileId),
													(yyvsp[(1) - (1)].iLineNumber),
													(yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1916 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->identifier( (yyvsp[(1) - (1)].pString),
												(yyvsp[(1) - (1)].iFileId),
												(yyvsp[(1) - (1)].iLineNumber),
												(yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1925 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->booleanConstant( (yyvsp[(1) - (1)].bValue),
													(yyvsp[(1) - (1)].iFileId),
													(yyvsp[(1) - (1)].iLineNumber),
													(yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1933 "criscript.y"
    { CParser::getparser()->getLexer()->allowRegexLiteral( true ); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1934 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->regexLiteral( (yyvsp[(3) - (3)].pString),
													(yyvsp[(3) - (3)].iFileId),
													(yyvsp[(3) - (3)].iLineNumber),
													(yyvsp[(3) - (3)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1947 "criscript.y"
    {
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
 		//Do nothing for now
		(yyval.pObjectData) = NULL;
	;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1957 "criscript.y"
    {
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = NULL;
	;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1963 "criscript.y"
    {
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1968 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1974 "criscript.y"
    {
  		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->ifStatement( (yyvsp[(3) - (7)].pObjectData), (yyvsp[(5) - (7)].pObjectData), (yyvsp[(6) - (7)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1981 "criscript.y"
    {
  		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->ifStatement( (yyvsp[(3) - (7)].pObjectData), (yyvsp[(5) - (7)].pObjectData), (yyvsp[(6) - (7)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1989 "criscript.y"
    {
  		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->ifStatement( (yyvsp[(3) - (6)].pObjectData), (yyvsp[(5) - (6)].pObjectData), (yyvsp[(6) - (6)].pObjectData) ); 
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1997 "criscript.y"
    {
  		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2004 "criscript.y"
    {
  		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = NULL;
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2011 "criscript.y"
    {
  		/*JScript compatibility extension*/
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = (yyvsp[(2) - (2)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2019 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2024 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2029 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2035 "criscript.y"
    {
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->identifier( (yyvsp[(1) - (1)].pString),
												(yyvsp[(1) - (1)].iFileId),
												(yyvsp[(1) - (1)].iLineNumber),
												(yyvsp[(1) - (1)].iColumn) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2045 "criscript.y"
    {
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2051 "criscript.y"
    {
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2058 "criscript.y"
    {
 		CParser::getparser()->getCodeGen()->checkExtension( EXTENSION_JSCRIPT );
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->variableDeclaration( (yyvsp[(2) - (4)].pObjectData), (yyvsp[(4) - (4)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2078 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2083 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryPlusOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2088 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryMinusOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2093 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryBitwiseNotOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2098 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->unaryLogicalNotOperator( (yyvsp[(2) - (2)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2104 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2109 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->multiplyOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2114 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->divisionOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2119 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->reminderOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2125 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2130 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->addOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2135 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->subtractOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2141 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2146 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->shiftLeftOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2151 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->shiftRightOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2156 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->shiftRightUnsignedOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2162 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2167 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_GREATER );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2172 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_GREATEREQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2177 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_LESS );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2182 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_LESSEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2188 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2193 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_EQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2198 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_NOTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 2203 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_STRICTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2208 "criscript.y"
    {
		(yyval.pObjectData)= CParser::getparser()->getCodeGen()->cmpOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData), CG_STRICTNOTEQUAL );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2214 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2219 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseAndOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2225 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2230 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseXorOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2236 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 2241 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->bitwiseOrOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2247 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2252 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->logicalAndOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2258 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2263 "criscript.y"
    {
		(yyval.pObjectData) = CParser::getparser()->getCodeGen()->logicalOrOperator( (yyvsp[(1) - (3)].pObjectData), (yyvsp[(3) - (3)].pObjectData) );
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2269 "criscript.y"
    {
		(yyval.pObjectData) = (yyvsp[(1) - (1)].pObjectData);
		CParser::getparser()->getLexer()->debugRecentlyReduced( __LINE__ );
	;}
    break;



/* Line 1455 of yacc.c  */
#line 6155 "criscriptparser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 2275 "criscript.y"

/********************************************************************************/
/* Code goes here */

/********************************************************************************/

}	//namespace CRI
