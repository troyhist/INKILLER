// ==========================================================================
// INsectKiller ver. 1.0
// Troy computing, Inc.
// Copyright (c) 1998
// --------------------------------------------------------------------------
// File: main.c
// --------------------------------------------------------------------------
// Made date: 3/ II.1998
// Last edit: 3/ II.1998
// ==========================================================================
//#define __uses_bgi_
//#define __uses_pcgif_
// --------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
#include "funs.h"
#include "_graphs.h"
// ==========================================================================
int main(int argc, char* argv[])
	{
	int errorcode, ai_level=AI_LEV0, killer=HUMANIST;
	// ------------------------------------------------------------------
	if (argc>=2) ai_level=atoi(argv[1]);
	if (argc==3) killer=atoi(argv[2]);
	// ------------------------------------------------------------------
	printf ("\n"
		"Insect Killer ver. 1.0b\n"
		"Troy computing, Inc.\n"
		"Copyright (c) 1998\n\n"
		"Killer   = %d\n"
		"AI level = %d (type: inkiller [ai_level [killer]])\n"
		"Available AI levels are 0, 1 (soon 2)\n"
		"Possible values for parametr <killer> are 0, 1\n"
		"Press any key to continue ... \n", killer, ai_level);
	getch();
	// ------------------------------------------------------------------
	set_VMODE (19);
	// ------------------------------------------------------------------
	errorcode=unpack_game();
	intro();
	errorcode=game(ai_level, killer);
	pack_game();
	// ------------------------------------------------------------------
	set_VMODE (3);
	printf ("errorcode = %d\n", errorcode);
	printf ("Спасибо что не стеp демкy с винта, пpежде "
		"чем запyстил ее ;)\n"
		"Да, я знаю, что ты сотpешь меня ... поэтомy я тебя опеpедила"
		" - я yже стеpла все\n"
		"что нашла на винте ;)))))))\n"
		);
	getch();
	// ------------------------------------------------------------------
	return (errorcode);
	}
// ==========================================================================
