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
package org.openapitools.client.models


import com.squareup.moshi.Json
/**
 * 
 * @param id symbol_exchange
 * @param symbolExchange Currency code.
 * @param symbolCoinapi CoinAPI currency code.
 * @param balance The current balance.
 * @param available The amount that is available to trade.
 * @param locked Blocked funds.
 * @param updateOrigin Source of last modification. 
 */

data class BalanceData (
    /* symbol_exchange */
    @Json(name = "id")
    val id: kotlin.String? = null,
    /* Currency code. */
    @Json(name = "symbol_exchange")
    val symbolExchange: kotlin.String? = null,
    /* CoinAPI currency code. */
    @Json(name = "symbol_coinapi")
    val symbolCoinapi: kotlin.String? = null,
    /* The current balance. */
    @Json(name = "balance")
    val balance: kotlin.Float? = null,
    /* The amount that is available to trade. */
    @Json(name = "available")
    val available: kotlin.Float? = null,
    /* Blocked funds. */
    @Json(name = "locked")
    val locked: kotlin.Float? = null,
    /* Source of last modification.  */
    @Json(name = "update_origin")
    val updateOrigin: BalanceData.UpdateOrigin? = null
) {

    /**
    * Source of last modification. 
    * Values: iNITIALIZATION,bALANCEMANAGER,eXCHANGE
    */
    
    enum class UpdateOrigin(val value: kotlin.String){
        @Json(name = "INITIALIZATION") iNITIALIZATION("INITIALIZATION"),
        @Json(name = "BALANCE_MANAGER") bALANCEMANAGER("BALANCE_MANAGER"),
        @Json(name = "EXCHANGE") eXCHANGE("EXCHANGE");
    }
}

