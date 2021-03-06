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
 * OASMessages
 */
public class OASMessages implements OAS.MappedProperties {
    /**
     * Type of message
     * @return r_type
     */
    public String r_type { get; set; }

    /**
     * Exchange name
     * @return exchangeId
     */
    public String exchangeId { get; set; }

    /**
     * Message
     * @return message
     */
    public String message { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'type' => 'r_type',
        'exchange_id' => 'exchangeId'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASMessages getExample() {
        OASMessages messages = new OASMessages();
          messages.r_type = 'message';
          messages.exchangeId = 'KRAKEN';
          messages.message = 'Ok';
        return messages;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASMessages) {           
            OASMessages messages = (OASMessages) obj;
            return this.r_type == messages.r_type
                && this.exchangeId == messages.exchangeId
                && this.message == messages.message;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (r_type == null ? 0 : System.hashCode(r_type));
        hashCode = (17 * hashCode) + (exchangeId == null ? 0 : System.hashCode(exchangeId));
        hashCode = (17 * hashCode) + (message == null ? 0 : System.hashCode(message));
        return hashCode;
    }
}

