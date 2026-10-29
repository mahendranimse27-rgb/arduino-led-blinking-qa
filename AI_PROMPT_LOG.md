# AI Prompt Log — Arduino LED Blinking QA

> Record the actual AI tool, date, prompts, outputs, and your verification. The entries below are example prompts/templates; update them to match the prompts you actually used.

## Prompt 1 — Code review
**Prompt:** “Review this Arduino LED blinking sketch for compile-time errors, logic errors, timing problems, and maintainability. List each issue with severity and explain how to reproduce it.”

**Use:** Identify potential defects before changing the code.
**Verification:** Compile in Arduino IDE and inspect each suggestion. Record the IDE version, board, and actual result.

## Prompt 2 — Root-cause analysis
**Prompt:** “For each identified issue, explain the likely root cause and propose a minimal fix. Separate confirmed defects from hypotheses that need hardware testing.”

**Use:** Create clear GitHub issue descriptions.
**Verification:** Compare the explanation against the source code and test plan.

## Prompt 3 — Non-blocking refactor
**Prompt:** “Refactor the LED blink example to use millis() instead of delay(), initialize the LED pin correctly, use LED_BUILTIN, and explain how unsigned time subtraction handles millis() rollover.”

**Use:** Produce a maintainable candidate solution.
**Verification:** Review the code yourself, compile it, and test timing on the selected board. AI output alone is not proof of correctness.

## Prompt 4 — Test plan
**Prompt:** “Create a test plan for an Arduino built-in LED that checks compilation, pin initialization, approximate 500 ms transitions, long-running operation, and whether the loop remains non-blocking.”

**Use:** Define measurable acceptance criteria.
**Verification:** Mark each test Pass/Fail/Not Run only after execution and retain screenshots or notes.

## AI-output verification record
| AI suggestion | Verification method | Result |
|---|---|---|
| Initialize LED pin as OUTPUT | Code review + compile + hardware check | Not run — student to complete |
| Use millis() instead of delay() | Code review + inspect loop timing | Not run — student to complete |
| Use LED_BUILTIN for portability | Compile on selected board | Not run — student to complete |
| Use unsigned subtraction for elapsed time | Code review; optional rollover-focused test | Not run — student to complete |

## Notes
Never report an AI suggestion as a verified fix until you have checked it. Replace “Not run” with your actual results.
