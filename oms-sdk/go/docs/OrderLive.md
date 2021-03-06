# OrderLive

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Type** | **string** | Result type name | [optional] 
**ExchangeId** | **string** | Exchange name | [optional] 
**Id** | **string** | Client unique identifier for the trade. | [optional] 
**ClientOrderIdFormatExchange** | **string** | Hash client id | [optional] 
**ExchangeOrderId** | **string** | Exchange order id | [optional] 
**AmountOpen** | **float32** | Amount open | [optional] 
**AmountFilled** | **float32** | Amount filled | [optional] 
**Status** | [**OrderStatus**](orderStatus.md) |  | [optional] 
**TimeOrder** | [**[][]string**](array.md) | History of order status changes | [optional] 
**ErrorMessage** | **string** | Error message | [optional] 
**ClientOrderId** | **string** | Client unique identifier for the trade. | [optional] 
**SymbolExchange** | **string** | The symbol of the order. | [optional] 
**SymbolCoinapi** | **string** | The CoinAPI symbol of the order. | [optional] 
**AmountOrder** | **float32** | Quoted decimal amount to purchase. | [optional] 
**Price** | **float32** | Quoted decimal amount to spend per unit. | [optional] 
**Side** | **string** | Buy or Sell | [optional] 
**OrderType** | **string** | The order type. | [optional] 
**TimeInForce** | [**TimeInForce**](timeInForce.md) |  | [optional] 
**ExpireTime** | **string** | Required for orders with time_in_force &#x3D; GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS | [optional] 
**ExecInst** | **[]string** | TODO: description exec inst  | Parameter | Description | |-----------|--------| | &#x60;MAKER_OR_CANCEL&#x60; | Rests on the continuous order book at a specified price. If any quantity can be filled immediately, the entire order is canceled. | ##### Exec inst options  | Exchange | MAKER_OR_CANCEL | | --- | --- | | BINANCE | X | | BITFINEX | X | | BITMEX | X | | BLOCKCHAINEXCHANGE | X | | BITSTAMP |  | | COINBASE | X | | GEMINI | X | | KRAKEN | X | | POLONIEX | X | | HITBTC |  | | KRAKENFTS | X |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


