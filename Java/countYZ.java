public int countYZ(String str) {
	  int total = 0;
	  for(int i=0;i<str.length();i++){
	  
	    if((((i+1<str.length()) && !Character.isLetter(str.charAt(i+1))) || i==(str.length()-1)) && (Character.toString(str.charAt(i)).matches("[y|Y|z|Z]")))
	       total++;
	  }
	  return total;
}