/*
 * CommonMessage.cpp
 *
 *  Created on: Oct 2, 2016
 *      Author: eliwech
 */

#include "CommonMessage.h"

CommonMessage::CommonMessage()
{
}

CommonMessage::~CommonMessage()
{
}

void CommonMessage::sendMessage(std::string message, std::string toUser)
{
	AbstractMessage::sendMessage(message, toUser);
}
