# Age Eligibility Checker in C++

A simple C++ program that takes a user's age as input and determines job eligibility based on predefined conditions.

---

## 📌 Features

* Accepts user age input
* Uses `if-else` conditional statements
* Determines:

  * Not eligible for job
  * Eligible for job
  * Retirement approaching
  * Retirement time

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (`iostream`)

---

## 📂 Program Logic

| Age Range    | Output                                |
| ------------ | ------------------------------------- |
| Less than 18 | Not eligible for job                  |
| 18 to 54     | Eligible for job                      |
| 55 to 57     | Eligible for job, but retirement soon |
| Above 57     | Retirement time                       |

---

## 📸 Screenshot

Add your program screenshot inside a folder named `screenshots` in your repository.

```md id="yow8cw"
![Program Output](screenshots/output.png)
```

Example folder structure:

```txt id="4xif9t"
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp id="9imx0t"
#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 18) {
        cout << "Not eligible for job" << endl;
    }
    else if (age <= 54) {
        cout << "Eligible for job" << endl;
    }
    else if (age <= 57) {
        cout << "Eligible for job, but retirement soon" << endl;
    }
    else {
        cout << "Retirement time" << endl;
    }
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash id="qd7ig9"
g++ main.cpp -o main
```

2. Run the executable:

```bash id="8u7ywj"
./main
```

3. Enter the age when prompted.

---

## 📸 Example Output

```txt id="j4xf8h"
25
Eligible for job
```

---

## 📖 Learning Concepts

This project helps beginners understand:

* Conditional Statements
* `if`, `else if`, and `else`
* User Input in C++
* Basic Program Flow

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project.
t
