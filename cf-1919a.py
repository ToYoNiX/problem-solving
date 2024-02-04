T = int(input())
while T:
	turns = input()
	turns = turns.split()
	A = int(turns[0])
	B = int(turns[1])
	if A == B:
		print("Bob")
	elif A % 2 == 0 and B % 2 == 0:
		print("Bob")
	elif A % 2 != 0 and B % 2 != 0:
		print("Bob")
	elif A % 2 != 0 and B % 2 == 0:
		print("Alice")
	else:
		print("Alice")
	T -= 1
