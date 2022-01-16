program variableTesting
    implicit none
    
       ! declaring variables
       integer :: total      
       real :: average 
       complex :: cx  
       logical :: done 
       character(len=80) :: message ! a string of 80 characters

        !two byte integer
        integer(kind = 2) :: shortval
        
        !four byte integer
        integer(kind = 4) :: longval
        
        !eight byte integer
        integer(kind = 8) :: verylongval
        
        !sixteen byte integer
        integer(kind = 16) :: veryverylongval
        
        !default integer 
        integer :: defval
        
       !assigning values
       total = 20000  
       average = 1666.67   
       done = .true.   
       message = "A big Hello from Tutorials Point" 
       cx = (3.0, 5.0) ! cx = 3.0 + 5.0i
    
       Print *, total
       Print *, average
       Print *, cx
       Print *, done
       Print *, message
       
end program variableTesting