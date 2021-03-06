/**
 * OMS - REST API
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.model.CancelAllOrder
import org.openapitools.client.model.CancelOrder
import org.openapitools.client.model.CreateOrder400
import org.openapitools.client.model.Messages
import org.openapitools.client.model.MessagesOk
import org.openapitools.client.model.NewOrder
import org.openapitools.client.model.Order
import org.openapitools.client.model.OrderLive
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object OrdersApi {

  def apply(baseUrl: String = "http://localhost:3001") = new OrdersApi(baseUrl)
}

class OrdersApi(baseUrl: String) {
  
  /**
   * Cancel all existing order.
   * 
   * Expected answers:
   *   code 200 : MessagesOk (Result)
   * 
   * @param cancelAllOrder 
   */
  def v1OrdersCancelAllPost(cancelAllOrder: CancelAllOrder): ApiRequest[MessagesOk] =
    ApiRequest[MessagesOk](ApiMethods.POST, baseUrl, "/v1/orders/cancel/all", "application/json")
      .withBody(cancelAllOrder)
      .withSuccessResponse[MessagesOk](200)
      

  /**
   * Cancel an existing order, can be used to cancel margin, exchange, and derivative orders. You can cancel the order by the internal order ID or exchange order ID.
   * 
   * Expected answers:
   *   code 200 : OrderLive (Canceled order)
   *   code 400 : CreateOrder400 (Validation errors)
   *   code 490 : Messages (Exchange not registered)
   * 
   * @param cancelOrder 
   */
  def v1OrdersCancelPost(cancelOrder: CancelOrder): ApiRequest[OrderLive] =
    ApiRequest[OrderLive](ApiMethods.POST, baseUrl, "/v1/orders/cancel", "application/json")
      .withBody(cancelOrder)
      .withSuccessResponse[OrderLive](200)
      .withErrorResponse[CreateOrder400](400)
      .withErrorResponse[Messages](490)
      

  /**
   * List your current open orders.
   * 
   * Expected answers:
   *   code 200 : Seq[Order] (Ok)
   * 
   * @param exchangeId Exchange name
   */
  def v1OrdersGet(exchangeId: Option[String] = None): ApiRequest[Seq[Order]] =
    ApiRequest[Seq[Order]](ApiMethods.GET, baseUrl, "/v1/orders", "application/json")
      .withQueryParam("exchange_id", exchangeId)
      .withSuccessResponse[Seq[Order]](200)
      

  /**
   * You can place two types of orders: limit and market. Orders can only be placed if your account has sufficient funds.
   * 
   * Expected answers:
   *   code 200 : OrderLive (Created)
   *   code 400 : CreateOrder400 (Validation errors)
   *   code 490 : Messages (Exchange not registered)
   * 
   * @param newOrder 
   */
  def v1OrdersPost(newOrder: NewOrder): ApiRequest[OrderLive] =
    ApiRequest[OrderLive](ApiMethods.POST, baseUrl, "/v1/orders", "application/json")
      .withBody(newOrder)
      .withSuccessResponse[OrderLive](200)
      .withErrorResponse[CreateOrder400](400)
      .withErrorResponse[Messages](490)
      



}

