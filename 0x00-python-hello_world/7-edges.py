#!/usr/bin/python3
word = "Holberton"
word_first_3 = word[:3]
word_last_2 = word[-2:]
middle_index = len(word) // 2
middle_word = word[middle_index] if len(word) % 2 != 0 else word[middle_index-1:middle_index+1]

print(f"First 3 letters: {word_first_3}")
print(f"Last 2 letters: {word_last_2}")
print(f"Middle word: {middle_word}")
