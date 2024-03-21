
// Code to modify #include lines
function modifyIncludeLines() {
  const answerElements = document.getElementsByClassName('answer');

  for (let i = 0; i < answerElements.length; i++) {
    const codeLines = answerElements[i].textContent.split('\n');
    const modifiedCodeLines = codeLines.map(line => {
      if (line.startsWith('#include')) {
        // Add the code to modify the header part
        line = line.replace(/\<(.*?)\>/, (match, p1) => {
          return `<span class="header">&lt;${p1}&gt;</span>`;
        });

        line = line.replace('#include', '<span class="preprocessor">#include</span>');
      }
      return line;
    });
    answerElements[i].innerHTML = modifiedCodeLines.join('\n');
  }
}

// Call the function to modify #include lines
modifyIncludeLines();
//const preTags = document.getElementsByTagName('pre');
const answerElements = document.getElementsByClassName('answer');

// for (let i = 0; i < preTags.length; i++) {
for (let i = 0; i < answerElements.length; i++) {
  let text = answerElements[i].innerHTML;

  text = text.replace(/\b\d+\b/g, '<span class="integer">$&</span>'); // Match integers
  text = text.replace(/\%[a-z]/g, '<span class="format-specifier">$&</span>'); // Match format specifiers 
  text = text.replace(/\(/g, '<span class="bracket">(</span>')
  .replace(/\)/g, '<span class="bracket">)</span>');


  text = text.replace(/\(/g, '<span class="bracket">(</span>')
  .replace(/\)/g, '<span class="bracket">)</span>'); // for first bracket()

// New: Change third bracket color (e.g., blue)
text = text.replace(/\[/g, '<span class="Third-bracket">[</span>')
  .replace(/\]/g, '<span class="Third-bracket" >]</span>'); // For third-Bracket []

// New: Change curly braces color (e.g., green)
text = text.replace(/\{/g, '<span class="curly-braces">{</span>')
  .replace(/\}/g, '<span class="curly-braces">}</span>');// For-Curly Braces {}

  // Color data types (you can adjust the colors later)
  text = text.replace(/\bint\b/g, '<span class="int-type">int</span>'); 
  text = text.replace(/\bfloat\b/g, '<span class="float-type">float</span>'); 
  text = text.replace(/\bdouble\b/g, '<span class="double-type">double</span>'); 
  text = text.replace(/\bchar\b/g, '<span class="char-type">char</span>'); 
  text = text.replace(/\bvoid\b/g, '<span class="void-type">void</span>'); 
  // Handling 'string' and 'vector' is trickier (see notes below)
  text = text.replace(/\bwhile\b/g, '<span class="highlight">while</span>'); 
  text = text.replace(/\breturn\b/g, '<span class="return-type">return</span>'); 
  const modifiedText = text.replace(/\bfor\b/g, '<span class="highlight">for</span>');
  
  answerElements[i].innerHTML = modifiedText;

}
