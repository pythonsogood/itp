# You are only allowed to work inside the functions that I provided to you!

def task1(num1: int, num2: int) -> str:
	"""
	This function compares two integers and returns a message indicating their relationship.

	Parameters:
	num1 (int): First integer.
	num2 (int): Second integer.

	Returns:
	str: A messages either "num1 is greater than num2", "num1 is less than num2", or "num1 is equal to num2".
	"""
	result = None
	try:
		# result = int("Perform calculations in this block")
		result = "num1 is greater than num2" if num1 > num2 else "num1 is less than num2" if num1 < num2 else "num1 is equal to num2"
	except:
		result = "Error"
	finally:
		return result

def task2(number: int) -> str:
	"""
	This function checks if a number is divisible by both 3 and 5.
,
	Parameters:
	number (int): An integer.

	Returns:
	str: True if divisible by both 3 and 5, False otherwise.
	"""
	result = None
	try:
		# result = int("Perform calculations in this block")
		result = str(number % 3 == 0 and number % 5 == 0)
	except:
		result = "Error"
	finally:
		return result

def task3(score: int) -> str:
	"""
	This function assigns a grade based on the score.

	Parameters:
	score (int): An integer between 0 and 100.

	Scores change every 10 points: first A, then B, then C, then Fail.

	Returns:
	str: Grade ('A', 'B', 'C', or 'Fail').
	"""
	grade = None
	try:
		# grade = int("Perform calculations in this block")
		if score > 90:
			grade = "A"
		elif score > 80:
			grade = "B"
		elif score > 70:
			grade = "C"
		else:
			grade = "Fail"
	except:
		grade = "Error"
	finally:
		return grade

def task4(input_string: str) -> str:
	"""
	This function counts the number of vowels in a given string.

	For this task Y is not a vowel!

	Parameters:
	input_string (str): A string.

	Returns:
	str: Number of vowels.
	"""
	vowel_count = None
	try:
		# vowel_count = int("Perform calculations in this block")
		vowel_count = str(sum(i in {"a", "e", "i", "o", "u"} for i in input_string.lower()))
	except:
		vowel_count = "Error"
	finally:
		return vowel_count

def task5(input_string: str) -> str:
	"""
	This function reverses a given string.

	Parameters:
	input_string (str): A string.

	Returns:
	str: The reversed string.
	"""
	reversed_string = None
	try:
		# reversed_string = int("Perform calculations in this block")
		reversed_string = input_string[::-1]
	except:
		reversed_string = "Error"
	finally:
		return reversed_string

def task6(input_string: str) -> str:
	"""
	This function checks if a string is a palindrome.

	Parameters:
	input_string (str): A string.

	Returns:
	str: True if the string is a palindrome, False otherwise.
	"""
	is_palindrome = None
	try:
		# is_palindrome = int("Perform calculations in this block")
		is_palindrome = str(input_string.lower() == input_string[::-1].lower())
	except:
		is_palindrome = "Error"
	finally:
		return is_palindrome


def task7(numbers: tuple) -> int:
	"""
	This function finds the maximum value in a tuple.

	Parameters:
	numbers (tuple): A tuple of integers.

	Returns:
	str: The maximum value.
	"""
	maximum = None
	try:
		# maximum = int("Perform calculations in this block")
		maximum = str(max(numbers))
	except:
		maximum = "Error"
	finally:
		return maximum


def task8(set1: set, set2: set) -> str:
	"""
	This function performs union, intersection, and difference operations on two sets.

	Parameters:
	set1 (set): First set.
	set2 (set): Second set.

	Returns:
	str: A dictionary containing the results of union, intersection, and difference.
	"""
	results = {}
	try:
		# results = int("Perform calculations in this block")
		results["union"] = set1.union(set2)
		results["intersection"] = set1.intersection(set2)
		results["difference"] = set1.difference(set2)
		results = str(results)
	except:
		results = "Error"
	finally:
		return results

def task9(my_dict: dict, key: str) -> str:
	"""
	This function looks up a value by its key in a dictionary.

	Parameters:
	my_dict (dict): A dictionary with key-value pairs.
	key (str): Key to search in the dictionary.

	Returns:
	str: The value associated with the key or "Key not found".
	"""
	value = None
	try:
		value = str(my_dict.get(key, "Key not found"))
	except:
		value = "Error"
	finally:
		return value

def task10(input_string: str) -> str:
	"""
	This function counts the frequency of each character in a given string.

	Parameters:
	input_string (str): A string.

	Returns:
	str: A dictionary with characters as keys and their frequencies as values.
	"""
	frequency = None
	try:
		# frequency = int("Perform calculations in this block")
		frequency = str({i: input_string.count(i) for i in sorted(set(input_string), key=lambda i: input_string.find(i))})
	except:
		frequency = "Error"
	finally:
		return frequency

def task11(numbers: list) -> str:
	"""
	This function calculates the sum of all elements in a list.

	Parameters:
	numbers (list): A list of integers.

	Returns:
	str: Sum of all elements.
	"""
	total = None
	try:
		# total = int("Perform calculations in this block")
		total = str(sum(numbers))
	except:
		total = "Error"
	finally:
		return total

def task12(items: list) -> str:
	"""
	This function sorts a shopping list alphabetically.

	Parameters:
	items (list): A list of strings representing shopping items.

	Returns:
	str: Sorted shopping list.
	"""
	sorted_list = None
	try:
		# sorted_list = int("Perform calculations in this block")
		# NOTE: it looks like you forgot to convert expected to string, cause it does not passes test case
		sorted_list = str(sorted(items))
	except:
		sorted_list = "Error"
	finally:
		return sorted_list


def task13(numbers: list) -> str:
	"""
	This function finds the second largest number in a list.

	Parameters:
	numbers (list): A list of integers (at least 2 elements).

	Returns:
	str: The second largest number.
	"""
	second_largest = None
	try:
		# second_largest = int("Perform calculations in this block")
		second_largest = str(sorted(numbers, reverse=True)[1])
	except:
		second_largest = "Error"
	finally:
		return second_largest

def task14(sentence: str) -> str:
	"""
	This function finds the longest word in a sentence.

	Parameters:
	sentence (str): A sentence string.

	Returns:
	str: The longest word in the sentence.
	"""
	longest_word = None
	try:
		# longest_word = int("Perform calculations in this block")
		longest_word = sorted(["".join([char for char in word if char.isalnum()]) for word in sentence.strip().split(" ")], key=lambda word: len(word), reverse=True)[0]
	except:
		longest_word = "Error"
	finally:
		return longest_word

def task15(lst: list, target: int) -> str:
	"""
	Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
	You may assume that each input would have exactly one solution, and you may not use the same element twice.
	You can return the answer in any order.

	Parameters:
	lst (list): A list of integers.
	target (int): Target integer.

	Returns:
	str: A list of two integers that add up to the target.
	"""
	indices = None
	try:
		# indices = int("Perform calculations in this block")
		indices = []
		for i, num1 in enumerate(lst):
			for j, num2 in enumerate(lst[i+1:]):
				if num1 + num2 == target:
					indices = [i, j+i+1]
					break
		indices = str(indices)
	except:
		indices = "Error"
	finally:
		return indices

#Roman to Integer
def task16(s: str) -> str:
	"""

	Given a roman numeral, convert it to an integer.

	Parameters:
	s (str): A string of roman numerals.

	Returns:
	str: An integer.
	"""
	result = None
	try:
		# result = int("Perform calculations in this block")
		roman_values = {
			"I": 1,
			"IV": 4,
			"V": 5,
			"IX": 9,
			"X": 10,
			"XL": 40,
			"L": 50,
			"XC": 90,
			"C": 100,
			"CD": 400,
			"D": 500,
			"CM": 900,
			"M": 1000,
		}
		result = 0
		i = 0
		s = s.upper()
		while i < len(s):
			if i+1 < len(s) and s[i:i+2] in roman_values:
				result += roman_values[s[i:i+2]]
				i += 1
			else:
				result += roman_values[s[i]]
			i += 1
		result = str(result)
	except:
		result = "Error"
	finally:
		return result

#remove duplicates
def task17(lst: list) -> str:
	"""
	Given a sorted list nums, remove the duplicates

	Parameters:
	lst (list): A list of integers.

	Returns:
	str: The new list with all the elements being unique.
	"""
	length = None
	try:
		length = str(list(set(lst)))
	except:
		length = "Error"
	finally:
		return length

#contatins duplicates
def task18(lst: list) -> str:
	"""
	Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

	Parameters:
	lst (list): A list of integers.

	Returns:
	str: True if there are duplicates, False otherwise.
	"""
	result = None
	try:
		# result = int("Perform calculations in this block")
		result = str(len(lst) > len(set(lst)))
	except:
		result = "Error"
	finally:
		return result

#return smallest ranges
def task19(lst: list) -> str:
	"""
	Given a list of sorted lists, return the smallest amount of ranges that will cover all elements inside the list, such that each number will belong to at least one range.

	Definition of range: [a,b] where a and b are the first and last elements of the range. the range [a,b] contains all the numbers x such that a <= x <= b

	format for Ranges are:
	1. "a:b" if a != b
	2. "a" if a = b

	Example1:
		Input: [1,2,4,5,6,8,9]
		Output: ["1:2","4:6","8:9"]

	Example2:
		Input: [1,3,5,7,9]
		Output: ["1","3","5","7","9"]

	Parameters:
	lst (list): A list of integers.

	Returns:
	str: The smallest range.
	"""
	range_ = None
	try:
		# range_ = int("Perform calculations in this block")
		range_ = []
		i = 0
		while i < len(lst):
			j = i + 1
			while j < len(lst) and lst[j] - lst[j-1] == 1:
				j += 1
			if j - i == 1:
				range_.append(f"{lst[i]}")
			else:
				range_.append(f"{lst[i]}:{lst[j-1]}")
			i = j
		range_ = str(range_)
	except:
		range_ = "Error"
	finally:
		return range_

#find the difference
def task20(s : str, t: str) -> str:
	"""
	Given a string s and string t, where all characters of t are taken from s ans reshafled, after reshafling I also added additional character that should not present in s, but is present in t. Find the character that was added.

	Parameters:
	s (str): A string.
	t (str): A string.

	Returns:
	str: The character that was added.
	"""
	difference = None
	try:
		# difference = int("Perform calculations in this block")
		difference = next((i for i in t if s.count(i) < t.count(i)), "no difference")
	except:
		difference = "Error"
	finally:
		return difference