row = int(input("Enter number of rows: "))
col = int(input("Enter number of columns: "))


def get_matrix(row, col):
    M = []
    for i in range(row):
        m = []
        for j in range(col):
            a = int(input("Enter No.: "))
            m.append(a)
        M.append(m)
    return M


def disp(M):
    for i in range(len(M)):
        for j in range(len(M[0])):
            print(M[i][j], end=" ")
        print()
    return M


def add_matrix(matrix1, matrix2):
    add = []
    for i in range(len(matrix1)):
        a = []
        for j in range(len(matrix1[0])):
            addition = matrix1[i][j] + matrix2[i][j]
            a.append(addition)
        add.append(a)
    return add


def sub_matrix(matrix1, matrix2):
    sub = []
    for i in range(len(matrix1)):
        a = []
        for j in range(len(matrix1[0])):
            subtract = matrix1[i][j] - matrix2[i][j]
            a.append(subtract)
        sub.append(a)
    return sub


def trans_matrix(matrix1):
    t = []
    for i in range(len(matrix1[0])):
        a = []
        for j in range(len(matrix1)):
            transpose = matrix1[j][i]
            a.append(transpose)
        t.append(a)
    return t


def multiply_matrix(matrix1, matrix2):
    result = []
    for i in range(len(matrix1)):
        row = []
        for j in range(len(matrix2[0])):
            product = 0
            for k in range(len(matrix2)):
                product += matrix1[i][k] * matrix2[k][j]
            row.append(product)
        result.append(row)
    return result


matrix1 = get_matrix(row, col)
print("_______________")
matrix2 = get_matrix(row, col)
print("_______________")
print("Matrix 1:")
disp(matrix1)
print("_______________")
print("Matrix 2:")
disp(matrix2)
print("_______________")
Addition = add_matrix(matrix1, matrix2)
print("Matrix Addition:")
disp(Addition)
print("_______________")
Subtract = sub_matrix(matrix1, matrix2)
print("Matrix Subtraction:")
disp(Subtract)
print("_______________")
print("Transpose of Matrix 1 :")
Transpose = trans_matrix(matrix1)
disp(Transpose)
print("_______________")
Multiply = multiply_matrix(matrix1, matrix2)
print("Matrix Multiplication:")
disp(Multiply)
print("_______________")
