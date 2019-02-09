void QuickSortIntegerArray(void* Array, int FromLeft,int FromRight)
{
	int pivot = Array[(left + right)/2];//Select the middle element as the pivot
	int Temp = 0;
	int LeftSlide = FromLeft;
	int RightSlide = FromRight;
	
	//partition; Move each element to the Right or Left side of the array based on the Partition value
	while(LeftSlide <= RightSlide)
	{
		//Move from the left inward untill an element belongs in the other partition
		while(Array[LeftSlide]<pivot)
		{
			LeftSlide++;
		}
		//Move from the Right inward untill an element belongs in the other partition
		while(Array[RightSlide]>pivot)
		{
			RightSlide++;
		}
		
		//Segment the other elements based on their position (greater or less than) the pivot
		//	we can swap the LeftSlide/Rightslide's because they already represent the most 
		//	inward positions that dont meet the Partition Value's Rule.
		if(LeftSlide <= RightSlide)
		{
			Temp = array[LeftSlide];
			Array[LeftSlide] = Array[RightSlide];
			Array[RightSlide] = Temp;
			RightSlide++;
			LeftSlide++;
		}
	}
	
	
	//Recursive calls
	if(FromLeft < RightSlide)
	{
		QuickSortTrainingData(Array,FromLeft,RightSlide);
	}
	if(LeftSlide < FromRight)
	{
		QuickSortTrainingData(Array,LeftSlide,FromRight);
	}
}
//Do not modify the dataset generator or you will get the wrong answer
void RandomizeArray(int * data,int ArrayLength)
{
	//seed RNG
	//srand(SEED);

	for (unsigned int i=0; i<ArrayLength; i++)
	{
		data[i]=1000.0*((double)(rand()) / RAND_MAX);
	}

}
/* Function to print an array */
void printPointArray(int * data)
{
	  printf("Data Array:\n");
    for (unsigned int i = 0; i < N; i++)
		{
			printf("Data[%d] = (%f,%f) Located At: %p\n",i, data[i].x, data[i].y, &data[i]);
		}


}

bool Test_QuickSortIntegerArray(void* Array, int FromLeft,int FromRight)
{
	int Nodes = 10;
	//generate dataset:
	int * data;
	data =(int*)malloc(sizeof(int)*Nodes);
	printf("\n\nSize of dataset (MiB): %f",(2.0*sizeof(double)*N*1.0)/(1024.0*1024.0));
	RandomizeArray(datam,Nodes);
	free(data);
}