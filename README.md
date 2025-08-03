# Virtual Assistant Chatbot (C++)

## Overview
This is a simple **virtual assistant chatbot** built using **C++** designed to automate basic tasks for students of **Graphic Era Hill University (GEHU)**.  
The chatbot interacts with the user, answers simple questions, and can open university-related websites such as ERP, hostel booking, campus location on Google Maps, and even the NSS Instagram profile.

It also integrates **text-to-speech (TTS)** using `espeak` to make the responses more interactive.

---

## Features
- **User Authentication**: Requires a password before access.
- **Time-based Greeting**: Morning, Afternoon, or Evening greetings.
- **Interactive Chat**: Answers common questions like:
  - Greetings (`hi`, `hello`, `how are you?`)
  - Chatbot identity (`what is your name?`, `your age?`)
- **University Utilities**:
  - Open ERP for fee submission
  - View hostel booking page
  - Access NSS Instagram profile
  - View campus locations on Google Maps (Bhimtal, Dehradun, Haldwani)
  - Open official campus websites
  - Open YouTube for university videos
- **Text-to-Speech**: Uses `espeak` for spoken responses.

---

## Technologies Used
- **C++** (Core logic and interaction)
- **Windows API** (for system operations)
- **espeak** (Text-to-Speech engine)

---


2. Install espeak (Windows)
Download and install from espeak official site

4. Compile the code
g++ chatbot.cpp -o chatbot.exe

5. Run the executable
./chatbot.exe

Usage
Default Password: kashish

Menu Options:

1 → Ask simple questions

2 → Submit fee (opens ERP)

3 → Open NSS profile

4 → Open YouTube university search

5 → Show campus location

6 → Open campus website

7 → Book hostel
