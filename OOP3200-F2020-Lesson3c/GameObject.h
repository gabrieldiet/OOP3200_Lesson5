/* Name: Gabriel Dietrich
 * Date: Oct 07 2020
 * Course: OOP3200 - ICE 4
 *
 * Note: Code adapted from what was given by professor Tom
 */


#pragma once

#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"


class GameObject
{
public:

	//Constructors 
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);

	// Rule of Three
	~GameObject(); // Destructor
	GameObject(const GameObject& other_object); // Copy constructor
	GameObject& operator=(const GameObject& other_object); // Assignment operator

	// Accessors (Get)
	Vector2D GetPosition() const;
	int GetID() const;

	// Mutators (Set)
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	// Utility functions
	std::string ToString() const;
	
private:
	int m_id;
	Vector2D m_position; // m because it's private
	
	
};


#endif 


