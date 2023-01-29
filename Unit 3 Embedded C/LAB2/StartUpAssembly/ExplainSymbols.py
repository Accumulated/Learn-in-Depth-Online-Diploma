import os

# Get a list of all files in the current directory
all_files = os.listdir()

# Get a list of all files with the .txt extension
txt_files = [f for f in all_files if f.endswith("Symbols.txt")]

for txt_file in txt_files:

    print(f"Processing Symbols in file: {txt_file}")
    
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
                if word == 't' or word == 'T':
                    NewLines.append(f'Symbol: {words[-1]} ->  This symbol refers to a code section in the \n\t'
                                    'object file, such as a function or a global constant')
                    break
                elif word == 'D':
                    NewLines.append(f'Symbol: {words[-1]} -> This symbol refers to a data section in the \n\t'
                                    'object file, such as a global or static variable definition.')
                    break
                elif word == 'U':
                    NewLines.append(f'Symbol: {words[-1]} -> is an undefined symbol, make sure the linker\n\t'
                                    ' sees this symbol in another file')
                    break
                elif word == 'B':
                    NewLines.append(f'Symbol: {words[-1]} -> This symbol refers to a section (BSS) in the object \n\t'
                                    'file that represents uninitialized data and is typically used for zero-filled data objects.')
                    break
                elif word == 'R':
                    NewLines.append(f'Symbol: {words[-1]} -> This symbol refers to a section in the object \n\t'
                                    'file that represents read-only data.')
                elif word == 'I':
                    NewLines.append(f'Symbol: {words[-1]} -> (Indirect reference) This symbol refers to a reference to another \n\t '
                                    'symbol that is not directly defined in the current object file')                       
                    break
                                
                elif word == 'W':
                    NewLines.append(f'Symbol: {words[-1]} -> This symbol refers to a weak symbol that can be overridden\n\t '
                                    ' by another symbol with the same name that is defined elsewhere. \n\t'
                                    ' Weak symbols provide a fallback mechanism for symbols that might not be defined in all cases.')                       
                    break
                                           

    with open(txt_file.strip('.txt') + "_Explained.txt", "w") as file:
        # Write the list of strings to the file
        file.writelines("%s.\n\n" % line for line in NewLines)