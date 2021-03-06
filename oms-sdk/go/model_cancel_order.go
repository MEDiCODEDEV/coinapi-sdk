/*
 * OMS - REST API
 *
 * OMS Project
 *
 * API version: v1
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// CancelOrder struct for CancelOrder
type CancelOrder struct {
	// Exchange name
	ExchangeId string `json:"exchange_id,omitempty"`
	// Order Id
	ExchangeOrderId string `json:"exchange_order_id,omitempty"`
	// Client order Id
	ClientOrderId string `json:"client_order_id,omitempty"`
}
