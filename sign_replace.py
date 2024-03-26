import re

def transform_html(filename):
    with open(filename, 'r') as file:
        content = file.read()

    # Regular expression to match < and > signs specifically within 'answer' class elements
    pattern = re.compile(r'(<pre class="answer">)(.*?)(</pre>)', re.DOTALL)

    updated_content = pattern.sub(lambda match: match.group(1) + match.group(2).replace('<', '&lt;').replace('>', '&gt;') + match.group(3), content)

    with open(filename, 'w') as file:
        file.write(updated_content)

transform_html("lol.html") 
