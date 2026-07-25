#ifndef PROGRESSBAR_HH
#define PROGRESSBAR_HH

#include <iostream>

void showProgress(unsigned percent=0);
void updateProgress(unsigned percent);
/** Print a phase label and start a fresh progress bar at 0%. */
void beginProgressPhase(const char *label);

#endif // PROGRESSBAR_HH
