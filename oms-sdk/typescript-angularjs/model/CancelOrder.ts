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

import * as models from './models';

export interface CancelOrder {
    /**
     * Exchange name
     */
    "exchange_id"?: string;
    /**
     * Order Id
     */
    "exchange_order_id"?: string;
    /**
     * Client order Id
     */
    "client_order_id"?: string;
}

