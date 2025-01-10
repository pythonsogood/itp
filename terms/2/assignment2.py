def task1() -> str:
	"""
	This function returns a function that returns "Hello world".

	Returns:
	function: "Error" if an exception occurs or a valid result as a string.
	"""
	result = None
	try:
		def func() -> str:
			return "Hello world"
		result = func() # or return lambda : "Hello world"
		# i guess there is error either in task or in testcases
		# waits for return Callable[[], str], but validator expects str
		# if so, func should not be called here, just func without brackets
	except Exception as e:
		result = "Error"
	finally:
		return result


def task2(num1: int, num2: int) -> str:
	"""
	This function calculates the sum of two integers and always returns the result as a string.

	Parameters:
	num1 (int): The first number.
	num2 (int): The second number.

	Returns:
	str: The sum of the two numbers
	"""
	result = None
	try:
		result = str(num1 + num2)
	except:
		result = "Error"
	finally:
		return result


def task3(num: int) -> str:
	"""
	This function calculates the square of a number and always returns the result as a string.

	Parameters:
	num (int): The number to be squared.

	Returns:
	str: The square of the number
	"""
	result = None
	try:
		result = str(num ** 2)
	except:
		result = "Error"
	finally:
		return result


def task4(nums: list) -> str:
	"""
	This function doubles each number in a list and always returns the result as a string.
	You should use a loop to solve this problem!

	Returns:
	str: The result of the multiplication
	"""
	result = None
	try:
		result = []
		for i in nums:
			result.append(i * 2)
		result = str(result)
		# list comprehension is better: str([i * 2 for i in nums])
	except:
		result = "Error"
	finally:
		return result


def task5(nums: list) -> str:
	"""
	This function doubles each number in a list and always returns the result as a string.
	You should use lamda to solve this task!

	Parameters:
	nums (list): A list of integers.

	Returns:
	str: A string representation of the doubled list
	"""
	result = None
	try:
		result = str(list(map(lambda i: i * 2, nums)))
		# list comprehension is better: str([i * 2 for i in nums])
	except:
		result = "Error"
	finally:
		return result


def task6(nums: list) -> str:
	"""
	This function filters even numbers from a list and always returns the result as a string.
	You should use filter to solve this task!

	Parameters:
	nums (list): A list of integers.

	Returns:
	str: A string representation of the list of even numbers
	"""
	result = None
	try:
		result = str(list(filter(lambda i: i % 2 == 0, nums)))
		# list comprehension is better: str([i for i in nums if i % 2 == 0])
	except:
		result = "Error"
	finally:
		return result


def task7(num: int) -> str:
	"""
	This function calculates the factorial of a number and always returns the result as a string.
	You should use recursion to solve this task!

	Parameters:
	num (int): The number for which to calculate the factorial.

	Returns:
	str: The factorial of the number
	"""
	result = None
	try:
		def factorial(n: int) -> int:
			return 1 if n <= 1 else n * factorial(n-1)
		result = str(factorial(num))
	except:
		result = "Error"
	finally:
		return result


def task8(n: int) -> str:
	"""
	This function calculates the nth Fibonacci number and always returns the result as a string.
	You should use recursion to solve this task!

	Parameters:
	n (int): The position in the Fibonacci sequence.

	Returns:
	str: The nth Fibonacci number
	"""
	result = None
	try:
		def fibonacci(n: int) -> int:
			return 0 if n <= 0 else 1 if n == 1 else fibonacci(n-1) + fibonacci(n-2)
		result = str(fibonacci(n))
	except:
		result = "Error"
	finally:
		return result


def task9(num1: int, num2: int) -> str:
	"""
	This function divides two numbers and handles division by zero, always returning the result as a string.
	You should use your own try except statement
	Rais a ZeroDivisionError if num2 is 0 and catch it, when you will catch it, return "Error"!

	Parameters:
	num1 (int): The numerator.
	num2 (int): The denominator.

	Returns:
	str: The result of the division
	"""
	result = "Error"

	# --- start your code here ----
	try:
		result = str(num1 / num2)
	except ZeroDivisionError:
		result = "Error"
	# --- end your code here ----
	return result


def task10() -> str:
	"""
	This function retrieves the current working directory and always returns it as a string.

	Returns:
	str: The current working directory
	"""
	import os
	result = None
	try:
		result = os.getcwd()
	except:
		result = "Error"
	finally:
		return result


def task11() -> str:
	"""
	This function writes "Hello, World!" to a file and always returns the path to the file as a string.

	Returns:
	str: The path to the file
	"""
	result = None
	try:
		result = "foo.txt"
		with open(result, "w") as f:
			f.write("Hello, World!")
	except:
		result = "Error"
	finally:
		return result


def task12(path: str) -> str:
	"""
	This function reads a file and always returns the content as a string. You should return "Error" if an exception occurs.

	Parameters:
	path (str): The path to the file to be read.

	Returns:
	str: The content of the file
	"""
	result = None

	# --- start your code here ----
	try:
		with open(path, "r") as f:
			result = f.read()
	except Exception:
		result = "Error"
	# --- end your code here ----
	return result

def task13(csv_content) -> str:
	"""
	This function writes a simple CSV file, stores it, and always returns the path to it as a string.

	Parameters:
	csv_content: The content to be written to the CSV file.

	Returns:
	str: The path to the CSV file
	"""
	import csv
	result = None
	try:
		result = "foo.csv"
		with open(result, "w") as f:
			writer = csv.writer(f, lineterminator="\r")
			writer.writerows(csv_content)
	except:
		result = "Error"
	finally:
		return result


def task14(json_data) -> str:
	"""
	This function parses a JSON string and always returns its content as a string.
	You should use the json module to solve this task!
	You should use try except to catch the exception if it occurs.

	Parameters:
	json_data: The JSON string to be parsed.

	Returns:
	str: The parsed JSON content
	"""
	import json
	result = None

	# --- start your code here ----
	try:
		result = str(json.loads(json_data))
	except json.JSONDecodeError:
		result = "Error"
	# --- end your code here ----
	return result


def task15(input) -> str:
	"""
	This function writes an input to a json and returns json

	Parameters:
	input: dictionary, list, tuple, string, int, float, boolean, None

	Returns:
	json: The input converted to json
	"""
	import json
	result = None
	try:
		result = json.dumps(input, ensure_ascii=False) # ensure_ascii=False fixes cyrillic (non-ascii) characters
	except Exception:
		result = "Error"
	finally:
		return result

def task16(csv_path: str) -> str:
	"""
	This function uses pandas to read a CSV file and returns a dataFrame containing the content of the CSV file.

	Parameters:
	csv_path (str): The path to the CSV file to be read.

	Returns:
	pandas.DataFrame: The content of the CSV file
	"""
	import pandas
	result = None
	try:
		result = pandas.read_csv(csv_path)
	except:
		result = "Error"
	finally:
		return result

def task17(list_of_strings: list) -> str:
	"""
	This function uses map to convert all strings in a list to integers.

	Parameters:
	list_of_strings (list): A list of strings, for nonnumeric strings return -1.

	Returns:
	list: A list of integers
	"""
	result = None
	try:
		result = str(list(map(lambda i: int(i) if i.isnumeric() else -1, list_of_strings)))
		# list comprehension is better: str([int(i) if i.isnumeric() else -1 for i in list_of_strings])
	except:
		result = "Error"
	finally:
		return result

# flipping an image
def task18(matrix: list) -> str:
	"""
	This function filters out all the numbers in matrix that are not 0 or 1
	and flips the matrix.
	You should use filter to drop all non 0 and non 1 the numbers in the matrix.

	Flip -> reverse all 1 to 0 and 0 to 1
	You should use map to reverse the numbers in the matrix.

	Example:
		matrix = [[1,1,0],[0,1,0],[1,1,1]]
		flipped = [[0,0,1],[1,0,1],[0,0,0]]

	Example2:
		matrix = [[1,0,1,2],[0,3,0,0],[1,4,1,1]]
		flipped = [[0,1,0],[1,1,1],[0,0,0]]

	Parameters:
		matrix (list): A list of lists of integers.

	Returns:
		matrix (list): A list of lists of integers
	"""
	result = None
	try:
		result = str([list(map(lambda i: int(not i), list(filter(lambda i: i in {0, 1}, row)))) for row in matrix])
		# list comprehension is better and easier to read: str([[int(not i) for i in row if i in {0, 1}] for row in matrix])
	except:
		result = "Error"
	finally:
		return result

# find the town judge
def task19(nums: list) -> str:
	"""
	This function returns the town judge in a town of N people
	The town judge is the person that trusts nobody and everybody trusts him.
	It is guaranteed to be at most one town judge.

	Example:
		nums = [[1,3],[2,3]]
		judge = 3
		why? because 1 trusts 3, and 2 trust 3, there is only 1 2 3, thus everyone except 3 trust 3.

	Example2:
		nums = [[1,2],[2,3], [3,1]]
		judge = -1
		why? because 1 trusts 2, 2 trust 3, but 3 trust 1, there are only 1, 2, 3 and all of them trust to someone.

	Parameters:
		nums (list): A list of lists of integers.

	Returns:
		int: The town judge
	"""
	result = None
	try:
		trusters, trusteds = [], []
		for num in nums:
			trusters.append(num[0])
			trusteds.append(num[1])
		result = str(next((i for i in trusteds if i not in trusters and trusteds.count(i) == len(trusters)), -1))
	except Exception as e:
		result = "Error"
	finally:
		return str(result)

#sort list by increasing frequency
def task20(nums: list) -> str:
	"""
	Sort elements in the list by their frequency

	Example:
		nums = [1,1,2,2,2,3]
		output = [3,1,1,2,2,2]
		explanation = '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

	Parameters:
		nums (list): A list of integers.

	Returns:
		list: A list of integers sorted by frequency
	"""
	result = None
	try:
		result = sorted(nums, key=nums.count)
	except Exception as e:
		result = "Error"
	finally:
		return str(result)