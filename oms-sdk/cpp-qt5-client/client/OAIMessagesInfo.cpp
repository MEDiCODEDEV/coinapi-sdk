/**
 * OMS - REST API
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIMessagesInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMessagesInfo::OAIMessagesInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMessagesInfo::OAIMessagesInfo() {
    this->initializeModel();
}

OAIMessagesInfo::~OAIMessagesInfo() {}

void OAIMessagesInfo::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_exchange_id_isSet = false;
    m_exchange_id_isValid = false;

    m_error_message_isSet = false;
    m_error_message_isValid = false;
}

void OAIMessagesInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMessagesInfo::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_exchange_id_isValid = ::OpenAPI::fromJsonValue(exchange_id, json[QString("exchange_id")]);
    m_exchange_id_isSet = !json[QString("exchange_id")].isNull() && m_exchange_id_isValid;

    m_error_message_isValid = ::OpenAPI::fromJsonValue(error_message, json[QString("error_message")]);
    m_error_message_isSet = !json[QString("error_message")].isNull() && m_error_message_isValid;
}

QString OAIMessagesInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMessagesInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_exchange_id_isSet) {
        obj.insert(QString("exchange_id"), ::OpenAPI::toJsonValue(exchange_id));
    }
    if (m_error_message_isSet) {
        obj.insert(QString("error_message"), ::OpenAPI::toJsonValue(error_message));
    }
    return obj;
}

QString OAIMessagesInfo::getType() const {
    return type;
}
void OAIMessagesInfo::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIMessagesInfo::is_type_Set() const{
    return m_type_isSet;
}

bool OAIMessagesInfo::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIMessagesInfo::getExchangeId() const {
    return exchange_id;
}
void OAIMessagesInfo::setExchangeId(const QString &exchange_id) {
    this->exchange_id = exchange_id;
    this->m_exchange_id_isSet = true;
}

bool OAIMessagesInfo::is_exchange_id_Set() const{
    return m_exchange_id_isSet;
}

bool OAIMessagesInfo::is_exchange_id_Valid() const{
    return m_exchange_id_isValid;
}

QString OAIMessagesInfo::getErrorMessage() const {
    return error_message;
}
void OAIMessagesInfo::setErrorMessage(const QString &error_message) {
    this->error_message = error_message;
    this->m_error_message_isSet = true;
}

bool OAIMessagesInfo::is_error_message_Set() const{
    return m_error_message_isSet;
}

bool OAIMessagesInfo::is_error_message_Valid() const{
    return m_error_message_isValid;
}

bool OAIMessagesInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exchange_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMessagesInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
