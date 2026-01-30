let canvas = document.querySelector("canvas")

let pen=canvas.getContext("2d")
pen.fillStyle='gold'
let count=0;
let cell=50
let cellQ=[[0,0]]
let gameOver=false
let direction='right'
randomC=generateRandomCell()
let id=setInterval(()=>{
    draw()
    update()
   
},300)
document.addEventListener("keydown",function(e){
    // console.log("heheh");
    
    if(e.key=='ArrowDown'){
        direction='down'
    }
    else if(e.key=='ArrowUp'){
        direction='up'
    }
    else if(e.key=='ArrowLeft'){
        direction='left'
    }
    else{
        direction='right'
    }
})
function draw(){
    if(gameOver==true){
        clearInterval(id)
        pen.fillStyle='snow'
        pen.fillText("Game Over" ,100,300)
        return;
    }
    pen.fillStyle='red'
    pen.clearRect(0,0,700,400)
    for(let i of cellQ){
        pen.fillRect(i[0],i[1],cell,cell)
    }
     pen.font='20px sans-sarif'
        pen.fillText(`Score ${count}`,40,100)
    pen.fillStyle='green'
    pen.fillRect(randomC[0],randomC[1],cell,cell)
}
function update(){
    let x=cellQ[cellQ.length-1][0]
    let y=cellQ[cellQ.length-1][1]
    let newX
    let newY
    if(direction=='right'){
        newX=x+cell;
        newY=y
        if(newX==700){
            gameOver=true
        }
    }
    else if(direction=='left'){
        newX=x-cell;
        newY=y
        if(newX<0){
            gameOver=true
        }
    }
    else if (direction=='down'){
        newX=x
        newY=y+cell;
        if(newY==400){
            gameOver=true
        }
    }
    else{
        newX=x
        newY=y-cell;
        if(newY<0){
            gameOver=true
        }
    }
    if(newX==randomC[0] && newY==randomC[1] ){
        randomC=generateRandomCell()
    }
    else{
        cellQ.shift()
    }
    cellQ.push([newX,newY])
  
}
function generateRandomCell(){
    return[
        Math.floor(Math.random()*650/50)*50,
        Math.floor(Math.random()*350/50)*50
    ]
}

