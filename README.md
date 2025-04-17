This is a report demonstrating the buffer overflow vulnerability, exploiting it, and how to prevent it.
without_var folder: has the C source code, compiled binary, and exploit where the section we will go to in the assembly code does not use RBP
with_var folder : has the C source code, compiled binary, and exploit where the section we will go to in the assembly code uses RBP, which requires us to do an extra step in the exploitation process
Report.docx: Full report explaining the vulnerabilities in the binary, detailed exploitation process, and the difference between both binaries. 
