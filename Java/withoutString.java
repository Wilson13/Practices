public String withoutString(String base, String remove) {

	// oriBase saves the original base string, lcBase and lcRemove are the corresponding converted lower case string
	String oriBase=base, lcBase=base.toLowerCase(), lcRemove=remove.toLowerCase();
	
	while(lcBase.contains(lcRemove)){
		// Removes the targeted string from the base string (base is to store the original characters case, lcBase is to remove the strings while ignoring cases)
		// In the first line, base uses index of lcBase to remove the strings (search and find the string while ignoring the case but stores the correct string case in base)
		base = base.substring(0, lcBase.indexOf(lcRemove))+base.substring(lcBase.indexOf(lcRemove)+remove.length());	
		lcBase= lcBase.substring(0, lcBase.indexOf(lcRemove))+lcBase.substring(lcBase.indexOf(lcRemove)+remove.length());
	}
	return base;
	
}