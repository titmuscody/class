PROGNAME=assn7
${PROGNAME} : ${PROGNAME}.c
	gcc -g  -o ${PROGNAME} ${PROGNAME}.c
clean : 
	rm ${PROGNAME}
 
