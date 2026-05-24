let icon = document.querySelector(".icon");
let ul = document.querySelector("ul");

icon.addEventListener("click", ()=>{
    ul.classList.toggle("showData");
    
    if(ul.className == "showData"){
        document.getElementById("bar").className ="fa-solid fa-x";
    }
    else{
        document.getElementById("bar").className= "fa-solid fa-bars";
    }
})

// navbar

let shops = document.getElementById("shops");
let reviews = document.getElementById("reviews");
let blogs = document.getElementById("blogs");
let contacts = document.getElementById("contacts");

shops.addEventListener("click", ()=>{
    shops.style.color = "rgb(4, 219, 219)";
    reviews.style.color = "white";
    blogs.style.color = "white";
    contacts.style.color = "white";

})

reviews.addEventListener("click", ()=>{
    reviews.style.color = "rgb(4, 219, 219)";
    shops.style.color = "white";
    blogs.style.color = "white";
    contacts.style.color = "white";
})

blogs.addEventListener("click", ()=>{
    blogs.style.color = "rgb(4, 219, 219)";
    reviews.style.color = "white";
    shops.style.color = "white";
    contacts.style.color = "white";
})

contacts.addEventListener("click", ()=>{
    contacts.style.color = "rgb(4, 219, 219)";
    reviews.style.color = "white";
    blogs.style.color = "white";
    shops.style.color = "white";
})