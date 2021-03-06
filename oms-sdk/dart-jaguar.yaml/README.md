# openapi
OMS Project

This Dart package is automatically generated by the [Open API Codegen](https://github.com/OpenAPITools/openapi-generator) project:

- API version: v1
- Build package: org.openapitools.codegen.languages.DartJaguarClientCodegen
For more information, please visit [https://www.coinapi.io](https://www.coinapi.io)

## Requirements

Dart 2 or later OR Flutter 0.7.0 or later.

Once your code is generated, you need to run the build_runner command to let Jaguar implement your API:

```sh
flutter packages pub run build_runner build
or
pub run build_runner build
```

## Installation & Usage

### Github
If this Dart package is published to Github, please include the following in pubspec.yaml
```
name: openapi
version: 1.0.0
description: OpenAPI API client
dependencies:
  openapi:
    git: https://github.com/GIT_USER_ID/GIT_REPO_ID.git
      version: 'any'
```

### Local
To use the package in your local drive, please include the following in pubspec.yaml
```
dependencies:
  openapi:
    path: /path/to/openapi
```

## Tests

TODO

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```dart
import 'package:openapi/api.dart';


final jaguarApiGen = Openapi();
var api_instance = jaguarApiGen.getBalancesApi();
var exchangeId = KRAKEN; // String | Exchange name

try {
    var result = api_instance.v1BalancesGet(exchangeId);
    print(result);
} catch (e) {
    print("Exception when calling BalancesApi->v1BalancesGet: $e\n");
}

```

## Documentation for API Endpoints

All URIs are relative to *http://localhost:3001*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*BalancesApi* | [**v1BalancesGet**](doc//BalancesApi.md#v1balancesget) | **Get** /v1/balances | Get balances
*OrdersApi* | [**v1OrdersCancelAllPost**](doc//OrdersApi.md#v1orderscancelallpost) | **Post** /v1/orders/cancel/all | Cancel all order
*OrdersApi* | [**v1OrdersCancelPost**](doc//OrdersApi.md#v1orderscancelpost) | **Post** /v1/orders/cancel | Cancel order
*OrdersApi* | [**v1OrdersGet**](doc//OrdersApi.md#v1ordersget) | **Get** /v1/orders | Get orders
*OrdersApi* | [**v1OrdersPost**](doc//OrdersApi.md#v1orderspost) | **Post** /v1/orders | Create new order
*PositionsApi* | [**v1PositionsGet**](doc//PositionsApi.md#v1positionsget) | **Get** /v1/positions | Get positions


## Documentation For Models

 - [Balance](doc//Balance.md)
 - [BalanceData](doc//BalanceData.md)
 - [CancelAllOrder](doc//CancelAllOrder.md)
 - [CancelOrder](doc//CancelOrder.md)
 - [CreateOrder400](doc//CreateOrder400.md)
 - [Messages](doc//Messages.md)
 - [MessagesInfo](doc//MessagesInfo.md)
 - [MessagesOk](doc//MessagesOk.md)
 - [NewOrder](doc//NewOrder.md)
 - [Order](doc//Order.md)
 - [OrderData](doc//OrderData.md)
 - [OrderLive](doc//OrderLive.md)
 - [OrderStatus](doc//OrderStatus.md)
 - [Position](doc//Position.md)
 - [PositionData](doc//PositionData.md)
 - [TimeInForce](doc//TimeInForce.md)


## Documentation For Authorization

 All endpoints do not require authorization.


## Author




