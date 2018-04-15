# my_string

Biblioteca criada com funções reescritas da biblioteca [string.h](http://www.cplusplus.com/reference/cstring/).

Nela, as funções utilizam de operações binárias e funções recursivas para cumprir com o esperado de cada uma delas, as funções escritas são:

## string_length

A função _*string_length*_ recebe uma string e determina o seu tamanho, ela possui a seguinte assinatura:

```C
int string_length(char *string);
``` 

Com ela é possivél saber quantos caracteres formam uma string passada por parâmetro tendo este valor inteiro retornado.

#### Exemplo

```C
#include <stdio.h>

#include "my_string.h"

int main(int argc, char const *argv[]) {
	printf("%d\n", string_length("ola, pessoal"));
	return 0;
}
```

com a implementação acima, a saída seria o valor **12(doze)** que é a quantidade de caracteres da string passada para a função que no exemplo é: **ola, pessoal**.

## string_equals

A função _*string_equals*_ verifica se duas strings são iguais retornando **0** caso não sejam e **1** para caso positivo, ela possui a seguinte assinatura:

```C
int string_equals(char *string1, char *string2);
```

### Exemplo

```C
#include <stdio.h>

#include "my_string.h"

int main(int argc, char const *argv[]) {
	printf("%d\n", string_equals("jackson", Jackson));
	printf("%d\n", string_equals("jackson", jackson));
	return 0;
}
```

No primeiro printf a saída era **0**, pois as strings _*jackson*_ e _*Jackson*_ são diferentes por possuírem o primeiro caracter diferentes (o *j* minúsculo é diferente do *J* maiúsculo)