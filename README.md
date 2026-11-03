 <h1 align="center">🔤 clsString Library</h1>

<p align="center">
  🚀 A lightweight and versatile C++ library for string manipulation.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white" alt="Visual Studio" />
  <img src="https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white" alt="Git" />
  <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" alt="GitHub" />
  <img src="https://img.shields.io/badge/MIT%20License-green?style=for-the-badge&logo=opensourceinitiative&logoColor=white" alt="MIT License" />
</p>

---

## 📌 About The Project

`clsString` is a C++ utility library designed to simplify string manipulation by providing a collection of useful operations for handling and processing strings.

## ✨ Features

- 🔠 Change the first letter of each word to uppercase or lowercase.
- 🔡 Convert all string letters to uppercase or lowercase.
- 🔄 Invert character case.
- 🔢 Count uppercase letters, lowercase letters, digits, punctuation, and spaces.
- 🔍 Count specific characters with case-sensitive or case-insensitive options.
- 🔤 Check and count vowels.
- 📝 Print the first letter of each word.
- 📃 Print and count words in a string.
- ✂️ Split strings into tokens.
- 🔗 Join strings using a custom delimiter.
- 🧹 Trim leading and trailing spaces.
- 🔃 Reverse words in a string.
- 🔁 Replace words with case-sensitive or custom matching options.
- ❌ Remove punctuation.
- 📏 Get string length.

## 🛠️ Built With

- 💻 C++
- 📚 Standard Template Library (STL)
- 🖥️ Visual Studio
- 🌿 Git & GitHub

## 📂 Project Structure

```text
clsString/
│
├── 📄 clsString.h
├── 📄 clsString.cpp
├── 📄 main.cpp
└── 📄 README.md
```

## 🚀 Usage

```cpp
#include <iostream>
#include "clsString.h"

int main()
{
    clsString text("hello world");

    text.UpperFirstLetterOfEachWord();

    std::cout << text.getValue();

    return 0;
}
```

## 📤 Output

```text
Hello World
```

## 📄 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

**Mohamed Askar**

💻 C++ Developer | Programming Enthusiast

<p align="center">
  ❤️ Made with C++ and passion for programming.
</p>