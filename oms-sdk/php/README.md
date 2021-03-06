# OpenAPIClient-php

OMS Project

This PHP package is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: v1
- Build package: org.openapitools.codegen.languages.PhpClientCodegen
For more information, please visit [https://www.coinapi.io](https://www.coinapi.io)

## Requirements

PHP 5.5 and later

## Installation & Usage

### Composer

To install the bindings via [Composer](http://getcomposer.org/), add the following to `composer.json`:

```json
{
  "repositories": [
    {
      "type": "vcs",
      "url": "https://github.com/GIT_USER_ID/GIT_REPO_ID.git"
    }
  ],
  "require": {
    "GIT_USER_ID/GIT_REPO_ID": "*@dev"
  }
}
```

Then run `composer install`

### Manual Installation

Download the files and include `autoload.php`:

```php
    require_once('/path/to/OpenAPIClient-php/vendor/autoload.php');
```

## Tests

To run the unit tests:

```bash
composer install
./vendor/bin/phpunit
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');



$apiInstance = new OpenAPI\Client\Api\BalancesApi(
    // If you want use custom http client, pass your client which implements `GuzzleHttp\ClientInterface`.
    // This is optional, `GuzzleHttp\Client` will be used as default.
    new GuzzleHttp\Client()
);
$exchange_id = KRAKEN; // string | Exchange name

try {
    $result = $apiInstance->v1BalancesGet($exchange_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling BalancesApi->v1BalancesGet: ', $e->getMessage(), PHP_EOL;
}

?>
```

## Documentation for API Endpoints

All URIs are relative to *http://localhost:3001*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*BalancesApi* | [**v1BalancesGet**](docs/Api/BalancesApi.md#v1balancesget) | **GET** /v1/balances | Get balances
*OrdersApi* | [**v1OrdersCancelAllPost**](docs/Api/OrdersApi.md#v1orderscancelallpost) | **POST** /v1/orders/cancel/all | Cancel all order
*OrdersApi* | [**v1OrdersCancelPost**](docs/Api/OrdersApi.md#v1orderscancelpost) | **POST** /v1/orders/cancel | Cancel order
*OrdersApi* | [**v1OrdersGet**](docs/Api/OrdersApi.md#v1ordersget) | **GET** /v1/orders | Get orders
*OrdersApi* | [**v1OrdersPost**](docs/Api/OrdersApi.md#v1orderspost) | **POST** /v1/orders | Create new order
*PositionsApi* | [**v1PositionsGet**](docs/Api/PositionsApi.md#v1positionsget) | **GET** /v1/positions | Get positions


## Documentation For Models

 - [Balance](docs/Model/Balance.md)
 - [BalanceData](docs/Model/BalanceData.md)
 - [CancelAllOrder](docs/Model/CancelAllOrder.md)
 - [CancelOrder](docs/Model/CancelOrder.md)
 - [CreateOrder400](docs/Model/CreateOrder400.md)
 - [Messages](docs/Model/Messages.md)
 - [MessagesInfo](docs/Model/MessagesInfo.md)
 - [MessagesOk](docs/Model/MessagesOk.md)
 - [NewOrder](docs/Model/NewOrder.md)
 - [Order](docs/Model/Order.md)
 - [OrderData](docs/Model/OrderData.md)
 - [OrderLive](docs/Model/OrderLive.md)
 - [OrderStatus](docs/Model/OrderStatus.md)
 - [Position](docs/Model/Position.md)
 - [PositionData](docs/Model/PositionData.md)
 - [TimeInForce](docs/Model/TimeInForce.md)


## Documentation For Authorization

All endpoints do not require authorization.

## Author



