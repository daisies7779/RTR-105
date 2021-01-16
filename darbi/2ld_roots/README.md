#### 2. Laboratorijas darbs
# sin(x/2)=A aprēķins, izmantojot dihotomijas metodi
#### Darba uzdevums
Izstrādāt programmu, kura aprēķina sin(x/2)=A pēc lietotāja uzdotiem parametriem, attēlot tās grafiku ar gnuplot rīka palīdzību.
#### Uzdevuma matemātiskā analīze
Svarīgi saprast ka funkcijas:
1) sin(x/2)=A
2) sin(x/2)-A

ir divas dažādas funkcijas, jo tām ir dažādi vērtību apgabali!

Būtībā sin(x/2)=A saknes atrašana nozīmē atrisināt tās inverso funkciju 2arcsin(A)=x
Tas nozīmē, ka izvēloties augšējo vai apakšējo robežu, jāņem vērā arcsin definīcija apgabals, kur x ir starp -1 un 1.
Ja netiks ņemts vērā funkcijas vērtību apgabals (kurš ir attiecīgi tās inversās funkcijas defenīcijas apgabals), tad ar dihotomijas metodi
algoritms sakni neatradīs jo nenotiks zīmes maiņa!

Piemēram y=sin(x/2) + 7 vienmēr atradīsies pozitīvajā y vērtību apgabalā!
#### Kods, grafiks un to apraksts.
Dihotomijas metodei kodā šo problēmu rada šī te koda daļa:
```c
if(funkca*funkcb>0){
		printf("Intervala [%.2f;%.2f] sin(x) funkcijai ", a,b);
		printf("saknju nav (vai taja ir para saknju skaits) \n");
		return 1;
	}
  ```
   ### funkcijas grafiks
  ![alt text](https://github.com/daisies7779/RTR-105/blob/master/darbi/2ld_roots/arcsin05.png?raw=true)
 
