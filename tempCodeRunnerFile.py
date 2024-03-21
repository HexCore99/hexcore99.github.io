from bs4 import BeautifulSoup

def insert_pre_after_h1(html_content):
    soup = BeautifulSoup(html_content, 'html.parser')

    for h1_tag in soup.find_all('h1'):
        new_pre_tag = soup.new_tag('pre', class_='question')
        h1_tag.insert_after(new_pre_tag)

    return str(soup)

# Example usage
with open('junk.html', 'r') as f:
    html_content = f.read()

new_html_content = insert_pre_after_h1(html_content)

with open('junk.html', 'w') as f:
    f.write(new_html_content)
