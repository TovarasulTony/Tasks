What is The Shell?

		A shell is a user interface that takes commands and gives them to the operating system to perform.
		Shell-ul este o interfata grafica care preia comenzile, deobicei de la consola si le trimite sistemului de operare pentru procesare.
		
Exemplu de shell

		uite acesta este un shell
		uite aceasta este o comanda pe care o folosesti tu ls pentru a lista fisierele. cd pentru a naviga printre foldere
		
		CE FACE LS-ul???
		
		man vine de la manual
		
		ls - list information about files
		
		Obs: se afiseaza si directoare
		
		PT CA:
		Principiul Unix:
			Orice este un fisier
			Orice ruleaza este proces
				**Concept 	-usor de inteles
							-greu de implementat in practiva
							-extrem de PUTERNIC cand e vorba de practica
				fisierul
				directorul
				devices
				procese
				shared memory
				file handles
				
			La procese:
			
			Un exemplu
			
			<Deschide terminal>
			echo $$; wait 1000
			
			ps - aux 
			cd /proc;ls -l | grep 
			
			??Intrebi de grep???
			
		Tranzitie
			
Stim ce este shelul si stim care este principiul dupa care sunt organizate

De ce am investi timp sa invatam mai mult ce ofera bashul?

Automatizare + eficientizare.


Sa vedem puterea lui printr-un exemplu:

	Task:
		-am poze
		-nu imi place ca sunt toate la un loc, cu cat o sa adaug mai multe, cu atat o sa imi fie mai greu sa gasesc ce caut
		-vreau sa le grupez in directoare pentru o cautare cat mai eficienta
		
	Raw -> denumire
	
	Respecta urmatorul template;
	
	AN.LUNA.TITLU.CATEGOIRE.png
	
	sa incepem dupa an
	
	solutie triviala:  
		mkdir 2017 2018 2019
	
	solutie smart:
		ls | cut -d . -f 1 | uniq
		definitia camp: string delimitat de .
		
	acum ca am doar elementele de care sunt interesat pot face foldere
	
		mkdir &(ls | cut -d . -f 1 | uniq)
		
	acum ca am folderele trebuie sa pun fiecare fisier in parte in folderul corespunzator
	
	for f in *(.); do d=${f%%.*}; mv $f $d;done
		
		operator f%%