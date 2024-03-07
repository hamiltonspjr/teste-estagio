function reverseString(palavra: string) {
  const wordSplited = palavra.split("");
  let wordReversed = "";
  for (let i = wordSplited.length - 1; i >= 0; i--) {
    wordReversed += wordSplited[i];
  }
  console.log(wordReversed);
}

reverseString("oi");
reverseString("tudo");
