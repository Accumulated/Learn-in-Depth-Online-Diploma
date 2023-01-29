import subprocess
import argparse

def SeperateLines():
    print("\n --------------------------------------------------------------------------------------- \n")

def DumpSectionRawData(Obj, Sec):
    SeperateLines()
    print(f"Running Object dump on {ObjFile} and showing"
            " raw information inside {SectioName} section")

    command = ["arm-none-eabi-objdump", 
                "-s", 
                "-j", 
                Sec, 
                Obj]
                
    output = subprocess.run(command, capture_output=True)

    print()
    print("1st Column: The offset memory address of the data within section.")
    print("2nd Column: The data (raw) itself, represented in hexadecimal format.")
    print("3rd Column: An ASCII representation of the data, with non-printable characters represented by a dot (.).")
    print(output.stdout.decode())


def DumpSectionDisAssemblyData(Obj, Sec):

    SeperateLines()

    print(f"Running Object dump on {ObjFile} and showing"
            " disassembly information inside {SectioName} section")

    command = ["arm-none-eabi-objdump", 
                "-D", 
                "-j", 
                Sec, 
                Obj]
                
    output = subprocess.run(command, capture_output=True)
    print()
    print("1st column: Virtual memory address where the instruction is located")
    print("2nd column: the machine code or the hexadecimal representation of the instruction")
    print("3rd column: Disassembly code representation of the instruction")
    print(output.stdout.decode())



def GetSizeOfAllSections(Obj):
    SeperateLines()

    print(f"Size of all sections in {ObjFile}")

    command = ["arm-none-eabi-size", "-A", Obj]
                
    output = subprocess.run(command, capture_output=True)
    print(output.stdout.decode())
    
    
def GetSymbols(Obj):
    SeperateLines()
    print(f"Print all symbols in {Obj}")
    print(" The Symbol table has the following structure:")
    print("address in memory - "
          "symbol_type (global, local) - "
          "symbol's section (Type (debug, function, object), Section (data, bss, text, rodata)) - "
          "size -"
          " symbol_name")

    command = ["arm-none-eabi-objdump",  "-t", Obj]
    output = subprocess.run(command, capture_output=True)
    print(output.stdout.decode())
    
    
if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Object Information')
    parser.add_argument('--Object', type=str, help="the object file to disassemble", default = None)
    parser.add_argument('--Section', type=str, help="section name", default = None)
    
    args = parser.parse_args()


    ObjFile = args.Object
    SectioName = args.Section
    
    if(ObjFile == None) and (SectioName == None): 
        print("Wrong input")

    elif (SectioName == None) and (ObjFile != None):
        GetSizeOfAllSections(ObjFile)
        GetSymbols(ObjFile)
        
    elif (SectionName != None) and (ObjFile != None):
        DumpSectionDisAssemblyData(ObjFile, SectioName)
        DumpSectionRawData(ObjFile, SectioName)
    else:
        print("Unexpected input")