🍽️ Restaurant Ordering System

A simple console-based Restaurant Ordering System developed in the C programming language.

This program allows a user to enter their name, select food items from a restaurant menu, add multiple items to their order, and finally generate the total bill.

---

📌 Project Overview

The Restaurant Ordering System is a beginner-friendly C programming project designed to demonstrate fundamental programming concepts through a practical restaurant-ordering application.

When the program starts, it displays a welcome message with a typing-style animation. The user can then select food items from the menu and add them to their cart.

After completing the order, the program calculates and displays the total bill.

---

✨ Features

- 🍽️ Restaurant welcome screen
- 👤 Customer name input
- 📋 Interactive food menu
- 🛒 Add food items to cart
- 🔄 Option to add multiple items
- 💰 Automatic total bill calculation
- ⌨️ Typing-style text animation
- 📞 Simple console-based interface
- 🎉 Order completion message

---

🍔 Available Menu

Item| Price
🍕 Pizza| ₹50
🍔 Burger| ₹40
🍜 Maggi| ₹70
🥞 Dosa| ₹80
🌯 Egg Roll| ₹60

---

🛠️ Technologies Used

- C Programming
- "stdio.h" — Input and output
- "unistd.h" — Delay functionality

---

🧠 C Concepts Used

This project demonstrates several basic C programming concepts:

- Variables
- Character arrays
- Strings
- "printf()"
- "scanf()"
- "for" loops
- "while" loops
- "switch-case"
- "if/condition logic"
- Arrays
- Functions from standard libraries
- Arithmetic operations
- User input
- Console output
- "sleep()" for animation

---

⚙️ How the Program Works

Step 1 — Welcome Screen

The program displays:

*** welcome to our restaurant ***

The characters are printed one by one to create a typing-style animation.

Step 2 — Enter Customer Name

The user is asked to enter their name:

Enter your name :

Step 3 — Display Menu

The restaurant menu is displayed:

== restaurant menu ==
~~~~~~~~~~~~~~~~~~~~~
1:Pizza ~ [50rs]
2:Burger ~ [40rs]
3:Maggi ~ [70rs]
4:Dosa ~ [80rs]
5:Egg roll ~ [60rs]
~~~~~~~~~~~~~~~~~~~~~

Step 4 — Select an Item

The user enters the corresponding item number.

For example:

1

The program displays:

[pizza added to cart]

and adds ₹50 to the total bill.

Step 5 — Add More Items

The program asks:

Do you want to add more items?
(1 = Yes, 0 = No)

If the user enters "1", the menu appears again.

If the user enters "0", the ordering process ends.

Step 6 — Generate Bill

The program calculates the total price and displays:

Total bill = 120

Finally, it displays:

!!!Thank you for ordering!!!

---

💻 Example

*** welcome to our restaurant ***

Enter your name : Ayush

== restaurant menu ==
~~~~~~~~~~~~~~~~~~~~~
1:Pizza ~ [50rs]
2:Burger ~ [40rs]
3:Maggi ~ [70rs]
4:Dosa ~ [80rs]
5:Egg roll ~ [60rs]
~~~~~~~~~~~~~~~~~~~~~

Add item number to add to cart : 1

[pizza added to cart]

Do you want to add more items?
(1 = Yes, 0 = No): 1

Add item number to add to cart : 2

[burger added to cart]

Do you want to add more items?
(1 = Yes, 0 = No): 0

Total bill = 90

!!!Thank you for ordering!!!

---

🚀 How to Run

Linux / macOS

Save the program as:

restaurant.c

Compile it using:

gcc restaurant.c -o restaurant

Run:

./restaurant

Windows

If you are using GCC/MinGW, compile using:

gcc restaurant.c -o restaurant

Then run:

restaurant.exe

«Note: The program uses "unistd.h", which is commonly available on Linux/macOS. On Windows, "unistd.h" and "sleep()" may require modification or a compatible environment.»

---

📂 Project Structure

Restaurant-Ordering-System/
│
├── restaurant.c
└── README.md

---

🔮 Future Improvements

The current project is a basic implementation. It can be upgraded with:

- 🛒 Proper cart management
- 🔢 Item quantity selection
- 🧾 Detailed bill/receipt
- 💳 Payment option
- 🗃️ File handling for storing orders
- 👨‍🍳 Admin menu
- 🏷️ Discounts and offers
- 🧮 GST calculation
- 🕐 Order number generation
- 📊 Sales history
- 🖥️ Graphical user interface
- 🔐 Customer/order database

---

🎯 Learning Objective

The main objective of this project is to understand how basic C programming concepts can be combined to create a practical application.

It provides hands-on practice with:

Input → Processing → Decision Making → Output

---

👨‍💻 Author

Ayush Singh

Project

Restaurant Ordering System

Language

C Programming

---

⭐ Conclusion

The Restaurant Ordering System is a simple console-based project that demonstrates how C programming can be used to build an interactive application.

Although the current version is basic, it provides a strong foundation for developing a more advanced restaurant management system using functions, structures, file handling, databases, and a graphical interface.
