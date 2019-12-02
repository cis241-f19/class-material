## Minilab 14

A very basic form of encryption can be
accomplished by bitwise XORing the message 
with a key.  Theoretically, if the key is
as long as the message and kept secret, then
this is known as a one-time pad and is
basically infinitely secure.

For this minilab, we'll look at a smaller
example.

* Create a 12 character message.  Print
  your message in hexadecimal (`%x` formatter).
* Create an 8 bit key. You'll likely want to
  store this as a charcter since 8 bits = 1 bye
* Create a C program to perform the
  XOR of the message with the key,
  repeating the key as needed to
  perform the XOR for the whole message.
* Output the encrypted message in hexadecimal
  This is necessary because some
  of the characters are likely unprintable.
* Decryption is performed by simply XORing
  the key in the same way with the encrypted
  message.  Decrypt your message and print
  the result in hexadecimal (it should be the
  same as your original message printed in
  hexadecimal).

Notes:

* While the exclusive-or is a component
  of many encryption algorithms, the 
  algorithm described above with a repeating
  key is fairly easy to break (so I wouldn't
  recommend starting to use this for your
  encryption needs).

