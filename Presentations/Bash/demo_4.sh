boba(){
	#temp=$(git branch)
	echo $(git branch | grep \* | cut -d ' ' -f2)
	#echo $($1)
}
boba $1
#cd -        //home


next()
{
	this_branch=$(git branch | grep \* | cut -d ' ' -f2)
	
	branch_number=$(git branch | grep \* | cut -b 5-)
	
	next_branch=$(git branch | grep \* | cut -b -4)
	next_branch_number=$(( $branch_number + 1 ))
	next_branch=$next_branchnext_branch_number
	
	git stash
	git checkout $next_branch
}