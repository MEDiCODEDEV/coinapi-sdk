/*
 * OMS - REST API
 *
 * OMS Project
 *
 * API version: v1
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// CreateOrder400 struct for CreateOrder400
type CreateOrder400 struct {
	Type string `json:"type,omitempty"`
	Title string `json:"title,omitempty"`
	Status float32 `json:"status,omitempty"`
	TraceId string `json:"traceId,omitempty"`
	Errors string `json:"errors,omitempty"`
}
