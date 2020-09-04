function verificar() {
    var data = new Date()
    var ano = data.getFullYear()
    var fano = document.getElementById('txtano')
    var res = document.getElementById('res')
    if (fano.value.length == 0 || fano.value > ano) {
        window.alert('Erro')

    } else {
        var fsex = document.getElementsByName('radiosex')
        var idade = ano - Number(fano.value)
        var genero = ''
        var img = document.createElement('img')
        img.setAttribute('id', 'foto')

        if (fsex[0].checked) {
            genero = 'Homem'
            if (idade >=0 &&idade <10){
                //Criança
                img.setAttribute('src','bebehomem.png')
            }else if (idade < 21){
                //Jovem
                img.setAttribute('src',)
            }else if(idade <50){
                //adulto
            }else{
                //idoso
            }
         }else if (fsex[1].checked) {
                genero = 'Mulher'
                if (idade >=0 &&idade <10){
                    //Criança
                }else if (idade < 21){
                    //Jovem
                }else if(idade <50){
                    //adulto
                }else{
                    //idoso
                }
            }

        res.style.textAlign = 'center'
        res.innerHTML = `Detectamos ${genero} com ${idade} anos.`
    }
}
