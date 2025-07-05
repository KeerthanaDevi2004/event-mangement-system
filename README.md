🎉 Event Management System (C Project)
This is a console-based event management application written in C. It allows users to log in, choose an event type, and input details such as food preference, music arrangement, decoration type, and number of attendees. Based on the input, the program estimates the total cost and displays a summary.

🧠 Features
✅ Login authentication system

✅ Support for 7 types of events:

Wedding

Birthday

Reunion

Farewell

Baby Shower

Ear Piercing

Office Party

✅ Options for:

Food: Veg / Non-Veg

Music arrangement

Decoration budget: High / Low

Member count for pricing

✅ Cost calculation based on member count and decoration

✅ Menu-driven interface with switch-case logic

🖥️ How it Works
Prompts the user to log in using a valid username and password:

Username: event

Password: 123

Displays a menu of event types to choose from (1–7), with an option to exit (8).

For each event:

Asks for the place, food type, music preference, decoration type, and member count.

Calculates and prints the estimated cost:

₹50,000 for 100–200 members

₹100,000 for 200–500 members

Else: Service not available

🧾 Sample Output
markdown
Copy
Edit
Enter your username:
event
Enter your password:
123

Welcome. Login Success!


****######## WELCOME TO EVENT MANAGEMENT SYSTEM ########****

1. Wedding Event
2. Birthday Event
3. Reunion Event
4. Farewell Party
5. Baby Shower Function
6. Ear Piercing Function
7. Office Party
8. Exit

Enter your choice: 1

WELCOME TO WEDDING EVENT
Enter the place of your event wants to happen
> Madurai
Enter the choice of your food
1. veg
2. non-veg
> 1
Do you want a musical program?
1. Yes
2. No
> 1
Choose decoration type
1. High budget
2. Low budget
> 1
Decoration Cost: ₹50000
Enter the number of members
> 220
Total Amount: ₹100000
🛠 Technologies Used
Language: C

Platform: GCC/MinGW Compiler

IDE: Code::Blocks / Dev C++ / VS Code (any)

📌 Note
Member count must be between 101 and 500 for the service to be available.

The decoration cost is fixed:

High budget: ₹50,000

Low budget: ₹25,000
