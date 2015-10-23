Original source of code puzzle:
http://coverclock.blogspot.com/2014/09/what-you-dont-know-can-hurt-you.html

 cd c_stuff/
 mkdir chip_overclk
 cd chip_overclk/
 vi test.c
 cc -o test test.c
 ./test
 gcc -o test test.c
 ./test
 gcc -S test.c
 more test.s
 mv test.s test.ss
 gcc -S -masm=intel test.c
 diff test.s test.ss
 mv test.s test_intel.s
 mv test.ss test_att.s
 diff test_*
 less test_att.s 
 cat test_att.s 
 cat test_intel.s 
 objdump -d test
 objdump -d --disassembler-options=intel test
