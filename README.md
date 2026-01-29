<style>
  /* 1. Remove o título "projeto-dispenser" e a descrição (nick e créditos) */
  #header_wrap h1, 
  #header_wrap h2 {
    display: none !important;
  }

  /* 2. Mantém o botão verde mas remove o excesso de espaço que o título ocupava */
  #header_wrap .inner {
    padding: 20px 0 !important;
  }

  /* 3. O código que deu certo para a largura total */
  .wrapper {
    max-width: 95% !important;
    margin: 0 auto !important;
  }

  section {
    padding: 40px 20px !important;
    width: 100% !important;
    max-width: none !important;
  }
</style>
---

# Como fazer um alimentador automático com Arduino 
- Arduino Uno
- Data: 08/11/2025
- Autor: Kaio Gomes

Você já pensou em ter um despenser para docinhos, alimentos ou ração de pet feito com Arduino, que é ativado com o simples ato de aproximar sua mão? Com a ajuda de um Arduino Uno, alguns palitos de picolé, um servo motor e até uma simples garrafa PET, é possível criar esse projeto divertido e útil.

<div align="center">
  <iframe width="560" height="315" src="https://www.youtube.com/embed/d7xPMEIS7oE?si=6Y3cv2Av8GlK1CJL" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</div>

## Material Necessário
Para começar vamos montar nosso circuito. 
Você vai precisar dos seguintes componentes e materiais:

#### Componentes eletrônicos
<!-- Adiciona Imagem usando o Markdown -->
![Logica de funcionamento](./imagensVideos/semaforo.webp)

 - 1x Placa Arduino Uno
 - 1x Servo Motor
 - 1x Botão
 - 1x Fonte de Energia
 - Alguns Jumpers

 #### Estrutura física
<!-- Adiciona Imagem usando o Markdown -->
![Logica de funcionamento](./imagensVideos/semaforo.webp)

- Garrafa PET: será usada como reservatório da ração
- Folhas de papelão: suportes e estrutura para fixar o servo motor e direcionar a saída da ração
- Palitos de picolé: reforço para a estrutura de papelão

## Alimentador Automático

A lógica do funcionamento do alimentador automático é bem simples e segue o padrão:

``Pressiona o botão``  > ``Servo Motor abre o compartimento`` > ``O alimento cai enquanto o botão estiver pressionado`` > ``Solta o botão`` > ``Servo Motor fecha o compartimento``

<!-- Adiciona Imagem usando o Markdown -->
![Logica de funcionamento](./imagensVideos/semaforo.webp)

<!-- Adiciona imagem usando html-->
 <img src="./imagensVideos/semaforo.webp" alt="Logica de funcionamento" width=500> 

 #include <Servo.h>

Servo gate;

int pinPot = A0;
int valorLido = 0;
int pos = 0;


void setup() {
  gate.attach(9);
  pinMode(pinPot, INPUT);

}

void loop() {
  valorLido = analogRead(pinPot);


  pos = map(valorLido, 0, 1023, 0, 180);
  gate.write(pos);

  delay(10);
}











