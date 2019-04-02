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
 
