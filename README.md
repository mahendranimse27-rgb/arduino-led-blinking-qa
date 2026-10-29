# Arduino LED Blinking — AI-Assisted GitHub QA Activity

## Objective
Create a simple LED blinking program, use an AI assistant to review and refactor it, track QA issues in GitHub, and document verification.

## Hardware
- Arduino Uno or compatible board
- USB cable
- Built-in LED on pin 13 (no external LED required)

## Final code
Open `arduino-led-blinking-qa.ino` in Arduino IDE, select the correct board and port, then upload.

## Expected behavior
The built-in LED should switch ON and OFF at 500 ms intervals (about one complete ON/OFF cycle per second).

## QA workflow
1. Create a GitHub repository named `arduino-led-blinking-qa`.
2. Upload this README, the `.ino` file, and `AI_PROMPT_LOG.md`.
3. Create GitHub Issues for the sample issues documented in the report. Do not mark a test as passed until you perform it.
4. Make a branch such as `fix/non-blocking-blink`, commit the change, and open a pull request if your course workflow permits.
5. Add your actual test results, screenshots, and repository URL to the report before Moodle submission.

## Suggested repository structure
```
arduino-led-blinking-qa/
├── arduino-led-blinking-qa.ino
├── README.md
├── AI_PROMPT_LOG.md
├── docs/
│   └── TEST_PLAN.md
└── .github/
    └── ISSUE_TEMPLATE/
        └── bug_report.md
```

## Important
This package is a starter template. A real GitHub repository has not been created or pushed by this package. Add your own repository URL and evidence after completing the steps.
