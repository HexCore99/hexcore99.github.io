import os

folder_path = r"C:\Users\siyam\Documents\GitHub\New folder\siyam.github.io\1D"

files = [file for file in os.listdir(folder_path) if file.endswith('.c') and file.startswith('prb')]
files.sort(key=lambda x: int(x.split('prb')[1].split('.')[0]))

for file_name in files:
    print(file_name)
