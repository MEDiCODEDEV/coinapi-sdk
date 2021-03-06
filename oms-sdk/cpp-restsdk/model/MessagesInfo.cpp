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



#include "MessagesInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




MessagesInfo::MessagesInfo()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Exchange_id = utility::conversions::to_string_t("");
    m_Exchange_idIsSet = false;
    m_Error_message = utility::conversions::to_string_t("");
    m_Error_messageIsSet = false;
}

MessagesInfo::~MessagesInfo()
{
}

void MessagesInfo::validate()
{
    // TODO: implement validation
}

web::json::value MessagesInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Exchange_idIsSet)
    {
        val[utility::conversions::to_string_t("exchange_id")] = ModelBase::toJson(m_Exchange_id);
    }
    if(m_Error_messageIsSet)
    {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(m_Error_message);
    }

    return val;
}

bool MessagesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("error_message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_error_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_error_message);
            setErrorMessage(refVal_error_message);
        }
    }
    return ok;
}

void MessagesInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_Exchange_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exchange_id"), m_Exchange_id));
    }
    if(m_Error_messageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("error_message"), m_Error_message));
    }
}

bool MessagesInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exchange_id")))
    {
        utility::string_t refVal_exchange_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exchange_id")), refVal_exchange_id );
        setExchangeId(refVal_exchange_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("error_message")))
    {
        utility::string_t refVal_error_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("error_message")), refVal_error_message );
        setErrorMessage(refVal_error_message);
    }
    return ok;
}

utility::string_t MessagesInfo::getType() const
{
    return m_Type;
}

void MessagesInfo::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool MessagesInfo::typeIsSet() const
{
    return m_TypeIsSet;
}

void MessagesInfo::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t MessagesInfo::getExchangeId() const
{
    return m_Exchange_id;
}

void MessagesInfo::setExchangeId(const utility::string_t& value)
{
    m_Exchange_id = value;
    m_Exchange_idIsSet = true;
}

bool MessagesInfo::exchangeIdIsSet() const
{
    return m_Exchange_idIsSet;
}

void MessagesInfo::unsetExchange_id()
{
    m_Exchange_idIsSet = false;
}
utility::string_t MessagesInfo::getErrorMessage() const
{
    return m_Error_message;
}

void MessagesInfo::setErrorMessage(const utility::string_t& value)
{
    m_Error_message = value;
    m_Error_messageIsSet = true;
}

bool MessagesInfo::errorMessageIsSet() const
{
    return m_Error_messageIsSet;
}

void MessagesInfo::unsetError_message()
{
    m_Error_messageIsSet = false;
}
}
}
}
}


