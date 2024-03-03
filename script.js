const preTags = document.getElementsByTagName('pre');

for (let i = 0; i < preTags.length; i++) {
  let text = preTags[i].innerHTML;

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

  //text = text.replace(/#include\s*<stdio.h>\s*/g, '...'); // for adding space after < and before >


//   text = text.replace(/#include\s*(<[^>]+>)/g, '#include &lt;$1&gt;'); 
text = text.replace(/#include\s*<([^\s>]+)>/g, '#include < $1 >');

// 2. Color the text within the < > brackets (modified)
text = text.replace(/#include\s*<(.*?)>/g, '<span class="preprocessor">#include</span> <span class="header"><$1></span>'); 



  const modifiedText = text.replace(/\bfor\b/g, '<span class="highlight">for</span>');
  
  preTags[i].innerHTML = modifiedText;

}
