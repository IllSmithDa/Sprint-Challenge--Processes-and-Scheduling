1. I think both answer a. and c. are possible. It will probably not be b as processes for the most part do not share memory address ranges. Processes are essentially isolated from one another in terms of allocating memory from ram. These describe civilian processes and the fact these processes are given memory indicate that they are civlian processes. 'c' is possible in scenario if another process using the 0 -32000 was stopped and had its memory deallocated while the memory after 64000 was already allocated by another process which can lead the kernel to give the 0 - 32000 address space to the second process. 


2. Processes have states which describes the action the process is currently performing. Process state can be different depending on Os but some basic ones include 'ready', 'waiting', 'running' and 'terminated.' 'Ready' just means the process is ready to be run, waiting means process is waiting for some other function to be completed before it can continue to run, 'running' just means process is running, and terminated means the process has been completed. Its very self explanatory. 


3. The printf call is faster than the system write call by 7211 nanoseconds on my machine.


4. While printf does call write() under the hood, printf is not a system call. System calls are usually more costly and operates from the kernel rather than the application. This might equate to storing a 5 dollars by depositing it into a bank rather than just putting it in your wallet. Both do the same thing but one is much costlier than the other. 