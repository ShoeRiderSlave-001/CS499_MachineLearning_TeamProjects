#ifndef KNN_CPP
#define KNN_CPP

//Implement KNN
//Implement KNN_1ToMax

#include "KNN.h"
//RCPP includes and R flags
////////////////////////////////////////////
#include <Rcpp.h>
using namespace Rcpp;

// Note need this line for any cpp code, Dont remove
// [[Rcpp::export]]
////////////////////////////////////////////

//Also when using RCPP, you cant use pointers in parameters for function calls
double double_me_cpp(double x) {
  // Doubles the value at the memory location pointed to by x
  x = x + x;
  return(x);
}



int knn(
   //Training Points
    double * training_inputs_ptr,
    double * training_lables_ptr,
    int NRow,int NCol,
    int MaxNeighbors,
    //Test Points
    double * testing_inputs_ptr,
    double * testing_Prediction_ptr
  )
{
  return 0;
}

/*Takes:
  (

  ),
  Modifies the Vector at: testing_Prediction_ptr,
    selecting a classification for a single point
  Note: this function might be able to be made faster by segmenting points into a sorted 'bucket',
    By sorting once, we might see gains with Larger lists of training data...
*/
int Predict_1ToMAX_KNearestNeighbors(
   //Training Points
    double * training_inputs_ptr,
    double * training_lables_ptr,
    int NRow,int NCol,
    int MaxNeighbors,
    //Test Points
    double * testing_inputs_ptr,
    double * testing_Prediction_ptr
  )
{
  //TODO:
  //Take input parameters and map them with the Eigen objects
  //
  //Sort Training Elements, so finding the nearest neighbors is quick
  //


  //Loop from 1 to Max K NearestNeighbors
  //Could use OpenMP to make this component Parallel

  //omp_set_num_threads(2);
  //#pragma omp parallel private() shared()
  for(int i=0, i < MaxNeighbors, i++)
  {
    //select element from accending Distance sorted list

    //accumulate TotalY
    //find the Y hat value for each element in the array = TotalY / i
  }
  return 0;
}




/*Takes:
  (

  ),
  Modifies the Vector at: testing_Prediction_ptr,
    selecting a classification for a single point
  Note: this function might be able to be made faster by segmenting points into a sorted 'bucket',
    By sorting once, we might see gains with Larger lists of training data...
*/
int PredictTestArray_1ToMAX_KNearestNeighbors
  (
   //Training Points
    double * training_inputs_ptr,
    double * training_Lables,
    int NRow,int NCol,
    int MaxNeighbors,
    //Test Points
    double * testing_inputs_ptr,
    double * testing_Prediction_ptr,
    int NTest_Row,int NTest_Col
  )
 {
	//TODO:
    //Take input parameters and map them with the Eigen objects
    //Create a Sorted List for an individual element
	//for loop over the entire testing_Prediction_ptr Array
	return 0;
 }


 //Creating a Parallel version of Quick Sort
 //TODO Need to verify that it works
 void QuickSortTrainingData
  (
   //Training Points
    double * training_inputs_ptr,
    double * training_Lables,
    int NRow,int NCol
  )
  {
	if(low < high)
    {
		int Partition = PartitionArray();
		while(left <= right)
		{

		}
		#pragma omp task shared() private()
		void QuickSortTrainingData
		(
			//Training Points
			double * training_inputs_ptr,
			double * training_Lables,
			int NRow, int NCol
		);

		#pragma omp task shared() private()
		void QuickSortTrainingData
		(
			//Training Points
			double * training_inputs_ptr,
			double * training_Lables,
			int NRow, int NCol
		);
		#pragma omp taskwait

   }
  }





 //The way i see the KNN Problem is to find an array of predictions from a KNN Problem,
 // and find the instance of K, where with the lowest test error.

 #endif // KNN_CPP