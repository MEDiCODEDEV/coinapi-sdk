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

/**
 * The CreateOrder400 model module.
 * @module model/CreateOrder400
 * @version v1
 */
class CreateOrder400 {
    /**
     * Constructs a new <code>CreateOrder400</code>.
     * @alias module:model/CreateOrder400
     */
    constructor() { 
        
        CreateOrder400.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>CreateOrder400</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/CreateOrder400} obj Optional instance to populate.
     * @return {module:model/CreateOrder400} The populated <code>CreateOrder400</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new CreateOrder400();

            if (data.hasOwnProperty('type')) {
                obj['type'] = ApiClient.convertToType(data['type'], 'String');
            }
            if (data.hasOwnProperty('title')) {
                obj['title'] = ApiClient.convertToType(data['title'], 'String');
            }
            if (data.hasOwnProperty('status')) {
                obj['status'] = ApiClient.convertToType(data['status'], 'Number');
            }
            if (data.hasOwnProperty('traceId')) {
                obj['traceId'] = ApiClient.convertToType(data['traceId'], 'String');
            }
            if (data.hasOwnProperty('errors')) {
                obj['errors'] = ApiClient.convertToType(data['errors'], 'String');
            }
        }
        return obj;
    }


}

/**
 * @member {String} type
 */
CreateOrder400.prototype['type'] = undefined;

/**
 * @member {String} title
 */
CreateOrder400.prototype['title'] = undefined;

/**
 * @member {Number} status
 */
CreateOrder400.prototype['status'] = undefined;

/**
 * @member {String} traceId
 */
CreateOrder400.prototype['traceId'] = undefined;

/**
 * @member {String} errors
 */
CreateOrder400.prototype['errors'] = undefined;






export default CreateOrder400;

