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

#include "OAIOrderLive.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderLive::OAIOrderLive(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderLive::OAIOrderLive() {
    this->initializeModel();
}

OAIOrderLive::~OAIOrderLive() {}

void OAIOrderLive::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_exchange_id_isSet = false;
    m_exchange_id_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_client_order_id_format_exchange_isSet = false;
    m_client_order_id_format_exchange_isValid = false;

    m_exchange_order_id_isSet = false;
    m_exchange_order_id_isValid = false;

    m_amount_open_isSet = false;
    m_amount_open_isValid = false;

    m_amount_filled_isSet = false;
    m_amount_filled_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_time_order_isSet = false;
    m_time_order_isValid = false;

    m_error_message_isSet = false;
    m_error_message_isValid = false;

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

void OAIOrderLive::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOrderLive::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_exchange_id_isValid = ::OpenAPI::fromJsonValue(exchange_id, json[QString("exchange_id")]);
    m_exchange_id_isSet = !json[QString("exchange_id")].isNull() && m_exchange_id_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_client_order_id_format_exchange_isValid = ::OpenAPI::fromJsonValue(client_order_id_format_exchange, json[QString("client_order_id_format_exchange")]);
    m_client_order_id_format_exchange_isSet = !json[QString("client_order_id_format_exchange")].isNull() && m_client_order_id_format_exchange_isValid;

    m_exchange_order_id_isValid = ::OpenAPI::fromJsonValue(exchange_order_id, json[QString("exchange_order_id")]);
    m_exchange_order_id_isSet = !json[QString("exchange_order_id")].isNull() && m_exchange_order_id_isValid;

    m_amount_open_isValid = ::OpenAPI::fromJsonValue(amount_open, json[QString("amount_open")]);
    m_amount_open_isSet = !json[QString("amount_open")].isNull() && m_amount_open_isValid;

    m_amount_filled_isValid = ::OpenAPI::fromJsonValue(amount_filled, json[QString("amount_filled")]);
    m_amount_filled_isSet = !json[QString("amount_filled")].isNull() && m_amount_filled_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    if(json["time_order"].isArray()){
        auto arr = json["time_order"].toArray();
        m_time_order_isValid = true;
        if(arr.count() > 0) {
            for (const QJsonValue jval : arr) {
                QList<QString> item;
                m_time_order_isValid &= ::OpenAPI::fromJsonValue(item, jval);
                m_time_order_isSet = !jval.isNull() && m_time_order_isValid;
                time_order.push_back(item);
            }
        }
    }

    m_error_message_isValid = ::OpenAPI::fromJsonValue(error_message, json[QString("error_message")]);
    m_error_message_isSet = !json[QString("error_message")].isNull() && m_error_message_isValid;

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

QString OAIOrderLive::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOrderLive::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_exchange_id_isSet) {
        obj.insert(QString("exchange_id"), ::OpenAPI::toJsonValue(exchange_id));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_client_order_id_format_exchange_isSet) {
        obj.insert(QString("client_order_id_format_exchange"), ::OpenAPI::toJsonValue(client_order_id_format_exchange));
    }
    if (m_exchange_order_id_isSet) {
        obj.insert(QString("exchange_order_id"), ::OpenAPI::toJsonValue(exchange_order_id));
    }
    if (m_amount_open_isSet) {
        obj.insert(QString("amount_open"), ::OpenAPI::toJsonValue(amount_open));
    }
    if (m_amount_filled_isSet) {
        obj.insert(QString("amount_filled"), ::OpenAPI::toJsonValue(amount_filled));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (time_order.size() > 0) {
        
        obj.insert(QString("time_order"), toJsonValue(time_order));
    }
    if (m_error_message_isSet) {
        obj.insert(QString("error_message"), ::OpenAPI::toJsonValue(error_message));
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

QString OAIOrderLive::getType() const {
    return type;
}
void OAIOrderLive::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIOrderLive::is_type_Set() const{
    return m_type_isSet;
}

bool OAIOrderLive::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIOrderLive::getExchangeId() const {
    return exchange_id;
}
void OAIOrderLive::setExchangeId(const QString &exchange_id) {
    this->exchange_id = exchange_id;
    this->m_exchange_id_isSet = true;
}

bool OAIOrderLive::is_exchange_id_Set() const{
    return m_exchange_id_isSet;
}

bool OAIOrderLive::is_exchange_id_Valid() const{
    return m_exchange_id_isValid;
}

QString OAIOrderLive::getId() const {
    return id;
}
void OAIOrderLive::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIOrderLive::is_id_Set() const{
    return m_id_isSet;
}

bool OAIOrderLive::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIOrderLive::getClientOrderIdFormatExchange() const {
    return client_order_id_format_exchange;
}
void OAIOrderLive::setClientOrderIdFormatExchange(const QString &client_order_id_format_exchange) {
    this->client_order_id_format_exchange = client_order_id_format_exchange;
    this->m_client_order_id_format_exchange_isSet = true;
}

bool OAIOrderLive::is_client_order_id_format_exchange_Set() const{
    return m_client_order_id_format_exchange_isSet;
}

bool OAIOrderLive::is_client_order_id_format_exchange_Valid() const{
    return m_client_order_id_format_exchange_isValid;
}

QString OAIOrderLive::getExchangeOrderId() const {
    return exchange_order_id;
}
void OAIOrderLive::setExchangeOrderId(const QString &exchange_order_id) {
    this->exchange_order_id = exchange_order_id;
    this->m_exchange_order_id_isSet = true;
}

bool OAIOrderLive::is_exchange_order_id_Set() const{
    return m_exchange_order_id_isSet;
}

bool OAIOrderLive::is_exchange_order_id_Valid() const{
    return m_exchange_order_id_isValid;
}

double OAIOrderLive::getAmountOpen() const {
    return amount_open;
}
void OAIOrderLive::setAmountOpen(const double &amount_open) {
    this->amount_open = amount_open;
    this->m_amount_open_isSet = true;
}

bool OAIOrderLive::is_amount_open_Set() const{
    return m_amount_open_isSet;
}

bool OAIOrderLive::is_amount_open_Valid() const{
    return m_amount_open_isValid;
}

double OAIOrderLive::getAmountFilled() const {
    return amount_filled;
}
void OAIOrderLive::setAmountFilled(const double &amount_filled) {
    this->amount_filled = amount_filled;
    this->m_amount_filled_isSet = true;
}

bool OAIOrderLive::is_amount_filled_Set() const{
    return m_amount_filled_isSet;
}

bool OAIOrderLive::is_amount_filled_Valid() const{
    return m_amount_filled_isValid;
}

OAIOrderStatus OAIOrderLive::getStatus() const {
    return status;
}
void OAIOrderLive::setStatus(const OAIOrderStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIOrderLive::is_status_Set() const{
    return m_status_isSet;
}

bool OAIOrderLive::is_status_Valid() const{
    return m_status_isValid;
}

QList<QList<QString>> OAIOrderLive::getTimeOrder() const {
    return time_order;
}
void OAIOrderLive::setTimeOrder(const QList<QList<QString>> &time_order) {
    this->time_order = time_order;
    this->m_time_order_isSet = true;
}

bool OAIOrderLive::is_time_order_Set() const{
    return m_time_order_isSet;
}

bool OAIOrderLive::is_time_order_Valid() const{
    return m_time_order_isValid;
}

QString OAIOrderLive::getErrorMessage() const {
    return error_message;
}
void OAIOrderLive::setErrorMessage(const QString &error_message) {
    this->error_message = error_message;
    this->m_error_message_isSet = true;
}

bool OAIOrderLive::is_error_message_Set() const{
    return m_error_message_isSet;
}

bool OAIOrderLive::is_error_message_Valid() const{
    return m_error_message_isValid;
}

QString OAIOrderLive::getClientOrderId() const {
    return client_order_id;
}
void OAIOrderLive::setClientOrderId(const QString &client_order_id) {
    this->client_order_id = client_order_id;
    this->m_client_order_id_isSet = true;
}

bool OAIOrderLive::is_client_order_id_Set() const{
    return m_client_order_id_isSet;
}

bool OAIOrderLive::is_client_order_id_Valid() const{
    return m_client_order_id_isValid;
}

QString OAIOrderLive::getSymbolExchange() const {
    return symbol_exchange;
}
void OAIOrderLive::setSymbolExchange(const QString &symbol_exchange) {
    this->symbol_exchange = symbol_exchange;
    this->m_symbol_exchange_isSet = true;
}

bool OAIOrderLive::is_symbol_exchange_Set() const{
    return m_symbol_exchange_isSet;
}

bool OAIOrderLive::is_symbol_exchange_Valid() const{
    return m_symbol_exchange_isValid;
}

QString OAIOrderLive::getSymbolCoinapi() const {
    return symbol_coinapi;
}
void OAIOrderLive::setSymbolCoinapi(const QString &symbol_coinapi) {
    this->symbol_coinapi = symbol_coinapi;
    this->m_symbol_coinapi_isSet = true;
}

bool OAIOrderLive::is_symbol_coinapi_Set() const{
    return m_symbol_coinapi_isSet;
}

bool OAIOrderLive::is_symbol_coinapi_Valid() const{
    return m_symbol_coinapi_isValid;
}

double OAIOrderLive::getAmountOrder() const {
    return amount_order;
}
void OAIOrderLive::setAmountOrder(const double &amount_order) {
    this->amount_order = amount_order;
    this->m_amount_order_isSet = true;
}

bool OAIOrderLive::is_amount_order_Set() const{
    return m_amount_order_isSet;
}

bool OAIOrderLive::is_amount_order_Valid() const{
    return m_amount_order_isValid;
}

double OAIOrderLive::getPrice() const {
    return price;
}
void OAIOrderLive::setPrice(const double &price) {
    this->price = price;
    this->m_price_isSet = true;
}

bool OAIOrderLive::is_price_Set() const{
    return m_price_isSet;
}

bool OAIOrderLive::is_price_Valid() const{
    return m_price_isValid;
}

QString OAIOrderLive::getSide() const {
    return side;
}
void OAIOrderLive::setSide(const QString &side) {
    this->side = side;
    this->m_side_isSet = true;
}

bool OAIOrderLive::is_side_Set() const{
    return m_side_isSet;
}

bool OAIOrderLive::is_side_Valid() const{
    return m_side_isValid;
}

QString OAIOrderLive::getOrderType() const {
    return order_type;
}
void OAIOrderLive::setOrderType(const QString &order_type) {
    this->order_type = order_type;
    this->m_order_type_isSet = true;
}

bool OAIOrderLive::is_order_type_Set() const{
    return m_order_type_isSet;
}

bool OAIOrderLive::is_order_type_Valid() const{
    return m_order_type_isValid;
}

OAITimeInForce OAIOrderLive::getTimeInForce() const {
    return time_in_force;
}
void OAIOrderLive::setTimeInForce(const OAITimeInForce &time_in_force) {
    this->time_in_force = time_in_force;
    this->m_time_in_force_isSet = true;
}

bool OAIOrderLive::is_time_in_force_Set() const{
    return m_time_in_force_isSet;
}

bool OAIOrderLive::is_time_in_force_Valid() const{
    return m_time_in_force_isValid;
}

QDate OAIOrderLive::getExpireTime() const {
    return expire_time;
}
void OAIOrderLive::setExpireTime(const QDate &expire_time) {
    this->expire_time = expire_time;
    this->m_expire_time_isSet = true;
}

bool OAIOrderLive::is_expire_time_Set() const{
    return m_expire_time_isSet;
}

bool OAIOrderLive::is_expire_time_Valid() const{
    return m_expire_time_isValid;
}

QList<QString> OAIOrderLive::getExecInst() const {
    return exec_inst;
}
void OAIOrderLive::setExecInst(const QList<QString> &exec_inst) {
    this->exec_inst = exec_inst;
    this->m_exec_inst_isSet = true;
}

bool OAIOrderLive::is_exec_inst_Set() const{
    return m_exec_inst_isSet;
}

bool OAIOrderLive::is_exec_inst_Valid() const{
    return m_exec_inst_isValid;
}

bool OAIOrderLive::isSet() const {
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

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_client_order_id_format_exchange_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exchange_order_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amount_open_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_amount_filled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (time_order.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_message_isSet) {
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

bool OAIOrderLive::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
