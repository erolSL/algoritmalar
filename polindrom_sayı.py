#-*-coding: utf-8-*-

def pol(n):
	if n == 1:
		print str(n),
	else:
		pol(n - 1)
		print str(n) ,
		pol(n - 1)
sayi = input("sayi kaç olsun: ")
pol(sayi)
