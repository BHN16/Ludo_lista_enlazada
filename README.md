REQUISITOS:
SFML 2.5.1 dentro de la carpeta.
MinGW 32 bits como compilador para que sea compatible con el SFML.

INSTRUCCIONES:

- Se juega con un dado de seis caras y el objetivo es trasladar las 4 fichas desde la cárcel o partida a la casa o meta. 
- El movimiento de las fichas es en el sentido del reloj.
- A cada jugador en su turno, le corresponde lanzar el dado y mover sus fichas si le corresponde.
- El seis del dado sirve como salida. Se utiliza para sacar fichas de la cárcel y se obtiene un turno extra (lanza de nuevo el dado).
- Las fichas se mueven según el puntaje del dado. Si un jugador obtiene tres veces seguidas seis se le castiga y pierde su turno.
- Un jugador puede capturar (expulsar y poner en la cárcel) las fichas de un contrincante, si en su turno ocupa la casilla de este último.
- Ningún jugador puede tener más de una ficha en cada casilla, si en un turno se saca un número que da como destino una casilla con una ficha propia, no se puede mover y se pierde el turno.
- Cuando una ficha llega a la vertical de color está seguro, es decir ningún contrincante puede capturarla. Sin embargo, debe llegar a la casa o meta con la cuenta exacta, de lo contrario tiene que moverse dentro de la vertical de color según lo indicado por el dado.

-Para realizar decisiones y jugar, escribir lo que se pida en la consola de clion para eventos como: lanzar el dado, escoger que ficha mover, etc.

INTEGRANTES:

- Andres Lostaunau
- Dario Toribio López
- Massimo Imparato
