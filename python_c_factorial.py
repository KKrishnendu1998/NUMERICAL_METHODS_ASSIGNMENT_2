"""in the command prompt I have written the command
gcc -shared -o fact.dll -fPIC factorial.c 
where factorial.c is the file in c to compute the factorial """
from ctype import*
factorial=CDLL("P:/KRISHENDU/fac.dll")
factorial.main()
