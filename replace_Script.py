# def replace_pre_tags(filename):
#     with open(filename, 'r') as file:
#         file_content = file.read()

#     updated_content = file_content.replace('</stdio.h>', '\n')

#     with open(filename, 'w') as file:
#         file.write(updated_content)

# # Example usage:
# replace_pre_tags('junk.html')



def replace_symbols(file_path):
    with open(file_path, 'r', encoding='utf-8') as file:  # Assuming UTF-8 encoding
        lines = file.readlines()

    updated_lines = []
    for line in lines:
        if line.startswith('#include'):
            updated_line = line.replace('<', '&lt;').replace('>', '&gt;')
            updated_lines.append(updated_line)
        else:
            updated_lines.append(line)

    with open(file_path, 'w') as file:
        file.writelines(updated_lines)

# Example usage
replace_symbols('junk.html') # Replace with your filename
