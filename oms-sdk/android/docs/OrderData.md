

# OrderData

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**exchangeId** | **String** | Exchange name |  [optional]
**id** | **String** | Client unique identifier for the trade. |  [optional]
**clientOrderIdFormatExchange** | **String** | Hash client id |  [optional]
**exchangeOrderId** | **String** | Exchange order id |  [optional]
**amountOpen** | [**BigDecimal**](BigDecimal.md) | Amount open |  [optional]
**amountFilled** | [**BigDecimal**](BigDecimal.md) | Amount filled |  [optional]
**status** | [**OrderStatus**](OrderStatus.md) |  |  [optional]
**timeOrder** | [**List&lt;List&lt;String&gt;&gt;**](List.md) | History of order status changes |  [optional]
**errorMessage** | **String** | Error message |  [optional]
**clientOrderId** | **String** | Client unique identifier for the trade. |  [optional]
**symbolExchange** | **String** | The symbol of the order. |  [optional]
**symbolCoinapi** | **String** | The CoinAPI symbol of the order. |  [optional]
**amountOrder** | [**BigDecimal**](BigDecimal.md) | Quoted decimal amount to purchase. |  [optional]
**price** | [**BigDecimal**](BigDecimal.md) | Quoted decimal amount to spend per unit. |  [optional]
**side** | [**SideEnum**](#SideEnum) | Buy or Sell |  [optional]
**orderType** | [**OrderTypeEnum**](#OrderTypeEnum) | The order type. |  [optional]
**timeInForce** | [**TimeInForce**](TimeInForce.md) |  |  [optional]
**expireTime** | [**Date**](Date.md) | Required for orders with time_in_force &#x3D; GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS |  [optional]
**execInst** | [**List&lt;ExecInstEnum&gt;**](#List&lt;ExecInstEnum&gt;) | TODO: description exec inst  | Parameter | Description | |-----------|--------| | &#x60;MAKER_OR_CANCEL&#x60; | Rests on the continuous order book at a specified price. If any quantity can be filled immediately, the entire order is canceled. | ##### Exec inst options  | Exchange | MAKER_OR_CANCEL | | --- | --- | | BINANCE | X | | BITFINEX | X | | BITMEX | X | | BLOCKCHAINEXCHANGE | X | | BITSTAMP |  | | COINBASE | X | | GEMINI | X | | KRAKEN | X | | POLONIEX | X | | HITBTC |  | | KRAKENFTS | X |  |  [optional]


## Enum: SideEnum

Name | Value
---- | -----


## Enum: OrderTypeEnum

Name | Value
---- | -----


## Enum: List&lt;ExecInstEnum&gt;

Name | Value
---- | -----
MAKER_OR_CANCEL | &quot;MAKER_OR_CANCEL&quot;




