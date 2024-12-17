let elBody = document.querySelector("body")
let elModeBtn = document.querySelector("#modeBtn") 
const btnToggle = document.querySelector(".header__button");

elModeBtn.addEventListener("click", function(){
  elBody.classList.toggle("mode")
  
})

const modeBtn = document.getElementById('modeBtn');

modeBtn.addEventListener('click', function() {
  if (document.body.classList.contains('dark-mode')) {
    document.body.classList.remove('dark-mode');
    modeBtn.innerHTML = `
    <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-moon-stars" viewBox="0 0 16 16">
    <path d="M6 .278a.77.77 0 0 1 .08.858 7.2 7.2 0 0 0-.878 3.46c0 4.021 3.278 7.277 7.318 7.277q.792-.001 1.533-.16a.79.79 0 0 1 .81.316.73.73 0 0 1-.031.893A8.35 8.35 0 0 1 8.344 16C3.734 16 0 12.286 0 7.71 0 4.266 2.114 1.312 5.124.06A.75.75 0 0 1 6 .278M4.858 1.311A7.27 7.27 0 0 0 1.025 7.71c0 4.02 3.279 7.276 7.319 7.276a7.32 7.32 0 0 0 5.205-2.162q-.506.063-1.029.063c-4.61 0-8.343-3.714-8.343-8.29 0-1.167.242-2.278.681-3.286"/>
    <path d="M10.794 3.148a.217.217 0 0 1 .412 0l.387 1.162c.173.518.579.924 1.097 1.097l1.162.387a.217.217 0 0 1 0 .412l-1.162.387a1.73 1.73 0 0 0-1.097 1.097l-.387 1.162a.217.217 0 0 1-.412 0l-.387-1.162A1.73 1.73 0 0 0 9.31 6.593l-1.162-.387a.217.217 0 0 1 0-.412l1.162-.387a1.73 1.73 0 0 0 1.097-1.097zM13.863.099a.145.145 0 0 1 .274 0l.258.774c.115.346.386.617.732.732l.774.258a.145.145 0 0 1 0 .274l-.774.258a1.16 1.16 0 0 0-.732.732l-.258.774a.145.145 0 0 1-.274 0l-.258-.774a1.16 1.16 0 0 0-.732-.732l-.774-.258a.145.145 0 0 1 0-.274l.774-.258c.346-.115.617-.386.732-.732z"/>
    </svg>
    Dark Mode
    `;
  } else {
    document.body.classList.add('dark-mode');
    modeBtn.innerHTML = `
    <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-moon-stars" viewBox="0 0 16 16">
    <path d="M6 .278a.77.77 0 0 1 .08.858 7.2 7.2 0 0 0-.878 3.46c0 4.021 3.278 7.277 7.318 7.277q.792-.001 1.533-.16a.79.79 0 0 1 .81.316.73.73 0 0 1-.031.893A8.35 8.35 0 0 1 8.344 16C3.734 16 0 12.286 0 7.71 0 4.266 2.114 1.312 5.124.06A.75.75 0 0 1 6 .278M4.858 1.311A7.27 7.27 0 0 0 1.025 7.71c0 4.02 3.279 7.276 7.319 7.276a7.32 7.32 0 0 0 5.205-2.162q-.506.063-1.029.063c-4.61 0-8.343-3.714-8.343-8.29 0-1.167.242-2.278.681-3.286"/>
    <path d="M10.794 3.148a.217.217 0 0 1 .412 0l.387 1.162c.173.518.579.924 1.097 1.097l1.162.387a.217.217 0 0 1 0 .412l-1.162.387a1.73 1.73 0 0 0-1.097 1.097l-.387 1.162a.217.217 0 0 1-.412 0l-.387-1.162A1.73 1.73 0 0 0 9.31 6.593l-1.162-.387a.217.217 0 0 1 0-.412l1.162-.387a1.73 1.73 0 0 0 1.097-1.097zM13.863.099a.145.145 0 0 1 .274 0l.258.774c.115.346.386.617.732.732l.774.258a.145.145 0 0 1 0 .274l-.774.258a1.16 1.16 0 0 0-.732.732l-.258.774a.145.145 0 0 1-.274 0l-.258-.774a1.16 1.16 0 0 0-.732-.732l-.774-.258a.145.145 0 0 1 0-.274l.774-.258c.346-.115.617-.386.732-.732z"/>
    </svg>
    Light Mode
    `;
  }
});

let countries = JSON.parse(window.localStorage.getItem("countries")) || [
  {
    id: 1,
    img: "https://upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Flag_of_Germany.svg/2560px-Flag_of_Germany.svg.png",
    name: "Germany",
    population: "81,770,900",
    region: "Europe",
    capital: "Berlin",
    isLike: false,
    isBasket: false
  },
  {
    id: 2,
    img: "https://upload.wikimedia.org/wikipedia/en/thumb/9/9a/Flag_of_Spain.svg/1200px-Flag_of_Spain.svg.png",
    name: "Spain",
    population: "323,947,000",
    region: "Americas",
    capital: "Washington D.C",
    isLike: false,
    isBasket: false
    
  },
  {
    id: 3,
    img: "https://upload.wikimedia.org/wikipedia/en/thumb/0/05/Flag_of_Brazil.svg/640px-Flag_of_Brazil.svg.png",
    name: "Brazil",
    population: "206,135,893",
    region: "Americas",
    capital: "Brasília",
    isLike: false,
    isBasket: false
    
  },
  {
    id: 4,
    img: "https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/Flag_of_Iceland.svg/1024px-Flag_of_Iceland.svg.png",
    name: "Iceland",
    population: "334,300",
    region: "Europe",
    capital: "Reykjavík",
    isLike: false,
    isBasket: false
    
  },
  {
    id: 5,
    img: "https://upload.wikimedia.org/wikipedia/commons/thumb/c/cd/Flag_of_Afghanistan_%282013%E2%80%932021%29.svg/1024px-Flag_of_Afghanistan_%282013%E2%80%932021%29.svg.png",
    name: "Afghanistan",
    population: "27,657,145",
    region: "Asia",
    capital: "Kabul",
    isLike: false,
    isBasket: false
    
  },
  {
    id: 6,
    img: "https://upload.wikimedia.org/wikipedia/commons/thumb/8/84/Flag_of_Uzbekistan.svg/1280px-Flag_of_Uzbekistan.svg.png",
    name: "Uzbekistan",
    population: "35,482,369",
    region: "Asia",
    capital: "Tashkent",
    isLike: false,
    isBasket: false
    
  },
  {
    id: 7,
    img: "https://upload.wikimedia.org/wikipedia/commons/thumb/3/36/Flag_of_Albania.svg/2560px-Flag_of_Albania.svg.png",
    name: "Albania",
    population: "2,886,026",
    region: "Europe",
    capital: "Tirana",
    isLike: false,
    isBasket: false
    
  },
  {
    id: 8,
    img: "https://upload.wikimedia.org/wikipedia/commons/thumb/7/77/Flag_of_Algeria.svg/1280px-Flag_of_Algeria.svg.png",
    name: "Algeria",
    population: "40,400,000",
    region: "Africa",
    capital: "Algiers",
    isLike: false,
    isBasket: false
    
  },
]

 

let elCountrieList = document.querySelector(".hero__countries")
let elSelect = document.querySelector(".hero__select")
let ellModalWrapper = document.querySelector(".modal-wrapper")
let ellModal = document.querySelector(".modal")


function renderCountry(arr){
  elCountrieList.innerHTML = ""
  arr.map(item => {
    let elItem = document.createElement("li")
    elItem.classList.add("hero__item")
    elItem.innerHTML = `
    <img class="hero__img" src=${item.img} alt="Country img" width="100%" height="200"/>
    <b>${item.id}</b>
    <h2 class="hero__name">Country : ${item.name}</h2>
    <p class="hero__population">Population : ${item.population}</p>
    <p class="hero__region">Region : ${item.region}</p>
    <p class="hero__capital">Capital : ${item.capital}</p>
    <div class="hero__basic-content">
    <div class="hero__like-basket-more">
    <button class=${item.isLike ? "like" : "dislike"} onclick="likeBtnClick(${item.id})">
    <svg xmlns="http://www.w3.org/2000/svg" width="20" height="20" fill="currentColor" class="bi bi-heart-fill" viewBox="0 0 16 16">
    <path fill-rule="evenodd" d="M8 1.314C12.438-3.248 23.534 4.735 8 15-7.534 4.736 3.562-3.248 8 1.314"/>
    </svg>
    </button>
    <button class=${item.isBasket ? "like" : "dislike"} onclick="basketBtnClick(${item.id})">
    <svg xmlns="http://www.w3.org/2000/svg" width="22" height="22" fill="currentColor" class="bi bi-cart4" viewBox="0 0 16 16">
    <path d="M0 2.5A.5.5 0 0 1 .5 2H2a.5.5 0 0 1 .485.379L2.89 4H14.5a.5.5 0 0 1 .485.621l-1.5 6A.5.5 0 0 1 13 11H4a.5.5 0 0 1-.485-.379L1.61 3H.5a.5.5 0 0 1-.5-.5M3.14 5l.5 2H5V5zM6 5v2h2V5zm3 0v2h2V5zm3 0v2h1.36l.5-2zm1.11 3H12v2h.61zM11 8H9v2h2zM8 8H6v2h2zM5 8H3.89l.5 2H5zm0 5a1 1 0 1 0 0 2 1 1 0 0 0 0-2m-2 1a2 2 0 1 1 4 0 2 2 0 0 1-4 0m9-1a1 1 0 1 0 0 2 1 1 0 0 0 0-2m-2 1a2 2 0 1 1 4 0 2 2 0 0 1-4 0"/>
    </svg>
    </button>
    <button onclick="moreBtnClicked(${item.id})" id=${item.id}>More</button>
    </div>

    <div class="hero__updatedeleteBtn">
    
    <button onclick="updateBtnClicked(${item.id})" id=${item.id}>
    <svg class="updateBtnIMg" xmlns="http://www.w3.org/2000/svg" width="20" height="24" fill="currentColor" class="bi bi-pencil-square" viewBox="0 0 16 16">
    <path d="M15.502 1.94a.5.5 0 0 1 0 .706L14.459 3.69l-2-2L13.502.646a.5.5 0 0 1 .707 0l1.293 1.293zm-1.75 2.456-2-2L4.939 9.21a.5.5 0 0 0-.121.196l-.805 2.414a.25.25 0 0 0 .316.316l2.414-.805a.5.5 0 0 0 .196-.12l6.813-6.814z"/>
    <path fill-rule="evenodd" d="M1 13.5A1.5 1.5 0 0 0 2.5 15h11a1.5 1.5 0 0 0 1.5-1.5v-6a.5.5 0 0 0-1 0v6a.5.5 0 0 1-.5.5h-11a.5.5 0 0 1-.5-.5v-11a.5.5 0 0 1 .5-.5H9a.5.5 0 0 0 0-1H2.5A1.5 1.5 0 0 0 1 2.5z"/>
    </svg>
    </button>
        
    <button class="deleteBtnIMg" onclick="deleteCountry(${item.id})" id=${item.id}>
    <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" class="bi bi-trash3" viewBox="0 0 16 16">
    <path d="M6.5 1h3a.5.5 0 0 1 .5.5v1H6v-1a.5.5 0 0 1 .5-.5M11 2.5v-1A1.5 1.5 0 0 0 9.5 0h-3A1.5 1.5 0 0 0 5 1.5v1H1.5a.5.5 0 0 0 0 1h.538l.853 10.66A2 2 0 0 0 4.885 16h6.23a2 2 0 0 0 1.994-1.84l.853-10.66h.538a.5.5 0 0 0 0-1zm1.958 1-.846 10.58a1 1 0 0 1-.997.92h-6.23a1 1 0 0 1-.997-.92L3.042 3.5zm-7.487 1a.5.5 0 0 1 .528.47l.5 8.5a.5.5 0 0 1-.998.06L5 5.03a.5.5 0 0 1 .47-.53Zm5.058 0a.5.5 0 0 1 .47.53l-.5 8.5a.5.5 0 1 1-.998-.06l.5-8.5a.5.5 0 0 1 .528-.47M8 4.5a.5.5 0 0 1 .5.5v8.5a.5.5 0 0 1-1 0V5a.5.5 0 0 1 .5-.5"/>
    </svg>
    </button>
    
    </div>
    </div>
    `
    elCountrieList.appendChild(elItem)

  })
}

function deleteCountry(id){
  ellModalWrapper.classList.add("open-modal")
  ellModal.innerHTML = `
  <div class="delete-wrapper">
  <h2>Are you sure delete</h2>
  <div>
  <button onclick="cancelModal()">Cancel</button>
  <button onclick="deleteSureBtn(${id})">Delete</button>
  </div>
  </div>
  `
  window.localStorage.setItem("countries", JSON.stringify(countries))

}

function cancelModal(){
  ellModalWrapper.classList.remove("open-modal")
}

function deleteSureBtn(id){
  const data = countries.findIndex(item => item.id == id)
  countries.splice(data, 1)
  ellModalWrapper.classList.remove("open-modal")
  renderCountry(countries)
  window.localStorage.setItem("countries", JSON.stringify(countries))

}

let elSearchingText = document.querySelector(".searching-text")

const searchInput = document.querySelector(".hero__input")

searchInput.addEventListener("keyup", function (evt){
  const inputVal = evt.target.value.trim();
  elSearchingText.textContent = inputVal
  const CountriesFilter = countries.filter(item => item.name.toLowerCase().includes(inputVal.toLowerCase()) || item.population.split(",").join("").includes(inputVal));
  renderCountry(CountriesFilter)
  window.localStorage.setItem("countries", JSON.stringify(countries))

});


function moreBtnClicked(clicked){
  ellModalWrapper.classList.add("open-modal")
  const data = countries.find(item => item.id == clicked)
  ellModal.innerHTML = `
  <div class="modal__img-wrapper">
  <img class="hero__img" src=${data.img} alt="Country img" width="100%" height="200"/>
  </div>
  <div class="modal__content-wrapper">
  <b>${data.id}</b>
  <h2 class="hero__name">Country : ${data.name}</h2>
  <p class="hero__population">Population : ${data.population}</p>
  <p class="hero__region">Region : ${data.region}</p>
  <p class="hero__capital">Capital : ${data.capital}</p>
  </div>
  
  <button id="close" class="close">
  X
  </button>
  `
  window.localStorage.setItem("countries", JSON.stringify(countries))

}

ellModalWrapper.addEventListener("click",function(evt){
  if(evt.target.id == "modal-wrapper")
  ellModalWrapper.classList.remove("open-modal")
  window.localStorage.setItem("countries", JSON.stringify(countries))
  
})


ellModalWrapper.addEventListener("click", function(event){
  if(event.target.id == "close")
  ellModalWrapper.classList.remove("open-modal")
  window.localStorage.setItem("countries", JSON.stringify(countries))

})

function renderSelectOptions(arr, innerTag){
  arr.map(item => {
    let elOption = document.createElement("option")
    elOption.textContent = item.name
    elOption.setAttribute("value", item.id)
    innerTag.appendChild(elOption)
    window.localStorage.setItem("countries", JSON.stringify(countries))

  })
}

renderSelectOptions(countries, elSelect)
renderCountry(countries)

elSelect.addEventListener("change", function(evt) {
  const clickId = evt.target.value
  if(clickId == 0){
    renderCountry(countries)
    window.localStorage.setItem("countries", JSON.stringify(countries))

  }
  else{
    const filteredArr = countries.filter(item => item.id == clickId)
    renderCountry(filteredArr)
    window.localStorage.setItem("countries", JSON.stringify(countries))

  }
})

let ellikeCount = document.querySelector(".like-count")
let elCountWrapperBtn = document.querySelector(".header__like-btn")

function likeBtnClick(id){
  countries.filter(item => item.id == id ? item.isLike = !item.isLike : "")
  const countFilter = countries.filter(item => item.isLike == true)
  ellikeCount.textContent = countFilter.length
  renderCountry(countries)
  window.localStorage.setItem("countries", JSON.stringify(countries))

  elCountWrapperBtn.addEventListener("click", function(){
    renderCountry(countFilter)
    window.localStorage.setItem("countries", JSON.stringify(countries))

  })
}

let elBasketCountBtn = document.querySelector(".header__basket-btn")
let countBasket = document.querySelector(".basket-count")

function basketBtnClick(id){
  countries.filter(item => item.id == id ? item.isBasket = !item.isBasket : "")
  const countFilter = countries.filter(item => item.isBasket == true)
  countBasket.textContent = countFilter.length
  renderCountry(countries)
  window.localStorage.setItem("countries", JSON.stringify(countries))

  elBasketCountBtn.addEventListener("click", function(){
    renderCountry(countFilter)
    window.localStorage.setItem("countries", JSON.stringify(countries))

  })
}


let elAddCountry = document.querySelector(".header__add-country")

elAddCountry.addEventListener("click", function(event){
  ellModalWrapper.classList.add("open-modal")
  ellModal.innerHTML = `
  <form onsubmit ="AddClickBtn(${Event})" class ="form-card">
  <label>
  Enter Country Name:
  <input class="addinput" type="text" required placeholder="Enter Country name">
  </label>
  <label>
  Enter Country population:
  <input class="addinput" type="text" required placeholder="Enter Country population">
  </label>
  <label>
  Enter Country region:
  <input class="addinput" type="text" required placeholder="Enter Country region">
  </label>
  <label>
  Enter Country Capital:
   <input class="addinput" type="text" required placeholder="Enter Country Capital">
  </label>
  <label>
  Choose Img: <input class="addinput" type="text" required placeholder="Enter Country img">
  </label>
  <button class="addbtn" type="submit">Submit</button>
  </form>

  `

  let elAddFormCard = document.querySelector(".form-card")
  elAddFormCard.addEventListener("submit", function(event){
    event.preventDefault()
    const formresult = {
      id: countries[countries.length - 1].id + 1,
      img: event.target[4].value,
      name: event.target[0].value,
      population: event.target[1].value,
      region: event.target[2].value,
      capital: event.target[3].value,
      isLike:false,
      isBasket: false,
    }
    countries.push(formresult)
    renderCountry(countries)
    ellModalWrapper.classList.remove("open-modal")
    window.localStorage.setItem("countries", JSON.stringify(countries))

  })
})

function updateBtnClicked(id){
  ellModalWrapper.classList.add("open-modal")
  const updateAdd = countries.find(item => item.id == id)
  ellModal.innerHTML = `
  <form class ="updateform-card">
  <label>
  Enter Country Name:
  <input value=${updateAdd.name} class="updateAddinput" type="text" required placeholder="Enter Country name">
  </label>
  <label>
  Enter Country population:
  <input value=${updateAdd.population} class="updateAddinput" type="text" required placeholder="Enter Country population">
  </label>
  <label>
  Enter Country region:
  <input value=${updateAdd.region} class="updateAddinput" type="text" required placeholder="Enter Country region">
  </label>
  <label>
  Enter Country Capital:
  <input value=${updateAdd.capital} class="updateAddinput" type="text" required placeholder="Enter Country capital">
  </label>
  <label>
  Choose Img: 
  <input value=${updateAdd.img} class="updateAddinput" type="text" required placeholder="Enter Country img">
  </label>
  <button class="updateaddbtn" type="submit">Submit</button>
  </form>
  `
  let elupdateFormCard = document.querySelector(".updateform-card")
  elupdateFormCard.addEventListener("submit", function(change){
    change.preventDefault()
    updateAdd.img = change.target[4].value
    updateAdd.name = change.target[0].value
    updateAdd.population = change.target[1].value
    updateAdd.region = change.target[2].value
    updateAdd.capital = change.target[3].value
  
    renderCountry(countries)
    ellModalWrapper.classList.remove("open-modal")
  window.localStorage.setItem("countries", JSON.stringify(countries))

  
  })
}
