#include "Welcome.h"
#include "Game.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;


// Entry point of the program
void main()
{

	// Enable visual styles for the application
	Application::EnableVisualStyles();

	// Set text rendering compatibility to false
	Application::SetCompatibleTextRenderingDefault(false);

	// Instantiate the Quiz from the QUIZ namespace
	QuizProject::Welcome welcome;
	QuizProject::Level lvl;
	QuizProject::Game game;




	// Run the application using the Main_Form

	Application::Run(% welcome);
	Application::Run(% lvl);
	Application::Run(% game);
	/*Application::Run(% level);

	Application::Run(% form);
	Application::Run(% review);*/



}
