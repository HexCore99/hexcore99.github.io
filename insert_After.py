# from bs4 import BeautifulSoup

# def insert_pre_after_h1(html_content):
#     soup = BeautifulSoup(html_content, 'html.parser')

#     for h1_tag in soup.find_all('h1'):
#         new_pre_tag = soup.new_tag('pre', class_='question')
#         h1_tag.insert_after(new_pre_tag)

#     return str(soup)

# # Example usage
# with open('junk.html', 'r') as f:
#     html_content = f.read()

# new_html_content = insert_pre_after_h1(html_content)

# with open('junk.html', 'w') as f:
#     f.write(new_html_content)


# from bs4 import BeautifulSoup

# def insert_pre_after_h1(html_content):
#     soup = BeautifulSoup(html_content, 'html.parser')

#     for h1_tag in soup.find_all('h1'):
#         h1_tag.insert_after(soup.new_string('\n'))  

#         new_pre_tag = soup.new_tag('pre', class_='question')        
#         h1_tag.insert_after(new_pre_tag)  
#         new_pre_tag.insert_before(soup.new_string('\n'))  

#     return str(soup)
# # Example usage
# with open('lol.html', 'r') as f:
#     html_content = f.read()

# new_html_content = insert_pre_after_h1(html_content)

# with open('lol.html', 'w') as f:
#     f.write(new_html_content)


from bs4 import BeautifulSoup

def insert_pre_after_h1(html_content):
    soup = BeautifulSoup(html_content, 'html.parser')

    for h1_tag in soup.find_all('h1'):
        h1_tag.insert_after(soup.new_string('\n'))  

        new_pre_tag = soup.new_tag('pre', class_='question')        
        h1_tag.insert_after(new_pre_tag)  
        new_pre_tag.insert_before(soup.new_string('\n'))  

    return str(soup)

# Example usage with UTF-8 encoding for error prevention
with open('lol.html', 'r', encoding='utf-8') as f:
    html_content = f.read()

new_html_content = insert_pre_after_h1(html_content)

with open('lol.html', 'w', encoding='utf-8') as f:
    f.write(new_html_content)