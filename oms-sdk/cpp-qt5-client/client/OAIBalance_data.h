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

/*
 * OAIBalance_data.h
 *
 * 
 */

#ifndef OAIBalance_data_H
#define OAIBalance_data_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBalance_data : public OAIObject {
public:
    OAIBalance_data();
    OAIBalance_data(QString json);
    ~OAIBalance_data() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getSymbolExchange() const;
    void setSymbolExchange(const QString &symbol_exchange);
    bool is_symbol_exchange_Set() const;
    bool is_symbol_exchange_Valid() const;

    QString getSymbolCoinapi() const;
    void setSymbolCoinapi(const QString &symbol_coinapi);
    bool is_symbol_coinapi_Set() const;
    bool is_symbol_coinapi_Valid() const;

    float getBalance() const;
    void setBalance(const float &balance);
    bool is_balance_Set() const;
    bool is_balance_Valid() const;

    float getAvailable() const;
    void setAvailable(const float &available);
    bool is_available_Set() const;
    bool is_available_Valid() const;

    float getLocked() const;
    void setLocked(const float &locked);
    bool is_locked_Set() const;
    bool is_locked_Valid() const;

    QString getUpdateOrigin() const;
    void setUpdateOrigin(const QString &update_origin);
    bool is_update_origin_Set() const;
    bool is_update_origin_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString symbol_exchange;
    bool m_symbol_exchange_isSet;
    bool m_symbol_exchange_isValid;

    QString symbol_coinapi;
    bool m_symbol_coinapi_isSet;
    bool m_symbol_coinapi_isValid;

    float balance;
    bool m_balance_isSet;
    bool m_balance_isValid;

    float available;
    bool m_available_isSet;
    bool m_available_isValid;

    float locked;
    bool m_locked_isSet;
    bool m_locked_isValid;

    QString update_origin;
    bool m_update_origin_isSet;
    bool m_update_origin_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBalance_data)

#endif // OAIBalance_data_H
