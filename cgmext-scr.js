document.querySelectorAll('pre code').forEach((block) =>
{
    let lines = block.innerHTML.split('\n');

    if (lines[0].trim() === '')
    {
        lines.shift();
    }

    if (lines[lines.length - 1].trim() === '')
    {
        lines.pop();
    }
    
    let match = lines[0].match(/^\s+/);

    if (match)
    {
        let indent = match[0];
        block.innerHTML = lines.map(line => line.startsWith(indent) ? line.slice(indent.length) : line).join('\n');
    }
});

hljs.highlightAll();