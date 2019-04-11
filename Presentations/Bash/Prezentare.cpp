**The Shell?
{
	A shell is a user interface that takes commands and gives them to the operating system to perform.
}




**Unix design principle
{
	Everything is a file!
	Everything running is a process!
	{
		-Files are files.
		-Directories are files.
		-Devices are files.
		-Processes are files.
		-Shared memory is a file.
		-File handles are files.
		
		***Concept
		{
			-Easy to understand
			-Difficult to implement
			-Extremely powerful in practice
		}
	}
}




**Alias
{
	An alias is essentially a keyword shortcut, an abbreviation.
	
	***Make an alias
	{
		vi ~/.bashrc
		
		. ~/.bashrc
	}
	
	***Typos
	{
		alias sl='ls'
		alias mdkir='mkdir'
		alias g='git'
		alias v=valgrind

		g status
	}
	
	***Longer commands
	{
		alias gpom='git push origin master'
		alias grom='git reset --hard origin/master'

		alias bsc='git add -A; git commit -m "BS Commit"; git push'
	}
	
	***
	{
		alias my_reg_exp='echo [0-9a-f]{2}:[0-9a-f]'
		alias utcdate='TZ=utc date'
	}
	
	***
	{
		cdp()
		{
			while ![ -d .git]; do
			cd ..
			done
		}
		
		gp 
		{
			git add -A
			git commit -m $1
			git push'
		}
	}
}







































*