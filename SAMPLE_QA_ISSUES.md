# Sample QA Issue Register

Create these as actual GitHub Issues and replace these examples with the real issue numbers/URLs.

## QA-01 — LED pin not initialized
- Severity: Medium
- Root-cause hypothesis: setup() does not call pinMode(LED_PIN, OUTPUT).
- Proposed fix: initialize the LED pin as OUTPUT.
- Acceptance: compile and confirm LED output on selected board.
- Status: Not verified; student action required.

## QA-02 — Blocking delay
- Severity: Medium
- Root cause: delay() blocks loop execution.
- Proposed fix: use millis() elapsed-time comparison.
- Acceptance: final loop has no delay() and remains responsive.
- Status: Not verified; student action required.

## QA-03 — Hard-coded LED pin
- Severity: Low
- Root cause: hard-coded pin number can be board-specific.
- Proposed fix: use LED_BUILTIN where supported.
- Acceptance: compile for selected board and verify onboard LED mapping.
- Status: Not verified; student action required.

## QA-04 — millis() rollover handling
- Severity: Medium
- Root cause: naive absolute-time comparisons can fail when millis() wraps.
- Proposed fix: compare unsigned elapsed time by subtraction.
- Acceptance: review expression and perform a suitable test if required.
- Status: Code pattern included; student review/testing required.
