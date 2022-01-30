# Musicbox
The ideia for this project came from a challenge proposed by robocore.net, which was to build a "piano" that played the melody "Asa Branca", from Luiz Gonzaga, using a buzzer.

Going one step ahead, I implemented other 3 songs that can be chosen by clicking on the different buttons.

The songs implemented are:
 * Asa Branca (Luiz Gonzaga)
 * Sadness and Sorrow (Naruto)
 * Happy Birthday (I don't know...)
 * Spider-Man Theme (from the cartoon)

## Requiriments
* Arduino UNO
* 4 buttons
* 1 buzzer
* Jumpers

Obs.: a basic know of music theory may be required if you want to add any new songs.

## How to add a new song
The process to add a new song can be a little tricky. The steps are:
* Choose a song
* Find the sheet music for the song you've chosen
* Define the tempo as a global constant (the value you use be set as the duration of 1 beat in ms)
* Write down the figures of sound as pause into the code (in order to understands this, take a look at how the 4 songs I mentioned were implemented)

## Schematic
Segue imagem para visualizar comoo o circuito deve ser configurado.
![image](https://user-images.githubusercontent.com/76977246/147722212-f4ab6d00-1172-4c5f-917b-0eaf6e41d265.png)
