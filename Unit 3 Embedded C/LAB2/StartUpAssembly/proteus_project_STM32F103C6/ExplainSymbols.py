import os

# Get a list of all files in the current directory
all_files = os.listdir()

# Get a list of all files with the .txt extension
txt_files = [f for f in all_files if f.endswith("Symbols.txt")]

for txt_file in txt_files:
    with open(txt_file, "r") as file:
        # Read the contents of the file
        contents = file.read()

        # Split the contents into lines
        lines = contents.split("\n")
        lines = [line for line in lines if line.strip() != ""]

        NewLines = []

        # Iterate through the lines
        for line in lines:
            # Split the line into words
            words = line.split(" ")
            # Strip empty spaces
            words = [word for word in words if word.strip() != ""]

            for word in words:
              if word == 't':
                NewLines.append(f'Symbol: {words[-1]} ->  is a local symbol')
              elif word == 'T':
                NewLines.append(f'Symbol: {words[-1]} -> is a local symbol')
              elif word == 'U':
                NewLines.append(f'Symbol: {words[-1]} -> is an undefined symbol, make sure the linker'
                                  ' sees \n\t this symbol in another file')
              else:
                continue


    with open(txt_file.strip('.txt') + "_Explained.txt", "w") as file:
        # Write the list of strings to the file
        file.writelines("%s.\n\n" % line for line in NewLines)