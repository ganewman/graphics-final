/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMENT = 258,
    DOUBLE = 259,
    LIGHT = 260,
    AMBIENT = 261,
    CONSTANTS = 262,
    SAVE_COORDS = 263,
    CAMERA = 264,
    SPHERE = 265,
    TORUS = 266,
    BOX = 267,
    CYLINDER = 268,
    CONE = 269,
    LINE = 270,
    CS = 271,
    MESH = 272,
    TEXTURE = 273,
    STRING = 274,
    SET = 275,
    MOVE = 276,
    SCALE = 277,
    ROTATE = 278,
    BASENAME = 279,
    SAVE_KNOBS = 280,
    TWEEN = 281,
    FRAMES = 282,
    VARY = 283,
    PUSH = 284,
    POP = 285,
    SAVE = 286,
    GENERATE_RAYFILES = 287,
    SHADING = 288,
    SHADING_TYPE = 289,
    SETKNOBS = 290,
    FOCAL = 291,
    DISPLAY = 292,
    WEB = 293,
    CO = 294
  };
#endif
/* Tokens.  */
#define COMMENT 258
#define DOUBLE 259
#define LIGHT 260
#define AMBIENT 261
#define CONSTANTS 262
#define SAVE_COORDS 263
#define CAMERA 264
#define SPHERE 265
#define TORUS 266
#define BOX 267
#define CYLINDER 268
#define CONE 269
#define LINE 270
#define CS 271
#define MESH 272
#define TEXTURE 273
#define STRING 274
#define SET 275
#define MOVE 276
#define SCALE 277
#define ROTATE 278
#define BASENAME 279
#define SAVE_KNOBS 280
#define TWEEN 281
#define FRAMES 282
#define VARY 283
#define PUSH 284
#define POP 285
#define SAVE 286
#define GENERATE_RAYFILES 287
#define SHADING 288
#define SHADING_TYPE 289
#define SETKNOBS 290
#define FOCAL 291
#define DISPLAY 292
#define WEB 293
#define CO 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "mdl.y" /* yacc.c:1909  */

  double val;
  char string[255];

#line 137 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
