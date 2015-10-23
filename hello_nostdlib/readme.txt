
From: https://blogs.oracle.com/ksplice/entry/hello_from_a_libc_free

 7297  mkdir hello_nostdlib
 7298  cd hello_nostdlib/
 7299  vi hello.c
 7300  gcc -o hello hello.c
 7301  wc -c hello
 7302  ll
 7303  ga hello.c
 7304  g
 7305  g commit -m "Add hello.c to play with not using stdlib"
 7306  g
 7307  gh
 7308  g log
 7309  ll
 7310  ./hello 
 7311  objdump -t hello
 7312  objdump -t hello | wc
 7313  objdump -t hello | less
 7314  g
 7315  vi hello.c
 7316  gcc -o hello hello.c
 7317  ./hello
 7318  wc -c hello
 7319  ll
 7320  gcc -nostdlib -o hello hello.c
 7321  wc -c hello
 7322  ./hello
 7323  ll
 7324  vi stubstart.S
 7325  gcc -nostdlib stubstart.S -o hello hello.c
 7326  ./hello
 7327  gcc -g -nostdlib stubstart.S -o hello hello.cgcc -g -nostdlib stubstart.S -o hello hello.cgcc -g -nostdlib stubstart.S -o hello hello.c
 7328  gcc -g -nostdlib stubstart.S -o hello hello.c
 7329  gdb hello
 7330  objdump -d hello
 7331  g
 7332  ga hello.c stubstart.S 
 7333  g
 7334  g commit -m "Add manual start for hello"
 7335  vi stubstart.S 
 7336  gcc  -nostdlib stubstart.S -o hello hello.c
 7337  ./hello
 7338  wc -c hello
