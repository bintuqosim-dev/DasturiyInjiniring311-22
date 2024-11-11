// Massivning faktor balli ushbu massivning barcha elementlarining EKUK va EKUB mahsuloti sifatida aniqlanadi.
// Undan ko'pi bilan bitta elementni olib tashlaganingizdan so'ng maksimal omil ballini qaytaring  
// E'tibor bering , ikkalasi ham
// EKUK
// va
// EKUB
// bitta raqamning o'zi raqamdir va bo'sh massivning omil balli 0 ga teng.

function EKUB(a, b) {    
    while (b) {
        [a, b] = [b, a % b];    
    }
    return a;
}
function EKUK(a, b) {
    return (a * b) / EKUB(a, b);
}
function umumiyEKUB(arr) {
    return arr.reduce((acc, num) => EKUB(acc, num));
}
function umumiyEKUK(arr) {
    return arr.reduce((acc, num) => EKUK(acc, num));
}
function maxArrFunc(array) {
    const n = array.length;
    if (n === 0) return 0; 
    if (n === 1) return array[0] * array[0]; 

    let maxResult = 0;

    for (let i = 0; i < n; i++) {
        const newArray = [...array.slice(0, i), ...array.slice(i + 1)];        
        const currentEKUB = umumiyEKUB(newArray);
        const currentEKUK = umumiyEKUK(newArray);        
        const result = currentEKUB * currentEKUK;
        maxResult = Math.max(maxResult, result);
    }
    return maxResult;
}

const array = [1,2,3,4,5];
console.log("Natija " + maxArrFunc(array) + " ga teng."); 
