Alias

***How to
vi ~/.bashrc




. ~/.bashrc


***Typos

alias sl='ls'
alias mdkir='mkdir'
alias g='git'
alias v=valgrind

g status


***Longer commands
alias gpom='git push origin master'
alias grom='git reset --hard origin/master'

alias bsc='git add -A; git commit -m "BS Commit"; git push'

alias my_reg_exp='echo [0-9a-f]{2}:[0-9a-f]'

alias utcdate='TZ=utc date'

cdp(){
	TEMP_PWD='pwd'
	while ![ -d .git]; do
	cd ..
	done
	OLDPWD=$TEMP_PWD
}

#cd -        //home