def ishamming(x):
	if(x == 1):
		return 1
	if(x%2 == 0):
		return ishamming(x / 2)
	if(x%3 == 0):
		return ishamming(x / 3)
	if(x%5 == 0):
		return ishamming(x / 5)
	return 0
def hamming(x):
	if(x == 1):
		print "%d sayisi hamming sayisi degildir."%x
	elif(ishamming(x)):
		print "%d sayisi hamming sayisidir."%x
	else:
		print "%d sayisi hamming sayisi degildir."%x


n = input("sayi girin: ")
hamming(n)
