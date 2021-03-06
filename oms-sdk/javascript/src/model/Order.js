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

import ApiClient from '../ApiClient';
import OrderData from './OrderData';

/**
 * The Order model module.
 * @module model/Order
 * @version v1
 */
class Order {
    /**
     * Constructs a new <code>Order</code>.
     * @alias module:model/Order
     */
    constructor() { 
        
        Order.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>Order</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/Order} obj Optional instance to populate.
     * @return {module:model/Order} The populated <code>Order</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Order();

            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('exchange_name')) {
                obj['exchange_name'] = ApiClient.convertToType(data['exchange_name'], 'String');
            }
            if (data.hasOwnProperty('data')) {
                obj['data'] = ApiClient.convertToType(data['data'], [OrderData]);
            }
        }
        return obj;
    }


}

/**
 * null
 * @member {String} type
 */
Order.prototype['type'] = undefined;

/**
 * Exchange name
 * @member {String} exchange_name
 */
Order.prototype['exchange_name'] = undefined;

/**
 * Orders array
 * @member {Array.<module:model/OrderData>} data
 */
Order.prototype['data'] = undefined;






export default Order;

