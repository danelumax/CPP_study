/*
 * UrgencyMessage.cpp
 *
 *  Created on: Oct 2, 2016
 *      Author: eliwech
 */

#include "UrgencyMessage.h"

UrgencyMessage::UrgencyMessage()
{
}

UrgencyMessage::~UrgencyMessage()
{
}

void UrgencyMessage::sendMessage(std::string message, std::string toUser)
{
	message = "Urgency: " + message;
	AbstractMessage::sendMessage(message, toUser);
}


