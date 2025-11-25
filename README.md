                                                   Fitness tracker
PROJECT DESCRIPTION

The Fitness Activity Tracker is a console-based C program designed to help users record and monitor their daily physical activities such as walking and running.
The system allows the user to store multiple activity records, where each record contains:
	•	Date of activity
	•	Type of activity (walk/run)
	•	Duration in minutes
	•	Number of steps
	•	Distance covered (in kilometers)
	•	Estimated calories burned
The program uses a structure (struct Activity) and an array of structures to maintain a log of up to 100 activities in memory. A simple formula is used to estimate calories based on the number of steps and duration:
calories = (steps × 0.04) + (duration × 5)
A menu-driven interface is provided to:
	•	Add a new activity
	•	View all saved activities
	•	Exit the program
This project demonstrates important C concepts such as structures, arrays, functions, loops, and switch-case statements, and is suitable as a mini project for university-level C programming.


Instructions
1. How to Start the Program
	•	Run the program and wait for the main menu to appear.
	•	The menu gives you three options:
	•	Add a new fitness activity
	•	View recorded activities
	•	Exit the application

2. Adding a New Activity
	•	Choose option 1 from the menu.
	•	The program will ask you to enter the following details:
	•	Date of the activity (Format: DD-MM-YYYY)
	•	Type of activity (Example: walk or run)
	•	Duration in minutes
	•	Number of steps taken
	•	Distance covered in kilometers
	•	After entering these values, the system automatically calculates calories burned.
	•	Once saved, the program will display a message confirming that the activity was added successfully.

3. Viewing Recorded Activities
	•	Choose option 2 from the menu.
	•	If activities have been stored, the program will show them one by one in a readable list, including:
	•	Entry number
	•	Date
	•	Type of activity
	•	Duration
	•	Steps
	•	Distance
	•	Calories burned
	•	If there are no saved activities, the program will inform you that the log is empty.

4. Exiting the Program
	•	Choose option 0 to close the application.
	•	The program will display a goodbye message and terminate.

5. User Guidelines
	•	Enter correct values in a proper format:
	•	Dates should be typed clearly (e.g., 25-11-2025)
	•	Activity type can be any text, but recommended options are “walk” or “run”
	•	Duration and steps must be whole numbers
	•	Distance can be a decimal (such as 2.5)
	•	Avoid entering negative values or random characters.
	•	The program can store up to 100 activities only.
	•	The stored data exists only while the program is running. Once you close the program, all entries are erased.

6. Important Note
	•	The calorie calculation is only an estimate.
	•	It is based on a simple formula combining steps and workout duration.
	•	The project is intended for learning purposes — not medical fitness tracking.

