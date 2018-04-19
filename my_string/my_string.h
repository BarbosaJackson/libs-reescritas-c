int string_length(char *str) {
	return *str == '\0' ? 0 : 1 + string_length(str+1);
}

int string_equals(char *string1, char *string2) {
	return *string1 != *string2 ? 0 : (*string1 == '\0' && *string2 == '\0') ? 1 : string_equals(string1 + 1, string2 + 1);
}

void string_copy(char *new_string, char *initial_string){
	if(*initial_string == '\0') {
		*new_string = '\0';
		return;
	}
	*new_string = *initial_string;
	string_copy(new_string + 1, initial_string + 1);
}

void string_uppercase(char *str) {
	if(*str == '\0'){
		return;
	} else if(*str >= 'A' && *str <= 'Z') {
		string_uppercase(str + 1);	
	} else{	
		*str = (*str + ('A' - 'a'));
		string_uppercase(str + 1);
	}
}

void string_lowercase(char *str) {
	if(*str == '\0'){
		return;
	} else if(*str >= 'a' && *str <= 'z') {
		string_lowercase(str + 1);	
	} else{	
		*str = (*str - ('A' - 'a'));
		string_lowercase(str + 1);
	}	
}

void le_string(char *str) {
	*str = getchar();
	if(*str == '\n') {
		*str = '\0';
		return;
	} else {
		le_string(str + 1);
	}
}