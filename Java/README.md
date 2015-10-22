# Practices

1. CountYZ

	Given a string, count the number of words ending in 'y' or 'z' -- so the 'y' in "heavy" and the 'z' in "fez" count, but not the 'y' in "yellow" (not case sensitive). 

	We'll say that a y or z is at the end of a word if there is not an alphabetic letter immediately following it. 

	(Note: Character.isLetter(char) tests if a char is an alphabetic letter.) 

	countYZ("fez day") → 2  
	countYZ("day fez") → 2  
	countYZ("day fyyyz") → 2  
	
	Source: http://codingbat.com/prob/p199171
	
2. 	Given two strings, base and remove, return a version of the base string where all instances of the remove string have been removed (not case sensitive). 

	You may assume that the remove string is length 1 or more. Remove only non-overlapping instances, so with "xxx" removing "xx" leaves "x". 

	withoutString("Hello there", "llo") → "He there"  
	withoutString("Hello there", "e") → "Hllo thr"  
	withoutString("Hello there", "x") → "Hello there"  
	
	Source: http://codingbat.com/prob/p192570