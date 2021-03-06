/*
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


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.TimeInForce;
import org.threeten.bp.LocalDate;

/**
 * NewOrder
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-06-22T14:21:15.574Z[Etc/UTC]")
public class NewOrder {
  public static final String SERIALIZED_NAME_EXCHANGE_ID = "exchange_id";
  @SerializedName(SERIALIZED_NAME_EXCHANGE_ID)
  private String exchangeId;

  public static final String SERIALIZED_NAME_CLIENT_ORDER_ID = "client_order_id";
  @SerializedName(SERIALIZED_NAME_CLIENT_ORDER_ID)
  private String clientOrderId;

  public static final String SERIALIZED_NAME_SYMBOL_EXCHANGE = "symbol_exchange";
  @SerializedName(SERIALIZED_NAME_SYMBOL_EXCHANGE)
  private String symbolExchange;

  public static final String SERIALIZED_NAME_SYMBOL_COINAPI = "symbol_coinapi";
  @SerializedName(SERIALIZED_NAME_SYMBOL_COINAPI)
  private String symbolCoinapi;

  public static final String SERIALIZED_NAME_AMOUNT_ORDER = "amount_order";
  @SerializedName(SERIALIZED_NAME_AMOUNT_ORDER)
  private BigDecimal amountOrder;

  public static final String SERIALIZED_NAME_PRICE = "price";
  @SerializedName(SERIALIZED_NAME_PRICE)
  private BigDecimal price;

  /**
   * Buy or Sell
   */
  @JsonAdapter(SideEnum.Adapter.class)
  public enum SideEnum {
    BUY("BUY"),
    
    SELL("SELL");

    private String value;

    SideEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static SideEnum fromValue(String value) {
      for (SideEnum b : SideEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<SideEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final SideEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public SideEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return SideEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_SIDE = "side";
  @SerializedName(SERIALIZED_NAME_SIDE)
  private SideEnum side;

  /**
   * The order type.
   */
  @JsonAdapter(OrderTypeEnum.Adapter.class)
  public enum OrderTypeEnum {
    LIMIT("LIMIT");

    private String value;

    OrderTypeEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static OrderTypeEnum fromValue(String value) {
      for (OrderTypeEnum b : OrderTypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<OrderTypeEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final OrderTypeEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public OrderTypeEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return OrderTypeEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_ORDER_TYPE = "order_type";
  @SerializedName(SERIALIZED_NAME_ORDER_TYPE)
  private OrderTypeEnum orderType;

  public static final String SERIALIZED_NAME_TIME_IN_FORCE = "time_in_force";
  @SerializedName(SERIALIZED_NAME_TIME_IN_FORCE)
  private TimeInForce timeInForce;

  public static final String SERIALIZED_NAME_EXPIRE_TIME = "expire_time";
  @SerializedName(SERIALIZED_NAME_EXPIRE_TIME)
  private LocalDate expireTime = null;

  /**
   * Gets or Sets execInst
   */
  @JsonAdapter(ExecInstEnum.Adapter.class)
  public enum ExecInstEnum {
    MAKER_OR_CANCEL("MAKER_OR_CANCEL");

    private String value;

    ExecInstEnum(String value) {
      this.value = value;
    }

    public String getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static ExecInstEnum fromValue(String value) {
      for (ExecInstEnum b : ExecInstEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }

    public static class Adapter extends TypeAdapter<ExecInstEnum> {
      @Override
      public void write(final JsonWriter jsonWriter, final ExecInstEnum enumeration) throws IOException {
        jsonWriter.value(enumeration.getValue());
      }

      @Override
      public ExecInstEnum read(final JsonReader jsonReader) throws IOException {
        String value =  jsonReader.nextString();
        return ExecInstEnum.fromValue(value);
      }
    }
  }

  public static final String SERIALIZED_NAME_EXEC_INST = "exec_inst";
  @SerializedName(SERIALIZED_NAME_EXEC_INST)
  private List<ExecInstEnum> execInst = null;


  public NewOrder exchangeId(String exchangeId) {
    
    this.exchangeId = exchangeId;
    return this;
  }

   /**
   * Exchange name
   * @return exchangeId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "KRAKEN", value = "Exchange name")

  public String getExchangeId() {
    return exchangeId;
  }


  public void setExchangeId(String exchangeId) {
    this.exchangeId = exchangeId;
  }


  public NewOrder clientOrderId(String clientOrderId) {
    
    this.clientOrderId = clientOrderId;
    return this;
  }

   /**
   * Client unique identifier for the trade.
   * @return clientOrderId
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "KPP-222389382-AQ", value = "Client unique identifier for the trade.")

  public String getClientOrderId() {
    return clientOrderId;
  }


  public void setClientOrderId(String clientOrderId) {
    this.clientOrderId = clientOrderId;
  }


  public NewOrder symbolExchange(String symbolExchange) {
    
    this.symbolExchange = symbolExchange;
    return this;
  }

   /**
   * The symbol of the order.
   * @return symbolExchange
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "BTCUSD", value = "The symbol of the order.")

  public String getSymbolExchange() {
    return symbolExchange;
  }


  public void setSymbolExchange(String symbolExchange) {
    this.symbolExchange = symbolExchange;
  }


  public NewOrder symbolCoinapi(String symbolCoinapi) {
    
    this.symbolCoinapi = symbolCoinapi;
    return this;
  }

   /**
   * The CoinAPI symbol of the order.
   * @return symbolCoinapi
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "KRAKEN_SPOT_BTC_USD", value = "The CoinAPI symbol of the order.")

  public String getSymbolCoinapi() {
    return symbolCoinapi;
  }


  public void setSymbolCoinapi(String symbolCoinapi) {
    this.symbolCoinapi = symbolCoinapi;
  }


  public NewOrder amountOrder(BigDecimal amountOrder) {
    
    this.amountOrder = amountOrder;
    return this;
  }

   /**
   * Quoted decimal amount to purchase.
   * @return amountOrder
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.045", value = "Quoted decimal amount to purchase.")

  public BigDecimal getAmountOrder() {
    return amountOrder;
  }


  public void setAmountOrder(BigDecimal amountOrder) {
    this.amountOrder = amountOrder;
  }


  public NewOrder price(BigDecimal price) {
    
    this.price = price;
    return this;
  }

   /**
   * Quoted decimal amount to spend per unit.
   * @return price
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "0.0783", value = "Quoted decimal amount to spend per unit.")

  public BigDecimal getPrice() {
    return price;
  }


  public void setPrice(BigDecimal price) {
    this.price = price;
  }


  public NewOrder side(SideEnum side) {
    
    this.side = side;
    return this;
  }

   /**
   * Buy or Sell
   * @return side
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "BUY", value = "Buy or Sell")

  public SideEnum getSide() {
    return side;
  }


  public void setSide(SideEnum side) {
    this.side = side;
  }


  public NewOrder orderType(OrderTypeEnum orderType) {
    
    this.orderType = orderType;
    return this;
  }

   /**
   * The order type.
   * @return orderType
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(example = "LIMIT", value = "The order type.")

  public OrderTypeEnum getOrderType() {
    return orderType;
  }


  public void setOrderType(OrderTypeEnum orderType) {
    this.orderType = orderType;
  }


  public NewOrder timeInForce(TimeInForce timeInForce) {
    
    this.timeInForce = timeInForce;
    return this;
  }

   /**
   * Get timeInForce
   * @return timeInForce
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public TimeInForce getTimeInForce() {
    return timeInForce;
  }


  public void setTimeInForce(TimeInForce timeInForce) {
    this.timeInForce = timeInForce;
  }


  public NewOrder expireTime(LocalDate expireTime) {
    
    this.expireTime = expireTime;
    return this;
  }

   /**
   * Required for orders with time_in_force &#x3D; GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS
   * @return expireTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "Required for orders with time_in_force = GOOD_TILL_TIME_EXCHANGE, GOOD_TILL_TIME_OMS")

  public LocalDate getExpireTime() {
    return expireTime;
  }


  public void setExpireTime(LocalDate expireTime) {
    this.expireTime = expireTime;
  }


  public NewOrder execInst(List<ExecInstEnum> execInst) {
    
    this.execInst = execInst;
    return this;
  }

  public NewOrder addExecInstItem(ExecInstEnum execInstItem) {
    if (this.execInst == null) {
      this.execInst = new ArrayList<ExecInstEnum>();
    }
    this.execInst.add(execInstItem);
    return this;
  }

   /**
   * TODO: description exec inst  | Parameter | Description | |-----------|--------| | &#x60;MAKER_OR_CANCEL&#x60; | Rests on the continuous order book at a specified price. If any quantity can be filled immediately, the entire order is canceled. | ##### Exec inst options  | Exchange | MAKER_OR_CANCEL | | --- | --- | | BINANCE | X | | BITFINEX | X | | BITMEX | X | | BLOCKCHAINEXCHANGE | X | | BITSTAMP |  | | COINBASE | X | | GEMINI | X | | KRAKEN | X | | POLONIEX | X | | HITBTC |  | | KRAKENFTS | X | 
   * @return execInst
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "TODO: description exec inst  | Parameter | Description | |-----------|--------| | `MAKER_OR_CANCEL` | Rests on the continuous order book at a specified price. If any quantity can be filled immediately, the entire order is canceled. | ##### Exec inst options  | Exchange | MAKER_OR_CANCEL | | --- | --- | | BINANCE | X | | BITFINEX | X | | BITMEX | X | | BLOCKCHAINEXCHANGE | X | | BITSTAMP |  | | COINBASE | X | | GEMINI | X | | KRAKEN | X | | POLONIEX | X | | HITBTC |  | | KRAKENFTS | X | ")

  public List<ExecInstEnum> getExecInst() {
    return execInst;
  }


  public void setExecInst(List<ExecInstEnum> execInst) {
    this.execInst = execInst;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    NewOrder newOrder = (NewOrder) o;
    return Objects.equals(this.exchangeId, newOrder.exchangeId) &&
        Objects.equals(this.clientOrderId, newOrder.clientOrderId) &&
        Objects.equals(this.symbolExchange, newOrder.symbolExchange) &&
        Objects.equals(this.symbolCoinapi, newOrder.symbolCoinapi) &&
        Objects.equals(this.amountOrder, newOrder.amountOrder) &&
        Objects.equals(this.price, newOrder.price) &&
        Objects.equals(this.side, newOrder.side) &&
        Objects.equals(this.orderType, newOrder.orderType) &&
        Objects.equals(this.timeInForce, newOrder.timeInForce) &&
        Objects.equals(this.expireTime, newOrder.expireTime) &&
        Objects.equals(this.execInst, newOrder.execInst);
  }

  @Override
  public int hashCode() {
    return Objects.hash(exchangeId, clientOrderId, symbolExchange, symbolCoinapi, amountOrder, price, side, orderType, timeInForce, expireTime, execInst);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class NewOrder {\n");
    sb.append("    exchangeId: ").append(toIndentedString(exchangeId)).append("\n");
    sb.append("    clientOrderId: ").append(toIndentedString(clientOrderId)).append("\n");
    sb.append("    symbolExchange: ").append(toIndentedString(symbolExchange)).append("\n");
    sb.append("    symbolCoinapi: ").append(toIndentedString(symbolCoinapi)).append("\n");
    sb.append("    amountOrder: ").append(toIndentedString(amountOrder)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    side: ").append(toIndentedString(side)).append("\n");
    sb.append("    orderType: ").append(toIndentedString(orderType)).append("\n");
    sb.append("    timeInForce: ").append(toIndentedString(timeInForce)).append("\n");
    sb.append("    expireTime: ").append(toIndentedString(expireTime)).append("\n");
    sb.append("    execInst: ").append(toIndentedString(execInst)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

