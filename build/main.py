from tests import power

def main():
	print("Please provide:\n")
	base = int(input("The base:  "))
	exp = int(input("The exponent:  "))
	
	ret = power(base, exp)
	
	print(f"{base} to the power of {exp} is {ret}")
	
	
main()
