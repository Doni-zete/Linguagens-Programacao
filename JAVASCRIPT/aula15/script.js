function verificar() {
    var data =new Date()
    var ano =data.getFullYear()
    var fano = document.getElementById('txtano')
    var res = document.getElementById('res')
    if(fano.value.length == 0 || fano.value > ano){
        window.alert('Erro')

    }else{
        var fsex =document.getElementsByName('radiosex')
        var idade = ano - Number(fano.value)
       var genero = ''
       if(fsex[0].checked){
           genero= 'Homem'
           

       }else if (fsex[1].checked){
           genero ='Mulher'
       }
       res.innerHTML =`Detect ${idade}`
    }
}
