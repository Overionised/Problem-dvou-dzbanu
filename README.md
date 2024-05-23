# Problem-dvou-dzbanu

# Zadání
Napište program, který vyřeší tuto úlohu podle zadaných pravidel a vypíše jednotlivé kroky potřebné
k dosažení jednoho litru ve džbánu číslo 1.
## Pravidla hry
Objemy džbánů musí být čísla lichá a navzájem nesoudělná.
Džbán s vyšším objemem označíme číslem 2, džbán číslo 1 bude mít objem menší.
Nalévat vodu můžeme pouze do džbánu 1, z prvního džbánu můžeme pouze přelévat  do druhého džbánu. Při přelívání nesmí druhý džbán přetéct, ale může přelévání pozastavit a výlít ho.

# Příklad
Vstup: 3, 7 (džbán 1 má kapacitu 3 litry a džbán 2 má kapacitu 7 litrů)
Výstup (za dvojím lomítkem je komentář sloužící k pochopení výstupu, tento komentář není součástí
finálního programu!):

~~~
Dzban 1 ma 0 l --- dzban 2 ma 0 l // Začínáme s prázdnými objemy
Dzban 1 ma 3 l --- dzban 2 ma 0 l // Naplníme džbán 1
Dzban 1 ma 0 l --- dzban 2 ma 3 l // Přelijeme obsah džbánu 1 do džbánu 2
Dzban 1 ma 3 l --- dzban 2 ma 3 l // Naplníme džbán 1
Dzban 1 ma 0 l --- dzban 2 ma 6 l // Přelijeme obsah džbánu 1 do džbánu 2
Dzban 1 ma 3 l --- dzban 2 ma 6 l // Naplníme džbán 1
Dzban 1 ma 2 l --- dzban 2 ma 7 l // Přelijeme obsah džbánu 1 do džbánu 2
Dzban 1 ma 2 l --- dzban 2 ma 0 l // Vylijeme ze džbánu 2 vodu
Dzban 1 ma 0 l --- dzban 2 ma 2 l // Přelijeme obsah džbánu 1 do džbánu 2
Dzban 1 ma 3 l --- dzban 2 ma 2 l // Naplníme džbán 1
Dzban 1 ma 0 l --- dzban 2 ma 5 l // Přelijeme obsah džbánu 1 do džbánu 2
Dzban 1 ma 3 l --- dzban 2 ma 5 l // Naplníme džbán 1
Dzban 1 ma 1 l --- dzban 2 ma 7 l // Vylijeme ze džbánu 2 vodu
Dzban 1 ma 1 l --- dzban 2 ma 0 l // Výsledný
~~~

## Build

### option 1 dočasné
~~~ shell
git clone https://github.com/Overionised/Problem-dvou-dzbanu.git
cd Problem-dvou-dzbanu
g++ main.cpp -o dzban
~~~

### option 2 instalace
~~~ shell
git clone https://github.com/Overionised/Problem-dvou-dzbanu.git
cd Problem-dvou-dzbanu
g++ main.cpp -o dzban
sudo cp dzban /usr/bin/
~~~
## Run
### option 1 usecase
~~~ shell
./dzban [velikost dzbanu1] [velikost dzbanu2]
~~~

### option 2 usecase
~~~ shell
dzban [velikost dzbanu1] [velikost dzbanu2]
~~~

## uzivaní
~~~ shell
dzban [velikost dzbanu1] [velikost dzbanu2]
~~~

