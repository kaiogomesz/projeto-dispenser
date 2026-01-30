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
  ol {
  list-style: decimal !important;
  margin-left: 30px !important;
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

Neste tutorial, vamos mostrar os passos para a montagem do dispenser até chegar no resultado visto no vídeo, desde a estrutura inicial até a posição das peças no final.

## Material Necessário
Para começar vamos montar nosso circuito. 
Você vai precisar dos seguintes componentes e materiais:

### Componentes eletrônicos
<!-- Adiciona Imagem usando o Markdown -->
![Logica de funcionamento](./imagensVideos/semaforo.webp)

 - 1x Placa Arduino Uno
 - 1x Placa de ensaio
 - 1x Servo Motor
 - 1x Sensor HC-SR04
 - 1x Fonte de Energia
 - Alguns Jumpers


 ### Estrutura física
<!-- Adiciona Imagem usando o Markdown -->
![Logica de funcionamento](./imagensVideos/semaforo.webp)

- Garrafa PET: será usada como reservatório
- Cola quente: material necessário para montar a estrutura do projeto
- Palitos de picolé: estrutura e reforço do projeto

## Alimentador Automático

A lógica do funcionamento do dispenser é bem simples, ela é dividida nessas três partes:

- **Reservatório**: A garrafa PET servirá como armazenamento do conteúdo que você colocará para uso do dispenser, garantindo praticidade e baixo custo.

- **Controle de liberação**: O servo motor, acoplado à uma "tampa" feita de palitos, abre e fecha a saída da garrafa. Esse movimento libera a quantidade de ração desejada.

- **Gatilho do sistema**: Para que tudo comece, o sinal recebido vem diretamente do sensor HC-SR04, que enviará para o arduino o sinal da sua mão se aproximando, o que fará o servo motor liberar a passagem da garrafa, o mesmo sinalizará quando você afastar a mão, garantindo que o servo motor feche novamente a saída da garrafa, impedindo o disperdicio acidental.

## Montagem do hardware do dispenser
Com todos os componentes em mãos, chegou a hora de montar a parte física do seu dispenser com o Arduino Uno. O processo pode ser complicado pela montagem da base de palitos e o uso da cola quente, porém o restante é bem simples:

1. Montando a estrutura inicial do projeto

  ![Logica de funcionamento](./imagensVideos/semaforo.webp)

- Utilize a cola quente e monte essa estrututa para segurar o projeto
- Garanta que os palitos estão bem colados, essa parte é a base que vai segurar todo o resto

2. Complete o resto do projeto com palitos e cole a garrafa PET

  ![Logica de funcionamento](./imagensVideos/semaforo.webp)

- Garanta que esses espaços específicos estão abertos, você os usará para organizar os componentes dentro da estrutura
- Você pode fazer um pequeno apoio abaixo da saída da garrafa para reforçar

3. Organizando os componentes

  ![Logica de funcionamento](./imagensVideos/semaforo.webp)

- Monte o circuito como mostrado na imagem e coloque o sensor e o servor motor nos lugares especificados 















