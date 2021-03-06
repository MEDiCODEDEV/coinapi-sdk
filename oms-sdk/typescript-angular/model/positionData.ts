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


export interface PositionData { 
    /**
     * Unique position ID
     */
    id?: string;
    /**
     * The contract for this position.
     */
    symbol_exchange?: string;
    /**
     * The coinapi contract for this position.
     */
    symbol_coinapi?: string;
    avg_entry_price?: number;
    /**
     * The current position amount in contracts.
     */
    quantity?: number;
    is_buy?: boolean;
    /**
     * Unrealised PNL is all the unrealised profit or loss coming from your portfolio\'s open positions.
     */
    unrealised_pn_l?: number;
    /**
     * 1 / initMarginReq.
     */
    leverage?: number;
    /**
     * True/false depending on whether you set cross margin on this position.
     */
    cross_margin?: boolean;
    /**
     * Once markPrice reaches this price, this position will be liquidated.
     */
    liquidation_price?: number;
    raw_data?: string;
}

