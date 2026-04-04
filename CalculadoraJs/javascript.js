"use strict";
const button_somar = document.querySelector("#button1");
const button_subtrair = document.querySelector("#button2");
const button_multiplicar = document.querySelector("#button3");
const button_dividir = document.querySelector("#button4");
const res=document.querySelector("#res");

function somar(){
    const num1 = Number(document.getElementById("val1").value);
    const num2 = Number(document.getElementById("val2").value);
    const result = num1 + num2;
    res.value = result;
    console.log(result);
};
function subtrair(){
    const num1 = Number(document.getElementById("val1").value);
    const num2 = Number(document.getElementById("val2").value);
    const result = num1 - num2;
    res.value = result;
    console.log(result);
}
function multiplicar(){
    const num1 = Number(document.getElementById("val1").value);
    const num2 = Number(document.getElementById("val2").value);
    const result = num1 * num2;
    res.value = result;
    console.log(result);
}
function dividir(){
    const num1 = Number(document.getElementById("val1").value);
    const num2 = Number(document.getElementById("val2").value);
    const result = num1 / num2;
    res.value = result;
    console.log(result);
}



button_somar.addEventListener("click", somar);
button_subtrair.addEventListener("click", subtrair);
button_multiplicar.addEventListener("click", multiplicar);
button_dividir.addEventListener("click", dividir);













