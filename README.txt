# 🎬 Movie Ticket Booking System

A **console-based Movie Ticket Booking System** built in **C++** using the concepts of **Object-Oriented Programming (OOP)**. This project simulates the ticket booking process followed by modern cinema platforms, allowing users to select movies, choose show timings, book seats, make payments, and generate a digital movie ticket.

The project was developed as part of a **System Design and Object-Oriented Programming** coursework at **Graphic Era Hill University**. It focuses on building a structured, modular, and easy-to-maintain application while applying core software engineering principles.

---

# 📖 About the Project

The Movie Ticket Booking System is designed to provide a simple and interactive command-line experience for booking movie tickets. Instead of writing all the logic in a single file, the application is divided into different modules, where each class is responsible for handling a specific part of the system such as movies, seats, bookings, and payments.

The project follows a modular approach, making the code reusable, readable, and easier to extend with additional features in the future. It also demonstrates how real-world applications can be organized using Object-Oriented Programming concepts in C++.

---

# ✨ Key Features

* Browse a list of currently available movies.
* View multiple show timings for each movie.
* Select seats from different categories (Silver, Gold, and Platinum).
* Check seat availability before booking.
* Prevent duplicate bookings for reserved seats.
* Collect customer details during ticket booking.
* Simulate payments through UPI, Card, or Cash.
* Generate a formatted movie ticket after successful payment.
* Interactive menu-driven console interface for smooth navigation.

---

# 🛠️ Tech Stack

| Technology                            | Purpose                                 |
| ------------------------------------- | --------------------------------------- |
| **C++**                               | Core application development            |
| **Object-Oriented Programming (OOP)** | Application architecture and design     |
| **Visual Studio Code**                | Code editor and development environment |
| **G++ Compiler**                      | Compilation and execution               |
| **Windows PowerShell / Terminal**     | Running the application                 |

---

# 🧩 OOP Concepts Used

This project applies several fundamental Object-Oriented Programming concepts:

* **Classes and Objects** for organizing the application into reusable components.
* **Encapsulation** to keep data and functions within related classes.
* **Abstraction** to separate implementation details from user interaction.
* **Constructors** for object initialization.
* **Vectors** for managing seat availability dynamically.
* **Modular Programming** using separate header (`.h`) and source (`.cpp`) files.

---

# 📂 Project Structure

```text
MovieTicketBookingSystem/
│── main.cpp                 # Program entry point
│── Movie.h / Movie.cpp       # Movie information and show timings
│── Seat.h / Seat.cpp         # Seat allocation and availability management
│── Booking.h / Booking.cpp   # Booking process and customer details
│── Payment.h / Payment.cpp   # Payment handling and ticket generation
│── README.md                 # Project documentation
│── LICENSE                   # MIT License
```

Each module is responsible for a specific functionality, making the project easier to maintain and understand.

---

# 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/KaraN-xD/MovieTicketBookingSystem.git
```

### 2. Open the Project Folder

```bash
cd MovieTicketBookingSystem
```

### 3. Compile the Source Files

```bash
g++ *.cpp -o movie_booking
```

### 4. Run the Application

**Windows PowerShell**

```bash
.\movie_booking.exe
```

**Linux / macOS**

```bash
./movie_booking
```

---

# 🎮 How the Application Works

1. Launch the application.
2. Display the list of available movies.
3. Select a movie from the menu.
4. Choose a preferred show timing.
5. View available seats and select one.
6. Enter customer details.
7. Complete the payment simulation.
8. Receive a digital movie ticket containing all booking details.

---

# 🎟️ Sample Ticket Details

After a successful booking, the application generates a ticket containing:

* Customer Name
* Movie Name
* Show Time
* Seat Number
* Seat Category
* Payment Method
* Ticket Price

This simulates the confirmation ticket provided by an online movie booking platform.

---

# 📚 What I Learned

Building this project helped me strengthen my understanding of:

* Object-Oriented Programming in C++.
* Designing modular applications using multiple classes.
* Managing data with vectors and user-defined objects.
* Implementing real-world booking logic.
* Creating an interactive command-line application with clean code organization.

---

# 🔮 Future Improvements

Some features that can be added in future versions include:

* User Login and Registration.
* Admin Panel for adding or removing movies.
* File handling to store booking history permanently.
* Database integration using MySQL or SQLite.
* Online payment gateway integration.
* Graphical User Interface (GUI) using Qt or JavaFX.

---

# 👨‍💻 Author

**Karan Kumar**

B.Tech Computer Science Engineering (Cyber Security)

Graphic Era Hill University, Dehradun

---

# 📄 License

This project is licensed under the **MIT License**. Feel free to use, modify, and learn from this project for educational purposes.
