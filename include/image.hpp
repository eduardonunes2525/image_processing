#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

class Image
{
private:
// Type that defines the image
// Value contained in the header, in first position
	std::string imageType;
// Number of columns in image
// Value contained in the header, in second position
	int numberColumnsHeader;
// Number of lines in image
// Value contained in the header, in third posistion
	int numberLinesHeader;
// Number of max level in image
// Value contained in the header in fourth position
	int maxGrayLevel;
// Number of columns in image file
// Value to be determined by mapping
	int* numberElementsColumnsImageFile;
// Number of lines in image
// Value to be determined by mapping
	int numberLinesImageFile; 

public:
	Image();
	//~Image();

// Method for read header, stores the data in Image object 
	void readHeader(std::fstream &fileImage);

// Methods for ImageFile
	std::string takeNameFile();
	void openImage(std::fstream &file, std::string nameFile);

// Gets and sets methods 
	std::string getImageType();
	void setImageType(std::string imageType);
	
	int getNumberColumnsHeader();
	void setNumberColumnsHeader(int numberColumnsHeader);

	int getNumberLinesHeader();
	void setNumberLinesHeader(int numberLinesHeader);

	int getMaxGrayLevel();
	void setMaxGrayLevel(int maxGrayLevel);

// Despeses header lines
	void despisesHeader(std::fstream &file);

	int getNumberLinesImageFile();
	void setNumberLinesImageFile(int numberLinesImageFile);

	int* getNumberElementsColumnsImageFile();
	void setNumberElementsColumnsImageFile(int* numberElementsColumnsImageFile);

	int getNumberLinesImage(std::fstream &file);
};

#endif