🏥 Hospital Management System


A console-based Hospital Management System written in C++. It provides simple, menu-driven tools for managing doctor and patient records and booking patient appointments — all running in the terminal, with data held in memory during each session.

✨ Features

Doctor Management
- Add a new doctor record
- Search for a doctor by ID
- Update a doctor's name, age, specialization, or contact info
- Delete a doctor record
- View a list of all registered doctors

Patient Management
- Add a new patient record
- Search for a patient by ID
- Update a patient's name, age, contact number, or disease
- Delete a patient record
- View a list of all registered patients

Appointments
- Book an appointment for an existing patient by date and time

Sample data for three doctors and three patients is pre-loaded when the program starts, so you can explore the menus immediately without entering data first.



🛠️ Tech Stack

- Language: C++ (uses `<iostream>`, `<ctime>`, `<string>`)
- Data storage:  Fixed-size in-memory arrays (no database or file persistence — data resets each time the program restarts)
- Interface: Menu-driven console application



📂 Project Structure

```
hospital-management-system/
├── main.cpp        # All program logic (menus, records, appointments)
├── .gitignore       # Excludes compiled binaries from version control
└── README.md
```



🚀 Getting Started

Prerequisites
A C++ compiler is required — this project was built with **MinGW (g++)** in mind on Windows.

To check if you already have one installed, open a terminal and run:
```bash
g++ --version
```
If that fails, install a compiler first:
- Windows: [MSYS2](https://www.msys2.org/) → install the `mingw-w64-ucrt-x86_64-gcc` package, then add `C:\msys64\ucrt64\bin` to your system PATH
- macOS: Install Xcode Command Line Tools (`xcode-select --install`)
- Linux:  Install via your package manager, e.g. `sudo apt install g++`

 Build & Run

```bash
# Clone the repository
git clone https://github.com/Muskan-Fatimaa/hospital-management-system.git

# Move into the project folder
cd hospital-management-system

# Compile
g++ main.cpp -o main

# Run
./main        # macOS/Linux
main.exe      # Windows
```

> Note: This program uses `system("CLS")` to clear the screen between menus, which is Windows-specific. On macOS/Linux, this command will not clear the screen (and may print an error), but the rest of the program will still function normally.



🕹️ Usage

On launch, you'll see the main menu:
```
1. Doctor Menu
2. Patient Menu
3. Exit
```

Selecting Doctor Menu or Patient Menu opens a submenu where you can add, search, update, delete, or list records. From the Patient Menu, you can also book an appointment for an existing patient by entering their Patient ID, then a date and time.

All input is read directly from the console using `cin`, so simply follow each on-screen prompt.



⚠️ Known Limitations

- No data persistence — all records exist only in memory and are lost when the program closes. Restarting always resets to the original sample data.
- Fixed record limits — the system supports a maximum of 60 doctors and 50 patients (defined by the array sizes in the code).
- No appointment-doctor linking yet — appointments are currently tied only to a patient; the doctor-assignment portion of the appointment flow is present in the code but not yet wired up.
- Windows-specific screen clearing — relies on `system("CLS")`, which doesn't work on macOS/Linux.



📌 Roadmap / Ideas for Future Improvement

- Replace in-memory arrays with file or database storage so records persist between runs
- Use `std::vector` instead of fixed-size arrays to remove the 50/60 record cap
- Link appointments to both a patient and a doctor
- Replace `system("CLS")` with a cross-platform screen-clearing approach
- Add input validation (e.g. reject non-numeric IDs/ages)



🤝 Contributing

This is a personal/academic project, but suggestions and pull requests are welcome. Please open an issue first to discuss any significant changes.



📜 License

This project is open source and available under the [MIT License](LICENSE).



🙋 Author

Muskan Fatima
GitHub: [@Muskan-Fatimaa](https://github.com/Muskan-Fatimaa)
