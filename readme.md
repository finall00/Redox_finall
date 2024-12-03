# redox_finall



*O projeto basicamente é o teclado ideal para mim, escolhi o designer baseado no redox rev1 e fiz as minhas proprias modificações*

* Keyboard Maintainer: [finall00](https://github.com/finall00)

> [!warning]
>Para compilar antes e necessario installar e configurar o QMK e colocar a pasta do projeto dentro da pasta keyboard.

Compile this keyboard (after setting up your build environment):

    qmk compile -kb redox_finall -km default

Flashing o teclado:

O qmk define quem e a metade atraves de um valor salvo na eeprom por isso precisamos "flashalo" com a devida flag

flashing mão esquerda(Main) 

    qmk flash -kb redox_finall -km default -bl uf2-split-left 

flashing mão direita:
    
    qmk flash -kb redox_finall -km default -bl uf2-split-right




See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Controller 

O projeto foi desenvolvido usando: [RP2040](https://docs.qmk.fm/platformdev_rp2040)

## Design 

O designer foi baseado no redox rev1 porem foram feitas algumas modificações para se adequar a minha pessoa. Apessar disso eu ja vejo algumas melhorias como deixar as teclas de função mais proximas do centro do teclado e utilizar conectores hotswap para não precisar desoldar os terminais.

## Layout

Atualmente o layout do teclado é o QWERTY porem futuramente sera adicionadas camadas para outros layouts pricipalmente o colemak e o Dvorak.

## Bootloader

Para acessar o bootloader existem 2 maneiras:

* **Bootmagic reset**: Reinicie o teclado precionanso a tecla "`"
* **Fisco usando o botão reset**: Desconecte o teclado do usb precione o botão do boot e conect novamente



## TODO:

- [ ] Add VIA
- [ ] add a tecla del na layer 3
- [ ] fazer alguns ajustes na estrutura do teclado
- [ ] organizar melhor a layer de atalhos
