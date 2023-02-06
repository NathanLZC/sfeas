//Author		: Xiao Tuzi
//Date(Create)	: 01/15/2023
//Description	: this program is declaration of History Output for DTASolu/MTASolu


#pragma once
#include "Output/HistoryOutput/HistOut.h"

class TAHistOut : public HistOut {
public:
	void init();	// initialize history output
	void exec(double tNow = 0.0);	// execute history output
	void fini();	// finish history output
};