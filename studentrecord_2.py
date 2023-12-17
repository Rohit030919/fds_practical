def student_info():
    marks = []
    print("\nEnter marks for 10 students in Fundamental of Data structures:")
    print("\nEnter -1 For Absent Students")
    for i in range(10):
        M = int(input(f"Enter the marks for student {i + 1}: "))
        marks.append(M)
    return marks

def average_marks(marks):
    total = sum(marks)
    cnt = len(marks)
    print("Average Score of the class (in integer): ", total // cnt)
    print("Average Score of the class (in decimal): ", total / cnt)

def max_min(marks):
    print("Highest Marks: ", max(marks))
    print("Lowest Marks: ", min(marks))

def highest_freq(marks):
    freq = {}
    for mark in marks:
        freq[mark] = freq.get(mark, 0) + 1

    max_freq = max(freq.values())
    most_common_marks = [mark for mark, f in freq.items() if f == max_freq]

    print("Highest frequency: ", max_freq)
    print("Marks with highest frequency: ", most_common_marks)

def absent_students(marks):
    cnt = marks.count(-1)
    print("Number of students absent for the test: ", cnt)

marks = student_info()

print("\nAll recorded marks:", marks)

print("\nStatistics:")
average_marks(marks)
max_min(marks)
highest_freq(marks)
absent_students(marks)
