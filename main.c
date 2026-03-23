#include "swipe.h"

// NOTE: The main function is used
// for testing functions from the libraries.
// This is not the program entry point.
int main(void)
{
	Window MainWindow;

	MainWindow.res.height = 10;
	MainWindow.res.width = 20;

	InitWindow(&MainWindow);

	printf("%s", MainWindow.render);
}

// TO DO:
// Setup UI with ncurses
