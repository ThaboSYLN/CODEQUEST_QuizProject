# CodeQuest: CS Interview Challenge

CodeQuest is an interactive quiz game designed to help aspiring developers prepare for technical coding interviews. With features like varied difficulty levels, real-time feedback, and an engaging GUI, the game mimics real-world problem-solving scenarios to enhance the interview readiness of players.

---

## Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [Project Structure](#project-structure)
- [Setup and Usage](#setup-and-usage)
- [Demo](#demo)
- [Contributing](#contributing)
- [License](#license)
- [Credits](#credits)

---

## Features

- **Difficulty Levels**: Players can choose from three levels of difficulty (Easy, Medium, Hard).
- **Dynamic Question Presentation**: 
  - Randomized question order for each attempt.
  - Ensures no duplicate questions within a single session.
- **Real-Time Feedback**: Players receive immediate results and a detailed review of their performance after completing the quiz.
- **Progress Tracking**:
  - A visual sidebar feature shows answered questions with color changes for clarity.
  - Progress updates dynamically during gameplay.
- **Animation-Like Interactions**: Sidebar indicators change colors to reflect question status (answered or unanswered), adding an engaging user experience.

---

## Technologies Used

- **Programming Language**: C++
- **Framework**: .NET (Windows Forms) for GUI development
- **Graphics**: CLR/C++ Library for enhanced visual components
- **Additional Libraries**:
  - Standard C++ libraries for file handling, randomization, and data structures

---

## Project Structure

The project consists of the following main components:

- **Welcome Module**: Displays the entry screen of the application and validates user input.
- **Level Module**: Allows users to select their preferred difficulty level (Easy, Medium, Hard).
- **Game Logic**: Handles question randomization, navigation, answer verification, and score calculation.
- **Review Module**: Displays the final score, grade, and status after quiz completion.
- **Utility Classes**:
  - `ManageGame`: Controls progress tracking and sidebar animations.
  - `Questions`: Manages question extraction, shuffling, and assignment.

---

## Setup and Usage

Follow these steps to set up and run CodeQuest on your Windows machine:

1. **Prerequisites**:
   - Windows OS
   - Microsoft Visual Studio 2019 (with .NET framework support)

2. **Clone the Repository**:
   ```
   git clone https://github.com/your-repo/codequest.git
   ```

3. **Open the Project**:
   - Launch Visual Studio 2019.
   - Open the `CodeQuest.sln` solution file from the cloned repository.

4. **Build the Solution**:
   - Go to the `Build` menu and select `Build Solution`.
   - Ensure there are no build errors.

5. **Run the Application**:
   - Press `F5` or click `Start` to run the application.

6. **Gameplay**:
   - Start by entering the welcome screen and providing the required input.
   - Choose a difficulty level and begin answering questions.
   - Review your performance at the end of the quiz.

---

## Demo

For a quick demonstration of the game, watch the [video demo](https://drive.google.com/file/d/18Dn_f2ccfIuf_s_BExgIg-c-02Diu8zm/view?usp=sharing).

---

## Contributing

Contributions are welcome! If you would like to contribute to the project:

1. Fork the repository.
2. Create a new branch for your feature (`git checkout -b feature-name`).
3. Commit your changes (`git commit -m 'Add new feature'`).
4. Push to the branch (`git push origin feature-name`).
5. Open a pull request.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## Credits

This project was developed collaboratively as part of a group effort by:
- Thabo Mthethwa
- Cebolenkosi Msweli
- Nduduzo Thusi
- Kwanele Sithole
- Sandile Allen Msezane

Additional inspiration and resources were drawn from W3Schools and other online platforms.

---

Thank you for exploring CodeQuest! We hope you enjoy the experience and sharpen your interview skills.

