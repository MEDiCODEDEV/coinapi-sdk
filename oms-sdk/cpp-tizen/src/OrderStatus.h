/*
 * OrderStatus.h
 *
 * Order statuses ##### Status description  | Name | Possible transitions to | Status description  | --- | --- | --- | | RECEIVED | REJECTED, ROUTING | We received an order and will send it to the exchange immedaitely | ROUTING | ROUTED | We are in the process of sending order to the exchange | ROUTED | REJECTED, NEW, PARTIALLY_FILLED, FILLED, CANCELED | Order was sent to the exchange from our side, but it&#39;s not yet active in order book | NEW | PARTIALLY_FILLED, FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it&#39;s untouched | PENDING_CANCEL | NEW, PARTIALLY_FILLED, FILLED, CANCELED | We received order cancel request and relayed it succesfully to the exchange.  | PARTIALLY_FILLED | FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it&#39;s partially filled | FILLED | | Order is no longer active in the order book as was completely filled  | CANCELED | | Order is no longer active in the order book as was canceled | REJECTED | | Order was rejected by OMS or exchange. ##### Status transitions  | Source Status | Destination status | Description | --- | --- | --- | | | RECEIVED | OMS received new order from you | | NEW | OMS received unseen new order from the exchange (order was relayed to the exchnage outside the OMS) | | PARTIALLY_FILLED | OMS received unseen partially filled order from the exchange (order was relayed to the exchnage outside the OMS) | RECEIVED | REJECTED | OMS rejected your order | RECEIVED | ROUTING | We started relaying order to the exchange | ROUTING | ROUTED | Order was relayed to the exchange and we are waiting to be active in the order book | ROUTED | REJECTED | Exchange rejected your order | ROUTED | NEW | Exchange accepted your passive order into order book | ROUTED | PARTIALLY_FILLED | Exchange actively filled part of your order and the remaining was accepted into order book | ROUTED | FILLED | Exchange actively filled your order in whole. | ROUTED | CANCELED | Exchange canceled your order before accepting it to the order book. | NEW | PARTIALLY_FILLED | Part of your order was filled. | NEW | FILLED | Whole order was filled. | NEW | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange. | NEW | CANCELED | Your order was canceled. | PARTIALLY_FILLED | FILLED | Remaining active part of the order was filled succesfully. | PARTIALLY_FILLED | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange. | PARTIALLY_FILLED | CANCELED | Your order was canceled. | PENDING_CANCEL | NEW | Exchange responded to the cancelation message that your order is fully active in the order book. | PENDING_CANCEL | PARTIALLY_FILLED | Your order was filled partially after we relayed cancelation message to the exchange. | PENDING_CANCEL | FILLED | Your order was completely filled before the cancel was executed by the exchange. | PENDING_CANCEL | CANCELED | Your order was canceled. 
 */

#ifndef _OrderStatus_H_
#define _OrderStatus_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Order statuses ##### Status description  | Name | Possible transitions to | Status description  | --- | --- | --- | | RECEIVED | REJECTED, ROUTING | We received an order and will send it to the exchange immedaitely | ROUTING | ROUTED | We are in the process of sending order to the exchange | ROUTED | REJECTED, NEW, PARTIALLY_FILLED, FILLED, CANCELED | Order was sent to the exchange from our side, but it's not yet active in order book | NEW | PARTIALLY_FILLED, FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it's untouched | PENDING_CANCEL | NEW, PARTIALLY_FILLED, FILLED, CANCELED | We received order cancel request and relayed it succesfully to the exchange.  | PARTIALLY_FILLED | FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it's partially filled | FILLED | | Order is no longer active in the order book as was completely filled  | CANCELED | | Order is no longer active in the order book as was canceled | REJECTED | | Order was rejected by OMS or exchange. ##### Status transitions  | Source Status | Destination status | Description | --- | --- | --- | | | RECEIVED | OMS received new order from you | | NEW | OMS received unseen new order from the exchange (order was relayed to the exchnage outside the OMS) | | PARTIALLY_FILLED | OMS received unseen partially filled order from the exchange (order was relayed to the exchnage outside the OMS) | RECEIVED | REJECTED | OMS rejected your order | RECEIVED | ROUTING | We started relaying order to the exchange | ROUTING | ROUTED | Order was relayed to the exchange and we are waiting to be active in the order book | ROUTED | REJECTED | Exchange rejected your order | ROUTED | NEW | Exchange accepted your passive order into order book | ROUTED | PARTIALLY_FILLED | Exchange actively filled part of your order and the remaining was accepted into order book | ROUTED | FILLED | Exchange actively filled your order in whole. | ROUTED | CANCELED | Exchange canceled your order before accepting it to the order book. | NEW | PARTIALLY_FILLED | Part of your order was filled. | NEW | FILLED | Whole order was filled. | NEW | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange. | NEW | CANCELED | Your order was canceled. | PARTIALLY_FILLED | FILLED | Remaining active part of the order was filled succesfully. | PARTIALLY_FILLED | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange. | PARTIALLY_FILLED | CANCELED | Your order was canceled. | PENDING_CANCEL | NEW | Exchange responded to the cancelation message that your order is fully active in the order book. | PENDING_CANCEL | PARTIALLY_FILLED | Your order was filled partially after we relayed cancelation message to the exchange. | PENDING_CANCEL | FILLED | Your order was completely filled before the cancel was executed by the exchange. | PENDING_CANCEL | CANCELED | Your order was canceled. 
 *
 *  \ingroup Models
 *
 */

class OrderStatus : public Object {
public:
	/*! \brief Constructor.
	 */
	OrderStatus();
	OrderStatus(char* str);

	/*! \brief Destructor.
	 */
	virtual ~OrderStatus();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _OrderStatus_H_ */
