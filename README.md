# -GIT-BASH-TUTORIAL
##### Some commonly used Git Commands and some terms are defined in this is file.


1. **date**:- The date command returns the current date and time.
*Format*- date

2. **cal**:- The cal command shows the monthly calender
*Format*- cal

3. **df**:- The df command returns the total available memory of the system.
*Format*- df

4. **echo**:- The echo command allows the user to print any text they want.
*Format*- echo "String"

5. **pwd**:- The pwd commnand returns the current working directory.
*Fromat*- pwd

6. **cd**:- The cd command allows the user to change the currently active directory to any dirctory they want.
*Format*- cd (Path)

   **cd..**:- Changes the current working directory to the root folder
*Format*- cd..

   **cd-**:- Changes the current working directory to the previous directory
*Format*- cd-

7. **ls**:- Lists the contents of the current working directory
*Format*- ls

**ls-l**:- Lists the contents of the current directory in the long format showing all the details if the files and folders.
*Format*- ls-l

8. **touch** Allows you to create a new file in the current directory.
*Format*- touch (filename.ext>

9. **mkdir** Allows you to create a sub directory in the current directory.
*Format*- mkdir (Nameofsubdirectory>

10. **cp** Allows the user to copy the contents of a file from one file to another
*Format*- cp (Fromfile.ext> (Tofile.ext>
	
***Can Create a new file if the To_file does not exist***

**cp <File.ext> <Dir>**  Copies the file to the directory mentioned.
**cp -r <Dir1> <Dir2>** Copies directory Dir1 into Dir2
    
11. **rm** Allows the user to delete files from the current working directory.
*Format*- rm (File.ext)

12. **mv** Allows the user to cut and paste files
*Format*- mv (File.ext) (Dir)

13. **cat** The cat commands allows the user to read files. 
*Format*- cat (filename.ext)
**cat <filename.ext> | sort** Arranges the lines of text in the file in an alphabetical order.
**cat <filename.ext> | grep "String** Searches and prints the lines of text having the String in them.

14. **Client-Server Model**
In a client server model computers called servers(which provide the services) and the clients(which request services) connected over a network. In the model the            distribution application partitions the tasks accordingly.
  
  **Client-side**:- It refers to the programs and operations performed by the client on the network. A client usually does not share it's resources on the netword but it requests servives from the server usually through a web browser.
  **Server-side**:- It refers to the programs and operations that run on the server computer. Server usually runs programs that accept requests from the clients and provides resources to the clients. It also runs some other tasks like maintainance. 

15. **HTTP Protocol**
It is a set of rules that determine how various files are transferred over the web. It works along with TCP/IP protocol when a request is sent by client to server. When the client requests the servers for resources to load a webpage the various parts of the webpage like the text,images,sound,video and multimedia files are transferred over several requests to the server. HTTP oversees the transfer of the files and the peicing of them together to form the webpage. TCP/IP transport the files as small packets over the network. HTTP determines how the files are transferred.

16. **HTTP vs HTTPS**
HTTPS consists of SSL(Secure Sockets Layer) as a sublayer under the usual HTTP layer. This allows it to encrypt and decrypt HTTP requests and the files returned by the web server. This secures the transfer from attacks while the files are tranferred over the web.

17. **Library vs Framework**

*Library consits of functions and class definations usually written by someone else, which perform very specific operations.*

*Framework is an application which has open functions or objects which the users write to create a custom application. It is a skeleton where the operations are not specific but rather defined by the user by filling the skeleton by defining the operations.*
