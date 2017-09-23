
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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



/* Line 1676 of yacc.c  */
#line 175 "criscriptparser.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


