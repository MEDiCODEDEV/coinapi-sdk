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

import { RequestFile } from '../api';

export class PositionData {
    /**
    * Unique position ID
    */
    'id'?: string;
    /**
    * The contract for this position.
    */
    'symbolExchange'?: string;
    /**
    * The coinapi contract for this position.
    */
    'symbolCoinapi'?: string;
    'avgEntryPrice'?: number;
    /**
    * The current position amount in contracts.
    */
    'quantity'?: number;
    'isBuy'?: boolean;
    /**
    * Unrealised PNL is all the unrealised profit or loss coming from your portfolio\'s open positions.
    */
    'unrealisedPnL'?: number;
    /**
    * 1 / initMarginReq.
    */
    'leverage'?: number;
    /**
    * True/false depending on whether you set cross margin on this position.
    */
    'crossMargin'?: boolean;
    /**
    * Once markPrice reaches this price, this position will be liquidated.
    */
    'liquidationPrice'?: number;
    'rawData'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "symbolExchange",
            "baseName": "symbol_exchange",
            "type": "string"
        },
        {
            "name": "symbolCoinapi",
            "baseName": "symbol_coinapi",
            "type": "string"
        },
        {
            "name": "avgEntryPrice",
            "baseName": "avg_entry_price",
            "type": "number"
        },
        {
            "name": "quantity",
            "baseName": "quantity",
            "type": "number"
        },
        {
            "name": "isBuy",
            "baseName": "is_buy",
            "type": "boolean"
        },
        {
            "name": "unrealisedPnL",
            "baseName": "unrealised_pn_l",
            "type": "number"
        },
        {
            "name": "leverage",
            "baseName": "leverage",
            "type": "number"
        },
        {
            "name": "crossMargin",
            "baseName": "cross_margin",
            "type": "boolean"
        },
        {
            "name": "liquidationPrice",
            "baseName": "liquidation_price",
            "type": "number"
        },
        {
            "name": "rawData",
            "baseName": "raw_data",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return PositionData.attributeTypeMap;
    }
}

