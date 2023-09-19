# number of terms in the sequence
n = int(input("Enter the number of terms: "))

# Initialize the first term of the series
first_term = 1

# Initialize a list to store the sequence
sequence = []#store numbers in the series (sequence)
#empty list 

# Generate the sequence
for i in range(n):
    sequence.append(first_term)
    first_term += (i + 2)  # Add consecutive positive integers

# Print the sequence
print(sequence)


#OUTPUT#----------------------------------------------------------------------------------------------------
Enter the number of terms: 17
[1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153]
