/*
 * OMS - REST API
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASPositionData
 */
public class OASPositionData implements OAS.MappedProperties {
    /**
     * Unique position ID
     * @return id
     */
    public String id { get; set; }

    /**
     * The contract for this position.
     * @return symbolExchange
     */
    public String symbolExchange { get; set; }

    /**
     * The coinapi contract for this position.
     * @return symbolCoinapi
     */
    public String symbolCoinapi { get; set; }

    /**
     * Get avgEntryPrice
     * @return avgEntryPrice
     */
    public Double avgEntryPrice { get; set; }

    /**
     * The current position amount in contracts.
     * @return quantity
     */
    public Double quantity { get; set; }

    /**
     * Get isBuy
     * @return isBuy
     */
    public Boolean isBuy { get; set; }

    /**
     * Unrealised PNL is all the unrealised profit or loss coming from your portfolio\'s open positions.
     * @return unrealisedPnL
     */
    public Double unrealisedPnL { get; set; }

    /**
     * 1 / initMarginReq.
     * @return leverage
     */
    public Double leverage { get; set; }

    /**
     * True/false depending on whether you set cross margin on this position.
     * @return crossMargin
     */
    public Boolean crossMargin { get; set; }

    /**
     * Once markPrice reaches this price, this position will be liquidated.
     * @return liquidationPrice
     */
    public Double liquidationPrice { get; set; }

    /**
     * Get rawData
     * @return rawData
     */
    public String rawData { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'symbol_exchange' => 'symbolExchange',
        'symbol_coinapi' => 'symbolCoinapi',
        'avg_entry_price' => 'avgEntryPrice',
        'is_buy' => 'isBuy',
        'unrealised_pn_l' => 'unrealisedPnL',
        'cross_margin' => 'crossMargin',
        'liquidation_price' => 'liquidationPrice',
        'raw_data' => 'rawData'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASPositionData getExample() {
        OASPositionData positionData = new OASPositionData();
          positionData.id = '2873jkjhgdsd78ii';
          positionData.symbolExchange = 'BTC';
          positionData.symbolCoinapi = 'BTC';
          positionData.avgEntryPrice = 0.00134444;
          positionData.quantity = 0.00134444;
          positionData.isBuy = true;
          positionData.unrealisedPnL = 0.0;
          positionData.leverage = 0.0;
          positionData.crossMargin = true;
          positionData.liquidationPrice = 0.072323;
          positionData.rawData = 'xyz';
        return positionData;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASPositionData) {           
            OASPositionData positionData = (OASPositionData) obj;
            return this.id == positionData.id
                && this.symbolExchange == positionData.symbolExchange
                && this.symbolCoinapi == positionData.symbolCoinapi
                && this.avgEntryPrice == positionData.avgEntryPrice
                && this.quantity == positionData.quantity
                && this.isBuy == positionData.isBuy
                && this.unrealisedPnL == positionData.unrealisedPnL
                && this.leverage == positionData.leverage
                && this.crossMargin == positionData.crossMargin
                && this.liquidationPrice == positionData.liquidationPrice
                && this.rawData == positionData.rawData;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (symbolExchange == null ? 0 : System.hashCode(symbolExchange));
        hashCode = (17 * hashCode) + (symbolCoinapi == null ? 0 : System.hashCode(symbolCoinapi));
        hashCode = (17 * hashCode) + (avgEntryPrice == null ? 0 : System.hashCode(avgEntryPrice));
        hashCode = (17 * hashCode) + (quantity == null ? 0 : System.hashCode(quantity));
        hashCode = (17 * hashCode) + (isBuy == null ? 0 : System.hashCode(isBuy));
        hashCode = (17 * hashCode) + (unrealisedPnL == null ? 0 : System.hashCode(unrealisedPnL));
        hashCode = (17 * hashCode) + (leverage == null ? 0 : System.hashCode(leverage));
        hashCode = (17 * hashCode) + (crossMargin == null ? 0 : System.hashCode(crossMargin));
        hashCode = (17 * hashCode) + (liquidationPrice == null ? 0 : System.hashCode(liquidationPrice));
        hashCode = (17 * hashCode) + (rawData == null ? 0 : System.hashCode(rawData));
        return hashCode;
    }
}

