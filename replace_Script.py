
#******************************************For adding Answer Class********************************

def replace_pre_tags(filename):
    with open(filename, 'r') as file:
        file_content = file.read()

    updated_content = file_content.replace('<pre>', '<pre class ="answer">')

    with open(filename, 'w') as file:
        file.write(updated_content)

# Example usage:
replace_pre_tags('lol.html')


#************************************For Replacing < > sign*******************************
# def replace_symbols(file_path):
#     with open(file_path, 'r', encoding='utf-8') as file:  # Assuming UTF-8 encoding
#         lines = file.readlines()

#     updated_lines = []
#     for line in lines:
#         if line.startswith('#include'):
#             updated_line = line.replace('<', '&lt;').replace('>', '&gt;')
#             updated_lines.append(updated_line)
#         else:
#             updated_lines.append(line)

#     with open(file_path, 'w') as file:
#         file.writelines(updated_lines)

# # Example usage
# replace_symbols('lol.html') # Replace with your filename


#*************** Replace Images ********************
# def replace_pre_tags(filename):
#     with open(filename, 'r') as file:
#         file_content = file.read()

#     updated_content = file_content.replace('<pre class_="question">', '<pre class_="question"><img src="/Strings/string_Images/12.jpg" alt="">')

#     with open(filename, 'w') as file:
#         file.write(updated_content)

# # Example usage:
# replace_pre_tags('lol.html')

#**********************************************************************************************************************************************
