# TSP_SimulatedAnnealingImproved
This is an implementation of TSP problem in C++ using Simulated Annealing algorithm.  
I have made a slight modification in the algorithm which increases the performance, It essentially increases the exploration if the algorithm is stuck at a sub-optimal solution for a long time.  
**This project was developed as an assignment of Artificial Intelligence (CS305) course at IIT Mandi, under the guidance of Dr. Deepak Khemani.**

Usage:
To run the sample test cases-  
  g++ -o tsp tsp.cpp  
  ./tsp <"input_file"  

To use on a general adjacency matrix-  
  include TSP_SA.h in your program  
  create an object of TSP_SA class the constructor for which is-  
    TSP_SA(double \**adjacency_matrix, int num_of_cities);  
  call begin() function on the object  
  
  eg: TSP_SA TSP(edges,n);  
      TSP.begin();
      
It prints the best path at every instance
