## **Project 1: Calculator (From Basic to GUI)**
1. :white_check_mark: **Basic Console Calculator** – Simple arithmetic operations (`+`, `-`, `*`, `/`, `%`). [./calculator/v1/main.c](./calculator/v1/main.c)
2. :white_check_mark:**Scientific Calculator** – Adds `sin()`, `cos()`, `tan()`, `log()` using `<math.h>`. [./calculator/v2/main.c](./calculator/v2/main.c)
3. **CLI Calculator** – Accepts expressions as command-line arguments (`calc 12 + 5`).
4. **Calculator with History** – Stores previous calculations using file handling.
5. **GUI Calculator** – Uses `ncurses` or `SDL2` for a graphical interface.

---

## **Project 2: Tic-Tac-Toe (From Hardcoded to AI-Powered)**
1. **Basic Console Game** – Hardcoded input for a 2D grid.
2. **User vs. User Mode** – Uses loops and input validation.
3. **AI Opponent** – Implements a basic AI with random moves.
4. **Minimax AI** – Uses Minimax algorithm for an unbeatable AI.
5. **GUI Version** – Uses `ncurses` or SDL2 for a visual interface.

---

## **Project 3: File Manager (From Simple Commands to Full CLI Tool)**
1. **Basic File Reader/Writer** – Read/write text files using `fopen()`, `fgets()`.
2. **Directory Navigation** – Use `opendir()`, `readdir()` to list files.
3. **File Operations** – Implement `rename()`, `remove()`, `copy()` functionalities.
4. **Command-Line File Manager** – Accepts commands like `ls`, `mv`, `cp` with arguments.
5. **Interactive CLI File Manager** – Uses `ncurses` for an interactive UI.

---

## **Project 4: Mini Shell (From Simple Commands to a Fully Functional Shell)**
1. **Basic Shell** – Accepts user input and executes simple commands using `system()`.
2. **Custom Command Execution** – Uses `fork()`, `exec()` instead of `system()`.
3. **Pipes & Redirection** – Implements `|`, `<`, `>` using `dup2()`.
4. **Built-in Shell Commands** – Adds `cd`, `exit`, `history` commands.
5. **Multi-threaded Shell** – Runs background processes using `pthread`.

---

## **Project 5: Game Development (From Console to Full UI)**
1. **Snake Game (Console Version)** – Uses a 2D array for grid-based movement.
2. **Frame-Based Movement** – Uses `usleep()` for smoother gameplay.
3. **Scoring & Levels** – Implements a scoring system.
4. **Multiplayer Support** – Adds a second player.
5. **GUI Snake Game** – Uses `SDL2` for graphics.

---

## **Project 6: Personal Expense Tracker (From Basic Input to Interactive CLI)**  
1. **Basic Console-Based Tracker** – Users manually enter income and expenses, with simple calculations (`total income - total expenses`).  
2. **Categorized Expense Tracker** – Adds categorization (`food`, `rent`, `transport`) and displays category-wise summaries.  
3. **File-Based Expense Tracker** – Stores expenses in a file (`expenses.txt`) and loads data on startup.  
4. **CLI-Based Tracker** – Accepts command-line arguments for quick entry (`expense_tracker -add 50 food "Lunch at cafe"`).  
5. **Interactive CLI Expense Tracker** – Uses `ncurses` for a structured UI with sorting options (`amount`, `date`, `category`).  

---

## **Project 7: Contact Management System (From Simple CRUD to Full CLI Tool)**  
1. **Basic Contact Book** – Users can add, view, edit, and delete contacts.  
2. **File-Based Contact Book** – Saves contacts to a file (`contacts.txt`) for persistence.  
3. **Searchable Contact Book** – Implements search functionality by **name** or **phone number**.  
4. **Sortable Contact Manager** – Sorts contacts **alphabetically** and improves display formatting.  
5. **CLI Contact Manager** – Supports command-line lookup (`contact_manager -find JohnDoe`) and structured storage (`CSV`, `JSON`).  

---

## **Project 8: To-Do List & Reminder System (From Simple List to Smart Reminders)**  
1. **Basic Task List** – Users can add and view tasks.  
2. **Marking Tasks as Completed** – Allows users to mark tasks as **done**.  
3. **File-Based To-Do List** – Stores tasks in `tasks.txt` and loads them on startup.  
4. **Priority & Due Date Sorting** – Tasks can be sorted by **priority** and **due date**.  
5. **CLI To-Do Manager with Reminders** – Uses `time.h` for **reminders** and allows quick additions (`todo -add "Submit project" -priority high`).  

---

## **Project 9: File Encryption & Decryption Tool (From XOR to Secure AES Encryption)**  
1. **Basic XOR Encryption** – Encrypts and decrypts text using a simple **XOR cipher**.  
2. **File-Based Encryption** – Encrypts and decrypts files (`.txt`, `.csv`).  
3. **Password-Based Encryption** – Encrypts files with a **user-provided password**.  
4. **Advanced Encryption (AES Implementation)** – Uses AES encryption for stronger security.  
5. **CLI Encryption Tool** – Accepts command-line arguments (`encryptor -encrypt "file.txt" -password "mypassword"`).  

---

## **Project 10: Weather Data Logger (From Simple Logs to Graphical Analysis)**  
1. **Basic Temperature Logger** – Users manually input **temperature readings**.  
2. **File-Based Weather Logging** – Logs temperature readings with **timestamps** in a file (`weather_log.txt`).  
3. **Weather Data Analysis** – Computes **min, max, and average** temperatures over time.  
4. **CLI Log Viewer** – Allows users to view logs quickly (`weather_log -view last 10`).  
5. **Graphical Temperature Trends** – Displays temperature trends using **ASCII graphics** or an **external plotting tool**.  