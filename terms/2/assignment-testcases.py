import traceback
import os
import pandas as pd
import csv
import assignment2 as sample2

def validate_result(result, expected, inputs):
	"""
	Helper function to validate the result against the expected value.
	"""
	if result != expected:
		return False, f"Input: {inputs}, Expected: {expected} ({type(expected)=}), Got: {result} ({type(result)=})"
	return True, "All test cases passed"

def test_task1(module):
	try:
		result = module.task1()
		return validate_result(result, "Hello world", "No input")
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task2(module):
	try:
		inputs = [(5, 10), (-5, -10), (0, 0)]
		expected = ["15", "-15", "0"]
		for inp, exp in zip(inputs, expected):
			result = module.task2(*inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task3(module):
	try:
		inputs = [2, -3, 0, 10, 100]
		expected = ["4", "9", "0", "100", "10000"]
		for inp, exp in zip(inputs, expected):
			result = module.task3(inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task4(module):
	try:
		inputs = [[1, 2, 3], [], [0, -1, -2]]
		expected = ["[2, 4, 6]", "[]", "[0, -2, -4]"]
		for nums, exp in zip(inputs, expected):
			result = module.task4(nums)
			success, message = validate_result(result, exp, nums)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task5(module):
	try:
		inputs = [[1, 2, 3], [], [0, -1, -2]]
		expected = ["[2, 4, 6]", "[]", "[0, -2, -4]"]
		for nums, exp in zip(inputs, expected):
			result = module.task5(nums)
			success, message = validate_result(result, exp, nums)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task6(module):
	try:
		inputs = [[1, 2, 3, 4, 5], [0, -2, -4, -6], [1, 3, 5]]
		expected = ["[2, 4]", "[0, -2, -4, -6]", "[]"]
		for nums, exp in zip(inputs, expected):
			result = module.task6(nums)
			success, message = validate_result(result, exp, nums)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task7(module):
	try:
		inputs = [0, 1, 5]
		expected = ["1", "1", "120"]
		for num, exp in zip(inputs, expected):
			result = module.task7(num)
			success, message = validate_result(result, exp, num)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task8(module):
	try:
		inputs = [0, 1, 5, 10]
		expected = ["0", "1", "5", "55"]
		for n, exp in zip(inputs, expected):
			result = module.task8(n)
			success, message = validate_result(result, exp, n)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task9(module):
	try:
		inputs = [(10, 2), (15, 3), (0, 1), (10, 0)]
		expected = ["5.0", "5.0", "0.0", "Error"]
		for inp, exp in zip(inputs, expected):
			result = module.task9(*inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task10(module):
	try:
		expected = os.getcwd()
		result = module.task10()
		return validate_result(result, expected, "No input")
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task11(module):
	try:
		file_path = module.task11()
		if not os.path.isfile(file_path):
			return False, f"Invalid file path: {file_path}"
		with open(file_path, "r") as f:
			content = f.read().strip()
			if content != "Hello, World!":
				return False, f"Expected 'Hello, World!', Got: '{content}'"
		os.remove(file_path)
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task12(module):
	try:
		temp_file = "test_file.txt"
		with open(temp_file, "w") as f:
			f.write("This is a test.")
		result = module.task12(temp_file)
		if result.strip() != "This is a test.":
			return False, f"Expected 'This is a test.', Got: '{result.strip()}'"
		os.remove(temp_file)
		result = module.task12("non_existent_file.txt")
		return validate_result(result, "Error", "non_existent_file.txt")
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task13(module):
	try:
		csv_content = [["Name", "Age"], ["Alice", '30'], ["Bob", '25']]
		file_path = module.task13(csv_content)
		if not os.path.isfile(file_path):
			return False, f"Invalid file path: {file_path}"
		with open(file_path, "r") as f:
			reader = csv.reader(f)
			content = list(reader)
			if content != csv_content:
				return False, f"Expected: {csv_content}, Got: {content}"
		os.remove(file_path)
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task14(module):
	try:
		inputs = ['{"key": "value"}', '{"list": [1, 2, 3]}', "invalid"]
		expected = ["{'key': 'value'}", "{'list': [1, 2, 3]}", "Error"]
		for inp, exp in zip(inputs, expected):
			result = module.task14(inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task15(module):
	try:
		inputs = [{"name": "Alice"}, [1, 2], "string", 42]
		expected = ['{"name": "Alice"}', "[1, 2]", '"string"', "42"]
		for inp, exp in zip(inputs, expected):
			result = module.task15(inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task16(module):
	try:
		temp_csv = "test_file.csv"
		data = "Name,Age\nAlice,30\nBob,25"
		with open(temp_csv, "w") as file:
			file.write(data)
		result = module.task16(temp_csv)
		if not isinstance(result, pd.DataFrame):
			return False, f"Expected a DataFrame, Got: {type(result)}"
		expected = pd.DataFrame({"Name": ["Alice", "Bob"], "Age": [30, 25]})
		if not result.equals(expected):
			return False, f"Expected: {expected.to_dict()}, Got: {result.to_dict()}"
		os.remove(temp_csv)
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task17(module):
	try:
		inputs = [
			["1", "2", "3"],
			["1", "a", "3"],
			["a", "b", "c"]
		]
		expected = [
			"[1, 2, 3]",
			"[1, -1, 3]",
			"[-1, -1, -1]"
		]
		for inp, exp in zip(inputs, expected):
			result = module.task17(inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task18(module):
	try:
		inputs = [
			[[1, 1, 0], [0, 1, 0], [1, 1, 1]],
			[[1, 0, 1, 2], [0, 3, 0, 0], [1, 4, 1, 1]]
		]
		expected = [
			[[0, 0, 1], [1, 0, 1], [0, 0, 0]],
			[[0, 1, 0], [1, 1, 1], [0, 0, 0]]
		]
		for inp, exp in zip(inputs, expected):
			result = eval(module.task18(inp))
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task19(module):
	try:
		inputs = [
			[[1, 3], [2, 3]],  # Judge exists
			[[1, 2], [2, 3], [3, 1]],  # Cycle, no judge
			[[1, 2], [3, 2], [4, 5]],  # Disconnected graph
			[],  # Empty trust array
			[[1, 4], [2, 4], [3, 4], [4, 5]],  # No judge
			[[1, 6], [2, 6], [3, 6], [4, 6], [5, 6], [1, 6]]  # Valid judge
		]
		expected = ["3", "-1", "-1", "-1", "-1", "6"]
		for inp, exp in zip(inputs, expected):
			result = module.task19(inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_task20(module):
	try:
		inputs = [
			[1, 1, 2, 2, 2, 3],  # Mixed frequencies
			[4, 4, 4, 5, 6, 6],  # Tie-breaking by value
			[7]  # Single element
		]
		expected = [
			"[3, 1, 1, 2, 2, 2]",
			"[5, 6, 6, 4, 4, 4]",
			"[7]"
		]
		for inp, exp in zip(inputs, expected):
			result = module.task20(inp)
			success, message = validate_result(result, exp, inp)
			if not success:
				return False, message
		return True, "All test cases passed"
	except Exception:
		return False, f"Error: {traceback.format_exc()}"

def test_all(module):
	test_cases = [
		test_task1,
		test_task2,
		test_task3,
		test_task4,
		test_task5,
		test_task6,
		test_task7,
		test_task8,
		test_task9,
		test_task10,
		test_task11,
		test_task12,
		test_task13,
		test_task14,
		test_task15,
		test_task16,
		test_task17,
		test_task18,
		test_task19,
		test_task20
	]
	results = []
	for test_case in test_cases:
		results.append(test_case(module))
	return results

messages = test_all(sample2)

for i, message in enumerate(messages):
	# Green for success, red for failure
	color = "\033[92m" if message[0] else "\033[91m"  # Green: \033[92m, Red: \033[91m
	reset_color = "\033[0m"  # Reset to default color
	print(f"{color}Task {i+1}: {message[1]}{reset_color}")

