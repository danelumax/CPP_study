/*
 * UrgencyMessage.h
 *
 *  Created on: Oct 2, 2016
 *      Author: eliwech
 */

#ifndef URGENCYMESSAGE_H_
#define URGENCYMESSAGE_H_

#include "AbstractMessage.h"
//#include "MessageImplementor.h"

class UrgencyMessage : public AbstractMessage
{
public:
	UrgencyMessage(AbstractMessage::MessageType type);
	virtual ~UrgencyMessage();
	virtual void sendMessage(std::string message, std::string toUser);
};

#endif /* URGENCYMESSAGE_H_ */
