// Algorithm process
// For the initial search process a DFS seems fine
// If we encounter a loop scenario or have discovered all points all ready we can begin searching
// Data could be stored with a vector of two int pairs
// 

#include<cstdio>
#include<vector>


// void search(){
// 	// DFS -> A* or something
// 	// Assuming arduino has enough memory
	
// 	int unfound;
// 	int found;
	
// 	while (unfound - found !=0){
// 		// Determine adjacent points and add to points array/vector
		
		
		
// 		// DFS else A* 
// 		if (foundLeft() && foundRight() && foundForward()){
// 			// A*
// 			// Determine which points have detected but robot has not been on
// 			/* Steps:
// 			1. Determine current point and unfound points
// 			2. Using a metric, determine closest point (preference to fewer turns)
// 			3. Drive to point
// 			*/
// 		}
// 		else{
// 			// DFS
// 			// Algorithm is very similar to right hand wall following
			
// 			if (!foundForward()){
// 				driveStraight();
// 			}
// 			else if (!foundLeft()){
// 				turnLeft();
// 				driveStraight();
// 			}
// 			else {
// 				turnRight();
// 				driveStraight();
// 			}
// 		}
		
		
// 	}

	
// }

int main(){
	
	std::vector<std::pair<int, int> > coords;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			coords.push_back(std::make_pair(i, j));
		}
		
	}
	
	//std::vector<int[2]> v;
	
	//v.push_back([0, 3]);
	
	// prinf(v);
	
	int coordsSize = sizeof(std::vector<std::pair<int, int> >) + sizeof(int)*coords.size();
	
	printf("%d\n", coordsSize*8);

	for (auto & e : coords){
		printf("(%d, %d)\n", e.first, e.second);
	}

	// 4

	return 0;
}