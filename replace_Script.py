def replace_pre_tags(filename):
    with open(filename, 'r') as file:
        file_content = file.read()

    updated_content = file_content.replace('<pre>', '<code>').replace('</pre>', '</code>')

    with open(filename, 'w') as file:
        file.write(updated_content)

# Example usage:
replace_pre_tags('junk.html')
