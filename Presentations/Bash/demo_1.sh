#source: https://www.youtube.com/watch?v=7uwW20odwEk
***Keywords
Pipe
Variable
Command
Grep Global/RegularExpresion/print
Methods
Alias
disown
${}
$()

***Draft
mkdir -p folder/{par1,par2}/{copchil1,copchil2,copchil3}
mkdir -p folder/{1..100}/{1..100}
mkdir 00 01 02
ls | cut -d. -f1 |less
ls | cut -d. -f1 | uniq
mkdir $( ls | cut -d. -f1 | uniq )

for f in *(.); do print $f;done

d={f%%.*}









for f in *(.); do d={f%%.*}; mv $f $d;done


for f in *(.); do d=${f#*.} d=${$d%%.*}; mv $f $d;done


ls | rev | cut -d . -f 2 | rev | sort | uniq




for f in *(.);
 do print $f;
 done
 
***Steps:



**|Organizing Photos

The images format:

YEAR.MONTH.NAME.CATEGORY.png

*>Making directories
   {
    Playing with cut:
    cut -d, f 2,4 oscar_felame_winners.csv

    - vb de :
    >-d poate si de c
    >linii
    >f
   }

   -decide grouping rule

   YEAR:
   ls | cut -d . -f 1 | uniq
   MONTH:
   ls | cut -d . -f 2 | sort | uniq
   CATEGORY:
   ls | rev | cut -d . -f 2 | rev | sort | uniq


*>Moving Pictures
-decide image's category from it's name
-do this with all the images
-move them

for f in *(.)
do
 #do stuff here
done

for f in *(.); do d=?; mv $f $d;done

YEAR:
 d=${f%%.*}
MONTH:
 d=${f#*.} d=${d%%.*}
CATEGORY:
 d=${f%.*} d=${d##*.}

for f in *(.); do d=${f%.*} d=${d##*.}; mv $f $d;done
