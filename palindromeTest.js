function mainFunct() {
    //var word = prompt("Enter the word: ");
    var word = "alabama";
    console.log("The word is:", word);
    const newArray = Array.from(word);
    //console.log("newArray.length = ", newArray.length);
    for (let i=0; i< newArray.length;) { 
        for (let j=newArray.length; j > 0; j--) {
            //console.log("newArray[i] =", newArray[i]);
            //console.log("newArray[j-1]=", newArray[j-1]);
            if (newArray[i]==newArray[j-1]) {
                i++
            } else {
                console.log("NO PALINDROME IDENTIFIED!");
                return;
            }
        }

    }
    console.log("END OF FOR LOOPS!");
    console.log("PALINDROME IDENTIFIED!");
}

mainFunct();
