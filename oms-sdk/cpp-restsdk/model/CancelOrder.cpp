/**
 * OMS - REST API
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CancelOrder.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




CancelOrder::CancelOrder()
{
    m_Exchange_id = utility::conversions::to_string_t("");
    m_Exchange_idIsSet = false;
    m_Exchange_order_id = utility::conversions::to_string_t("");
    m_Exchange_order_idIsSet = false;
    m_Client_order_id = utility::conversions::to_string_t("");
    m_Client_order_idIsSet = false;
}

CancelOrder::~CancelOrder()
{
}

void CancelOrder::validate()
{
    // TODO: implement validation
}

web::json::value CancelOrder::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Exchange_idIsSet)
    {
        val[utility::conversions::to_string_t("exchange_id")] = ModelBase::toJson(m_Exchange_id);
    }
    if(m_Exchange_order_idIsSet)
    {
        val[utility::conversions::to_string_t("exchange_order_id")] = ModelBase::toJson(m_Exchange_order_id);
    }
    if(m_Client_order_idIsSet)
    {
        val[utility::conversions::to_string_t("client_order_id")] = ModelBase::toJson(m_Client_order_id);
    }

    return val;
}

bool CancelOrder::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exchange_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exchange_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_exchange_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_exchange_id);
            setExchangeId(refVal_exchange_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exchange_order_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exchange_order_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_exchange_order_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_exchange_order_id);
            setExchangeOrderId(refVal_exchange_order_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_order_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_order_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_client_order_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_client_order_id);
            setClientOrderId(refVal_client_order_id);
        }
    }
    return ok;
}

void CancelOrder::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Exchange_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exchange_id"), m_Exchange_id));
    }
    if(m_Exchange_order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exchange_order_id"), m_Exchange_order_id));
    }
    if(m_Client_order_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("client_order_id"), m_Client_order_id));
    }
}

bool CancelOrder::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("exchange_id")))
    {
        utility::string_t refVal_exchange_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exchange_id")), refVal_exchange_id );
        setExchangeId(refVal_exchange_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exchange_order_id")))
    {
        utility::string_t refVal_exchange_order_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exchange_order_id")), refVal_exchange_order_id );
        setExchangeOrderId(refVal_exchange_order_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("client_order_id")))
    {
        utility::string_t refVal_client_order_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("client_order_id")), refVal_client_order_id );
        setClientOrderId(refVal_client_order_id);
    }
    return ok;
}

utility::string_t CancelOrder::getExchangeId() const
{
    return m_Exchange_id;
}

void CancelOrder::setExchangeId(const utility::string_t& value)
{
    m_Exchange_id = value;
    m_Exchange_idIsSet = true;
}

bool CancelOrder::exchangeIdIsSet() const
{
    return m_Exchange_idIsSet;
}

void CancelOrder::unsetExchange_id()
{
    m_Exchange_idIsSet = false;
}
utility::string_t CancelOrder::getExchangeOrderId() const
{
    return m_Exchange_order_id;
}

void CancelOrder::setExchangeOrderId(const utility::string_t& value)
{
    m_Exchange_order_id = value;
    m_Exchange_order_idIsSet = true;
}

bool CancelOrder::exchangeOrderIdIsSet() const
{
    return m_Exchange_order_idIsSet;
}

void CancelOrder::unsetExchange_order_id()
{
    m_Exchange_order_idIsSet = false;
}
utility::string_t CancelOrder::getClientOrderId() const
{
    return m_Client_order_id;
}

void CancelOrder::setClientOrderId(const utility::string_t& value)
{
    m_Client_order_id = value;
    m_Client_order_idIsSet = true;
}

bool CancelOrder::clientOrderIdIsSet() const
{
    return m_Client_order_idIsSet;
}

void CancelOrder::unsetClient_order_id()
{
    m_Client_order_idIsSet = false;
}
}
}
}
}


