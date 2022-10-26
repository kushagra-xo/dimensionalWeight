/******************************************************************************
*									      *
* Title: Dimensional Weight Calculation                                       *
* Description: This program calculates dimensional weight of a box, when      *
* given with its dimensions.						      *
*                                                                             *
* Copyright © 2022 Kushagra                                                   *
*                                                                             *
* This program is free software: you can redistribute it and/or modify        *
* it under the terms of the GNU General Public License as published by        *
* the Free Software Foundation, either version 3 of the License, or           *
* (at your option) any later version.                                         *
*                                                                             *
* This program is distributed in the hope that it will be useful,             *
* but WITHOUT ANY WARRANTY; without even the implied warranty of              *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               *
* GNU General Public License for more details.                                *
*                                                                             *
* You should have received a copy of the GNU General Public License           *
* along with this program.  If not, see <http://www.gnu.org/licenses/>.       *
*									      *
******************************************************************************/

#include<stdio.h>
#define CUBIC_INCHES_PER_POUND 166

int main(void)
{

	printf("\n");
	int length = 0;
	printf("Enter Length (inches):");
	scanf("%d", &length);

	int width  = 0;
	printf("Enter Width (inches):");
	scanf("%d", &width);

	int height = 0;
	printf("Enter Height (inches):");
	scanf("%d", &height);
	printf("\n");

	float volume = (length * width * height);
	float dimensionalWeight = (volume/CUBIC_INCHES_PER_POUND);

	printf("Dimensions of box: %dx%dx%d\n", length, width, height);
	printf("Volume = %.2f (cubic inches)\n", volume);
	printf("Dimensional weight = %.2f (pounds)\n", dimensionalWeight);
	printf("\n");

	return 0;
}
