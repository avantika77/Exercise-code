# Define the number of terms in the sequence
n = int(input("Enter the number of terms: "))

# Initialize the first term of the sequence
current_term = 2

# Initialize a list to store the sequence
sequence = []

# Generate the sequence
for i in range(n):
    sequence.append(current_term)
    num=2
    current_term = current_term *i+num

    num+=1
    
# Print the sequence
print(sequence)
