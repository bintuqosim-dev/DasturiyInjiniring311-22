let FirstName = prompt('Ismingizni kiriting');
let question = +prompt(FirstName + '  nechta savol beraylik?');
let TrueCount = 0;
let FalseCount = 0;
for(let i=1;i<=question;i++){
    let num1 = Math.floor(1+Math.random()*10);
    let num2 = Math.floor(1+Math.random()*10);
    let answer = +prompt(`${i}-savol.${num1}*${num2} = ? `);
    if(num1*num2 == answer){
        document.write(`<p class="answerTrue">${i}-savol :  ${num1} * ${num2} = ${answer} To'g'ri! </p>`);
        
    }else{
        document.write(`<p class="answerFalse">${i}-savol :  ${num1} * ${num2} = ${answer}  Xato! (To'g'ri javob:${num1*num2}) </p>`);
    }
}
// document.write('<br>')
// document.write(`<p class="answerTrue TrueCaunt"> ${FirstName} siz ${question} ta savoldan </p>`);
// document.write(`<p class="answerTrue TrueCaunt"> ${TrueCount} ta to'g'ri</p>`);
// document.write(`<p class="answerFalse TrueCaunt"> ${FalseCount} ta noto'g'ri javob berdingiz </p>`);