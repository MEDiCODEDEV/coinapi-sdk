/*
 * OMS - REST API
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * Order statuses\n##### Status description\n\n| Name | Possible transitions to | Status description \n| --- | --- | --- |\n| RECEIVED | REJECTED, ROUTING | We received an order and will send it to the exchange immedaitely\n| ROUTING | ROUTED | We are in the process of sending order to the exchange\n| ROUTED | REJECTED, NEW, PARTIALLY_FILLED, FILLED, CANCELED | Order was sent to the exchange from our side, but it\'s not yet active in order book\n| NEW | PARTIALLY_FILLED, FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it\'s untouched\n| PENDING_CANCEL | NEW, PARTIALLY_FILLED, FILLED, CANCELED | We received order cancel request and relayed it succesfully to the exchange. \n| PARTIALLY_FILLED | FILLED, PENDING_CANCEL, CANCELED | Order is active in the order book and it\'s partially filled\n| FILLED | | Order is no longer active in the order book as was completely filled \n| CANCELED | | Order is no longer active in the order book as was canceled\n| REJECTED | | Order was rejected by OMS or exchange.\n##### Status transitions\n\n| Source Status | Destination status | Description\n| --- | --- | --- |\n| | RECEIVED | OMS received new order from you\n| | NEW | OMS received unseen new order from the exchange (order was relayed to the exchnage outside the OMS)\n| | PARTIALLY_FILLED | OMS received unseen partially filled order from the exchange (order was relayed to the exchnage outside the OMS)\n| RECEIVED | REJECTED | OMS rejected your order\n| RECEIVED | ROUTING | We started relaying order to the exchange\n| ROUTING | ROUTED | Order was relayed to the exchange and we are waiting to be active in the order book\n| ROUTED | REJECTED | Exchange rejected your order\n| ROUTED | NEW | Exchange accepted your passive order into order book\n| ROUTED | PARTIALLY_FILLED | Exchange actively filled part of your order and the remaining was accepted into order book\n| ROUTED | FILLED | Exchange actively filled your order in whole.\n| ROUTED | CANCELED | Exchange canceled your order before accepting it to the order book.\n| NEW | PARTIALLY_FILLED | Part of your order was filled.\n| NEW | FILLED | Whole order was filled.\n| NEW | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange.\n| NEW | CANCELED | Your order was canceled.\n| PARTIALLY_FILLED | FILLED | Remaining active part of the order was filled succesfully.\n| PARTIALLY_FILLED | PENDING_CANCEL | We received cancel request and successfully relayed it to the exchange.\n| PARTIALLY_FILLED | CANCELED | Your order was canceled.\n| PENDING_CANCEL | NEW | Exchange responded to the cancelation message that your order is fully active in the order book.\n| PENDING_CANCEL | PARTIALLY_FILLED | Your order was filled partially after we relayed cancelation message to the exchange.\n| PENDING_CANCEL | FILLED | Your order was completely filled before the cancel was executed by the exchange.\n| PENDING_CANCEL | CANCELED | Your order was canceled.\n
 */
public enum OASOrderStatus {
    RECEIVED,
    ROUTING,
    ROUTED,
    NEW,
    PENDING_CANCEL,
    PARTIALLY_FILLED,
    FILLED,
    CANCELED,
    REJECTED
}

