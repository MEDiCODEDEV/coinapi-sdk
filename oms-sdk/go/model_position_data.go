/*
 * OMS - REST API
 *
 * OMS Project
 *
 * API version: v1
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// PositionData struct for PositionData
type PositionData struct {
	// Unique position ID
	Id string `json:"id,omitempty"`
	// The contract for this position.
	SymbolExchange string `json:"symbol_exchange,omitempty"`
	// The coinapi contract for this position.
	SymbolCoinapi string `json:"symbol_coinapi,omitempty"`
	AvgEntryPrice float32 `json:"avg_entry_price,omitempty"`
	// The current position amount in contracts.
	Quantity float32 `json:"quantity,omitempty"`
	IsBuy bool `json:"is_buy,omitempty"`
	// Unrealised PNL is all the unrealised profit or loss coming from your portfolio's open positions.
	UnrealisedPnL float32 `json:"unrealised_pn_l,omitempty"`
	// 1 / initMarginReq.
	Leverage float32 `json:"leverage,omitempty"`
	// True/false depending on whether you set cross margin on this position.
	CrossMargin bool `json:"cross_margin,omitempty"`
	// Once markPrice reaches this price, this position will be liquidated.
	LiquidationPrice float32 `json:"liquidation_price,omitempty"`
	RawData string `json:"raw_data,omitempty"`
}
