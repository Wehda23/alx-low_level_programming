#!/usr/bin/python3
def is_palindrome(num):
    return str(num) == str(num)[::-1]


def largest_palindrome():
    max_palindrome = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > max_palindrome:
                max_palindrome = product
    return max_palindrome


result = largest_palindrome()
# Save the result in the file
with open("102-result", "w") as file:
    file.write(str(result))
