/************************************************************
yywclcln.cpp
This file can be freely modified for the generation of
custom code.

[Unicode]

Copyright (c) 1999-2003 Bumble-Bee Software Ltd.
************************************************************/

#include "yydefs.h"

#if !(defined(YYDEBUG) && defined(YYSTDCPPLIB)) || defined(YYGROUP)

#ifdef YYSTDCPPLIB
#include <cstdlib>
#else
#include <stdlib.h>
#endif

#include "yywclex.h"

#ifdef YYSTDCPPLIB
using namespace std;
#endif

_YL_BEGIN

void yywlexer::yycleanup()
{
	if (yytext != yystext) {
		delete[] yytext;
		yytext = yystext;
	}
	if (yystatebuf != yysstatebuf) {
		delete[] yystatebuf;
		yystatebuf = yysstatebuf;
	}
	if (yyunputbufptr != yysunputbufptr) {
		delete[] yyunputbufptr;
		yyunputbufptr = yysunputbufptr;
	}
	yytext_size = yystext_size;
	yyunput_size = yysunput_size;

	if (yytext != NULL) {
		*yytext = L'\0';
	}
	yyleng = 0;
	yyunputindex = 0;
}

_YL_END

#endif
