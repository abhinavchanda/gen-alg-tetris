# include <iostream>
# include "tetris.h"
# include "controller.h"
# include "display_manager.h"

using namespace std;

int main (void) {
	cout << "Genetic Algorithm Tetris version 0.1" << endl;

	// The pieces that will allow us to play some tetris
	Tetris tetris;
	Controller controller;
	Display_Manager output;

	// Connect the pieces
	//tetris.input = controller;
	//output.feed = tetris.state;

	// Let it rip!
	tetris.run ();

	return 0;
}
