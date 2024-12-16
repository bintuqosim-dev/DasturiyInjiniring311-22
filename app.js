const buttonsEl = document.querySelectorAll("button");
const inputEl = document.querySelector("#natija");
let isResultDisplayed = false;
for (let i = 0; i < buttonsEl.length; i++) {
    buttonsEl[i].addEventListener("click", () => {
        const buttonPressed = buttonsEl[i].textContent;
        if (buttonPressed === "C") {
            natijatoza();
        } else if (buttonPressed === '=') {
            natija();
        } else {
            if (isResultDisplayed) {
                inputEl.value = "";
                isResultDisplayed = false;
            }
            if (isValidInput(buttonPressed)) {
                hisob(buttonPressed);
            }
        }
    });
}
function natijatoza() {
    inputEl.value = "";
    isResultDisplayed = false;
}
function natija() {
    inputEl.value = evaluateExpression(inputEl.value);
    isResultDisplayed = true;
}
function evaluateExpression(expression) {
    try {
        return eval(expression);
    } catch (error) {
        return 'Invalid Expression';
    }
}
function hisob(buttonPressed) {
    inputEl.value += buttonPressed;
}
function isValidInput(input) {
    const validChars = /^[0-9+\-*/.]+$/;
    return validChars.test(input);
}
