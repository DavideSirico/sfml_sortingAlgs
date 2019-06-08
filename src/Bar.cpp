#include "Bar.h"

Bar::Bar()
{

}

Bar::Bar(int _w, int _h, int _n)
{
	this->w = _w;
	this->h = _h;
	this->n = _n;

	this->rect = new sf::RectangleShape(sf::Vector2f(w, h));
	this->rect->setOrigin(0, this->h);
	this->rect->setFillColor(sf::Color(175, 205, 255));
	this->rect->setOutlineThickness(1.0f);
	this->rect->setOutlineColor(sf::Color::Black);
}

Bar::~Bar()
{
	delete this->rect;
}

sf::RectangleShape *Bar::getRect()
{
	return this->rect;
}