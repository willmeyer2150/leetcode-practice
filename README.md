# LeetCode Practice

Goal:
- Complete 1 LeetCode problem per day
- Build problem-solving skills for software engineering interviews
- Track progress publicly on GitHub

---

## Progress

| # | Problem | Difficulty | Status |
|---|----------|------------|---------|
| 13 | Roman to Integer | Easy | ✅ Completed June 07, 2026 |
| 27 | Remove Element | Easy | ✅ Completed June 05, 2026 |
| 28 | Find the Index of the First Occurrence in a String | Easy | ✅ Completed June 24, 2026 |
| 88 | Merge Sorted Array | Easy | ✅ Completed June 04, 2026 |
| 121 | Best Time to Buy and Sell Stock | Easy | ✅ Completed June 09, 2026 |
| 283 | Move Zeroes | Easy | ✅ Completed June 26, 2026 |
| 374 | Guess Number Higher or Lower | Easy | ✅ Completed June 08, 2026 |
| 001 | Two Sum | Easy | ✅ Completed June 27, 2026 |

---

# Starting a New LeetCode Problem

## 1. Create the Problem Folder

Choose the appropriate difficulty folder and create a directory using the format:

```
####-problem-name
```

Example:

```bash
mkdir easy/0027-remove-element
```

---

## 2. Copy the Templates

From the root directory, copy the solution and notes templates into the new folder:

```bash
cp templates/solution_template.cpp \
   easy/0027-remove-element/solution.cpp

cp templates/notes_template.md \
   easy/0027-remove-element/notes.md
```

---

## 3. Open the Problem

Read the LeetCode prompt and examples carefully.

Think through:

* Inputs
* Outputs
* Constraints
* Edge cases
* Possible approaches

Do not immediately search for a solution.

---

## 4. Develop in the Playground

Work in:

```text
playground/main.cpp
```

Use the playground for:

* Experimentation
* Debugging
* Test cases
* Printing intermediate results

Compile and run:

```bash
g++ testing_ground/main.cpp -o build/test
./build/test
```

---

## 5. Submit to LeetCode

Once the solution works locally:

* Paste the solution into LeetCode.
* Run the sample tests.
* Submit.

---

## 6. Archive the Final Solution

Copy the final accepted solution into:

```text
easy/0027-remove-element/solution.cpp
```

Remove all testing code, print statements, and main functions.

Only keep the code that would be submitted to LeetCode.

---

## 7. Update Notes

Complete:

```text
easy/0027-remove-element/notes.md
```

Record:

* Initial thoughts
* Key insight
* What you learned
* Time complexity
* Space complexity
* Whether you could solve it again without help

---

## 8. Commit the Problem

```bash
git add .
git commit -m "Solve #27 Remove Element"
git push
```

---

## Goal

Focus on consistency rather than volume.

* Monday–Friday: Solve 1 new problem.
* Saturday: Review the week's problems.
* Sunday: Rest or review notes.

A repository with 75–100 thoughtfully solved problems and notes is more valuable than rushing through hundreds without reflection.
