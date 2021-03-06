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
 *
 */


import ApiClient from "../ApiClient";
import CancelAllOrder from '../model/CancelAllOrder';
import CancelOrder from '../model/CancelOrder';
import CreateOrder400 from '../model/CreateOrder400';
import Messages from '../model/Messages';
import MessagesOk from '../model/MessagesOk';
import NewOrder from '../model/NewOrder';
import Order from '../model/Order';
import OrderLive from '../model/OrderLive';

/**
* Orders service.
* @module api/OrdersApi
* @version v1
*/
export default class OrdersApi {

    /**
    * Constructs a new OrdersApi. 
    * @alias module:api/OrdersApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the v1OrdersCancelAllPost operation.
     * @callback module:api/OrdersApi~v1OrdersCancelAllPostCallback
     * @param {String} error Error message, if any.
     * @param {module:model/MessagesOk} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Cancel all order
     * Cancel all existing order.
     * @param {module:model/CancelAllOrder} cancelAllOrder 
     * @param {module:api/OrdersApi~v1OrdersCancelAllPostCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/MessagesOk}
     */
    v1OrdersCancelAllPost(cancelAllOrder, callback) {
      let postBody = cancelAllOrder;
      // verify the required parameter 'cancelAllOrder' is set
      if (cancelAllOrder === undefined || cancelAllOrder === null) {
        throw new Error("Missing the required parameter 'cancelAllOrder' when calling v1OrdersCancelAllPost");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = MessagesOk;
      return this.apiClient.callApi(
        '/v1/orders/cancel/all', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the v1OrdersCancelPost operation.
     * @callback module:api/OrdersApi~v1OrdersCancelPostCallback
     * @param {String} error Error message, if any.
     * @param {module:model/OrderLive} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Cancel order
     * Cancel an existing order, can be used to cancel margin, exchange, and derivative orders. You can cancel the order by the internal order ID or exchange order ID.
     * @param {module:model/CancelOrder} cancelOrder 
     * @param {module:api/OrdersApi~v1OrdersCancelPostCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/OrderLive}
     */
    v1OrdersCancelPost(cancelOrder, callback) {
      let postBody = cancelOrder;
      // verify the required parameter 'cancelOrder' is set
      if (cancelOrder === undefined || cancelOrder === null) {
        throw new Error("Missing the required parameter 'cancelOrder' when calling v1OrdersCancelPost");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = ['application/json', 'appliction/json'];
      let returnType = OrderLive;
      return this.apiClient.callApi(
        '/v1/orders/cancel', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the v1OrdersGet operation.
     * @callback module:api/OrdersApi~v1OrdersGetCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/Order>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get orders
     * List your current open orders.
     * @param {Object} opts Optional parameters
     * @param {String} opts.exchangeId Exchange name
     * @param {module:api/OrdersApi~v1OrdersGetCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/Order>}
     */
    v1OrdersGet(opts, callback) {
      opts = opts || {};
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
        'exchange_id': opts['exchangeId']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = [Order];
      return this.apiClient.callApi(
        '/v1/orders', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the v1OrdersPost operation.
     * @callback module:api/OrdersApi~v1OrdersPostCallback
     * @param {String} error Error message, if any.
     * @param {module:model/OrderLive} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Create new order
     * You can place two types of orders: limit and market. Orders can only be placed if your account has sufficient funds.
     * @param {module:model/NewOrder} newOrder 
     * @param {module:api/OrdersApi~v1OrdersPostCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/OrderLive}
     */
    v1OrdersPost(newOrder, callback) {
      let postBody = newOrder;
      // verify the required parameter 'newOrder' is set
      if (newOrder === undefined || newOrder === null) {
        throw new Error("Missing the required parameter 'newOrder' when calling v1OrdersPost");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = [];
      let contentTypes = ['application/json'];
      let accepts = ['application/json', 'appliction/json'];
      let returnType = OrderLive;
      return this.apiClient.callApi(
        '/v1/orders', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
