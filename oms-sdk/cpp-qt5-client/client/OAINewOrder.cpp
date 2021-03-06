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

#include "OAINewOrder.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINewOrder::OAINewOrder(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINewOrder::OAINewOrder() {
    this->initializeModel();
}

OAINewOrder::~OAINewOrder() {}

void OAINewOrder::initializeModel() {

    m_exchange_id_isSet = false;
    m_exchange_id_isValid = false;

    m_client_order_id_isSet = false;
    m_client_order_id_isValid = false;

    m_symbol_exchange_isSet = false;
    m_symbol_exchange_isValid = false;

    m_symbol_coinapi_isSet = false;
    m_symbol_coinapi_isValid = false;

    m_amount_order_isSet = false;
    m_amount_order_isValid = false;

    m_price_isSet = false;
    m_price_isValid = false;

    m_side_isSet = false;
    m_side_isValid = false;

    m_order_type_isSet = false;
    m_order_type_isValid = false;

    m_time_in_force_isSet = false;
    m_time_in_force_isValid = false;

    m_expire_time_isSet = false;
    m_expire_time_isValid = false;

    m_exec_inst_isSet = false;
    m_exec_inst_isValid = false;
}

void OAINewOrder::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAINewOrder::fromJsonObject(QJsonObject json) {

    m_exchange_id_isValid = ::OpenAPI::fromJsonValue(exchange_id, json[QString("exchange_id")]);
    m_exchange_id_isSet = !json[QString("exchange_id")].isNull() && m_exchange_id_isValid;

    m_client_order_id_isValid = ::OpenAPI::fromJsonValue(client_order_id, json[QString("client_order_id")]);
    m_client_order_id_isSet = !json[QString("client_order_id")].isNull() && m_client_order_id_isValid;

    m_symbol_exchange_isValid = ::OpenAPI::fromJsonValue(symbol_exchange, json[QString("symbol_exchange")]);
    m_symbol_exchange_isSet = !json[QString("symbol_exchange")].isNull() && m_symbol_exchange_isValid;

    m_symbol_coinapi_isValid = ::OpenAPI::fromJsonValue(symbol_coinapi, json[QString("symbol_coinapi")]);
    m_symbol_coinapi_isSet = !json[QString("symbol_coinapi")].isNull() && m_symbol_coinapi_isValid;

    m_amount_order_isValid = ::OpenAPI::fromJsonValue(amount_order, json[QString("amount_order")]);
    m_amount_order_isSet = !json[QString("amount_order")].isNull() && m_amount_order_isValid;

    m_price_isValid = ::OpenAPI::fromJsonValue(price, json[QString("price")]);
    m_price_isSet = !json[QString("price")].isNull() && m_price_isValid;

    m_side_isValid = ::OpenAPI::fromJsonValue(side, json[QString("side")]);
    m_side_isSet = !json[QString("side")].isNull() && m_side_isValid;

    m_order_type_isValid = ::OpenAPI::fromJsonValue(order_type, json[QString("order_type")]);
    m_order_type_isSet = !json[QString("order_type")].isNull() && m_order_type_isValid;

    m_time_in_force_isValid = ::OpenAPI::fromJsonValue(time_in_force, json[QString("time_in_force")]);
    m_time_in_force_isSet = !json[QString("time_in_force")].isNull() && m_time_in_force_isValid;

    m_expire_time_isValid = ::OpenAPI::fromJsonValue(expire_time, json[QString("expire_time")]);
    m_expire_time_isSet = !json[QString("expire_time")].isNull() && m_expire_time_isValid;

    m_exec_inst_isValid = ::OpenAPI::fromJsonValue(exec_inst, json[QString("exec_inst")]);
    m_exec_inst_isSet = !json[QString("exec_inst")].isNull() && m_exec_inst_isValid;
}

QString OAINewOrder::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAINewOrder::asJsonObject() const {
    QJsonObject obj;
    if (m_exchange_id_isSet) {
        obj.insert(QString("exchange_id"), ::OpenAPI::toJsonValue(exchange_id));
    }
    if (m_client_order_id_isSet) {
        obj.insert(QString("client_order_id"), ::OpenAPI::toJsonValue(client_order_id));
    }
    if (m_symbol_exchange_isSet) {
        obj.insert(QString("symbol_exchange"), ::OpenAPI::toJsonValue(symbol_exchange));
    }
    if (m_symbol_coinapi_isSet) {
        obj.insert(QString("symbol_coinapi"), ::OpenAPI::toJsonValue(symbol_coinapi));
    }
    if (m_amount_order_isSet) {
        obj.insert(QString("amount_order"), ::OpenAPI::toJsonValue(amount_order));
    }
    if (m_price_isSet) {
        obj.insert(QString("price"), ::OpenAPI::toJsonValue(price));
    }
    if (m_side_isSet) {
        obj.insert(QString("side"), ::OpenAPI::toJsonValue(side));
    }
    if (m_order_type_isSet) {
        obj.insert(QString("order_type"), ::OpenAPI::toJsonValue(order_type));
    }
    if (time_in_force.isSet()) {
        obj.insert(QString("time_in_force"), ::OpenAPI::toJsonValue(time_in_force));
    }
    if (m_expire_time_isSet) {
        obj.insert(QString("expire_time"), ::OpenAPI::toJsonValue(expire_time));
    }
    if (exec_inst.size() > 0) {
        obj.insert(QString("exec_inst"), ::OpenAPI::toJsonValue(exec_inst));
    }
    return obj;
}

QString OAINewOrder::getExchangeId() const {
    return exchange_id;
}
void OAINewOrder::setExchangeId(const QString &exchange_id) {
    this->exchange_id = exchange_id;
    this->m_exchange_id_isSet = true;
}

bool OAINewOrder::is_exchange_id_Set() const{
    return m_exchange_id_isSet;
}

bool OAINewOrder::is_exchange_id_Valid() const{
    return m_exchange_id_isValid;
}

QString OAINewOrder::getClientOrderId() const {
    return client_order_id;
}
void OAINewOrder::setClientOrderId(const QString &client_order_id) {
    this->client_order_id = client_order_id;
    this->m_client_order_id_isSet = true;
}

bool OAINewOrder::is_client_order_id_Set() const{
    return m_client_order_id_isSet;
}

bool OAINewOrder::is_client_order_id_Valid() const{
    return m_client_order_id_isValid;
}

QString OAINewOrder::getSymbolExchange() const {
    return symbol_exchange;
}
void OAINewOrder::setSymbolExchange(const QString &symbol_exchange) {
    this->symbol_exchange = symbol_exchange;
    this->m_symbol_exchange_isSet = true;
}

bool OAINewOrder::is_symbol_exchange_Set() const{
    return m_symbol_exchange_isSet;
}

bool OAINewOrder::is_symbol_exchange_Valid() const{
    return m_symbol_exchange_isValid;
}

QString OAINewOrder::getSymbolCoinapi() const {
    return symbol_coinapi;
}
void OAINewOrder::setSymbolCoinapi(const QString &symbol_coinapi) {
    this->symbol_coinapi = symbol_coinapi;
    this->m_symbol_coinapi_isSet = true;
}

bool OAINewOrder::is_symbol_coinapi_Set() const{
    return m_symbol_coinapi_isSet;
}

bool OAINewOrder::is_symbol_coinapi_Valid() const{
    return m_symbol_coinapi_isValid;
}

double OAINewOrder::getAmountOrder() const {
    return amount_order;
}
void OAINewOrder::setAmountOrder(const double &amount_order) {
    this->amount_order = amount_order;
    this->m_amount_order_isSet = true;
}

bool OAINewOrder::is_amount_order_Set() const{
    return m_amount_order_isSet;
}

bool OAINewOrder::is_amount_order_Valid() const{
    return m_amount_order_isValid;
}

double OAINewOrder::getPrice() const {
    return price;
}
void OAINewOrder::setPrice(const double &price) {
    this->price = price;
    this->m_price_isSet = true;
}

bool OAINewOrder::is_price_Set() const{
    return m_price_isSet;
}

bool OAINewOrder::is_price_Valid() const{
    return m_price_isValid;
}

QString OAINewOrder::getSide() const {
    return side;
}
void OAINewOrder::setSide(const QString &side) {
    this->side = side;
    this->m_side_isSet = true;
}

bool OAINewOrder::is_side_Set() const{
    return m_side_isSet;
}

bool OAINewOrder::is_side_Valid() const{
    return m_side_isValid;
}

QString OAINewOrder::getOrderType() const {
    return order_type;
}
void OAINewOrder::setOrderType(const QString &order_type) {
    this->order_type = order_type;
    this->m_order_type_isSet = true;
}

bool OAINewOrder::is_order_type_Set() const{
    return m_order_type_isSet;
}

bool OAINewOrder::is_order_type_Valid() const{
    return m_order_type_isValid;
}

OAITimeInForce OAINewOrder::getTimeInForce() const {
    return time_in_force;
}
void OAINewOrder::setTimeInForce(const OAITimeInForce &time_in_force) {
    this->time_in_force = time_in_force;
    this->m_time_in_force_isSet = true;
}

bool OAINewOrder::is_time_in_force_Set() const{
    return m_time_in_force_isSet;
}

bool OAINewOrder::is_time_in_force_Valid() const{
    return m_time_in_force_isValid;
}

QDate OAINewOrder::getExpireTime() const {
    return expire_time;
}
void OAINewOrder::setExpireTime(const QDate &expire_time) {
    this->expire_time = expire_time;
    this->m_expire_time_isSet = true;
}

bool OAINewOrder::is_expire_time_Set() const{
    return m_expire_time_isSet;
}

bool OAINewOrder::is_expire_time_Valid() const{
    return m_expire_time_isValid;
}

QList<QString> OAINewOrder::getExecInst() const {
    return exec_inst;
}
void OAINewOrder::setExecInst(const QList<QString> &exec_inst) {
    this->exec_inst = exec_inst;
    this->m_exec_inst_isSet = true;
}

bool OAINewOrder::is_exec_inst_Set() const{
    return m_exec_inst_isSet;
}

bool OAINewOrder::is_exec_inst_Valid() const{
    return m_exec_inst_isValid;
}

bool OAINewOrder::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_exchange_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_client_order_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_symbol_exchange_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_symbol_coinapi_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amount_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_side_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (time_in_force.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_expire_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (exec_inst.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAINewOrder::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
