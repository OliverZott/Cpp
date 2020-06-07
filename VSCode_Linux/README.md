https://code.visualstudio.com/docs/cpp/config-linux

### Build  nd Run

- Main menu, choose **Terminal > Configure Default Build Task** -> In dropdown: **C/C++: g++ build active file**
- Go back to respective .cpp file. Your task builds the active file! To run the build task defined in tasks.json, press **Ctrl+Shift+B** or from the Terminal main menu choose **Run Build Task**
- You can modify your *tasks.json* to build multiple C++ files by using an argument like **"${workspaceFolder}/*.cpp"** instead of **${file}**


### Debugging

- Main menu, choose **Run > Add Configuration...** and then choose **C++ (GDB/LLDB)**. In dropdown for various predefined debugging configuration choose **g++ build and debug active file**
- VS Code creates a launch.json
- Go back to respective .cpp file so that it is the active file. Press **F5** or from the main menu choose **Run > Start Debugging**.

