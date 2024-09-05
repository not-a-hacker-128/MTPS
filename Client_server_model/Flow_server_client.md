## Client server model
The client-server model is 
one of the most commonly used communication paradigms in networked systems. 
A server is a long-running program that stands idle until some
clients connect to the server and request service. Thus, 
it is the client who initiates communication with the server. 
Clients normally communicate with one server at a time, but most servers can 
communicate with multiple clients simultaneously. Clients need some advance knowledge 
of the server and its address, but the server does not need to know the address of (or even the existence of) the client prior to the connection being established.

Client and servers communicate by means of multiple layers of network protocols. 
When the client and server are both connected to the same Local Area Network (LAN) it looks like the first diagram:
[``](url)
![General_networking](https://github.com/user-attachments/assets/55af944b-ae0c-4583-881c-32b04a24b502)

At the second diagram shows the connection for Ethernet.
Although the diagram shows an Ethernet, the case of Wi-Fi is exactly analogous.
The client and the server may be in different LANs, 
with both LANs connected to a Wide Area Network (WAN) by means of routers. The largest WAN is the Internet, but companies may have their own WANs. 
