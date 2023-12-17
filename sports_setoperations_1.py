
def remove_duplicates(lst):
    return list(set(lst))

def intersection(lst1, lst2):
    return list(set(lst1) & set(lst2))

def union(lst1, lst2):
    return list(set(lst1) | set(lst2))

def difference(lst1, lst2):
    return list(set(lst1) - set(lst2))

def symmetric_difference(lst1, lst2):
    return list(set(lst1) ^ set(lst2))

SEComp = ['mugdha', 'rohit', 'ruchi', 'shruti', 'sanika', 'achal']

Cricket = ['mugdha', 'rohit', 'ruchi', 'shruti']

Badminton = ['rohit', 'ruchi', 'sanika', 'achal']

Football = ['ruchi', 'sanika', 'achal']

Cricket = remove_duplicates(Cricket)
Badminton = remove_duplicates(Badminton)
Football = remove_duplicates(Football)

both_cricket_badminton = intersection(Cricket, Badminton)
print("List of students who play both cricket and badminton:", both_cricket_badminton)

either_cricket_or_badminton_not_both = symmetric_difference(Cricket, Badminton)
print("List of students who play either cricket or badminton but not both:", either_cricket_or_badminton_not_both)

neither_cricket_nor_badminton = difference(SEComp, union(Cricket, Badminton))
print("List of students who play neither cricket nor badminton:", neither_cricket_nor_badminton)

cricket_football_not_badminton = difference(intersection(Cricket, Football), Badminton)
print("Number of students who play cricket and football but not badminton:", len(cricket_football_not_badminton))
