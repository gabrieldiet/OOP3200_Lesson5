/* Name: Gabriel Dietrich
 * Date: Oct 07 2020
 * Course: OOP3200 - ICE 4
 *
 * Note: Code adapted from what was given by professor Tom  
 */





#include <iomanip>
#include <iostream>

#include <vector>

#include "GameObject.h"


static void BuildGameObjects(std::vector<GameObject*> game_objects, const int num = 2)
{
	for (auto count = 0; count < num; ++ count)
	{
		int id;
		std::cout << "Enter the gameObject's ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject's Position (x, y): ";
		std::cin >> point;
		std::cout << "\n-------------------------------------------------" << std::endl;
		std::cout << "You entered " << id << " for the gameObject's ID " << std::endl;
		std::cout << "You entered " << point << " for the gameObject's position " << std::endl;
		std::cout << "--------------------------------------------------\n" << std::endl;
		auto* gameObject = new GameObject(id, point);
		game_objects.push_back(gameObject);
		
	}
	
}


static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first gameObject and second point is: "
		      << Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first gameObject to the second one is: "
		<< Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition())
		<< std::endl;;

	std::cout << "-------------------------------------------------------------\m" << std::endl;
	std::cout << "First Game Object details: " << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object details: " << std::endl;
	std::cout << object2->ToString() << std::endl;
}




int main()
{
	std::vector<GameObject*> gameObjects;

	int num_of_GO;
	std::cout << "How many Game Objects do you need?: ";
	std::cin  >> num_of_GO;
	std::cout << "\n-------------------------------------------------------------" << std::endl;

	BuildGameObjects(gameObjects, num_of_GO);

	int index1;
	std::cout << "What is the first Object index?: ";
	std::cin  >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	int index2;
	std::cout << "\nWhat is the second Object index?: ";
	std::cin  >> index2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	
	CompareGameObjects(gameObjects[index1], gameObjects[index2]);
	CompareGameObjects(gameObjects[index1], gameObjects[index2]);
		
}

