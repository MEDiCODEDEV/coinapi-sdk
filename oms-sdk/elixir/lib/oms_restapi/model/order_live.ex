# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OMS-RESTAPI.Model.OrderLive do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"type",
    :"exchange_id",
    :"id",
    :"client_order_id_format_exchange",
    :"exchange_order_id",
    :"amount_open",
    :"amount_filled",
    :"status",
    :"time_order",
    :"error_message",
    :"client_order_id",
    :"symbol_exchange",
    :"symbol_coinapi",
    :"amount_order",
    :"price",
    :"side",
    :"order_type",
    :"time_in_force",
    :"expire_time",
    :"exec_inst"
  ]

  @type t :: %__MODULE__{
    :"type" => String.t | nil,
    :"exchange_id" => String.t | nil,
    :"id" => String.t | nil,
    :"client_order_id_format_exchange" => String.t | nil,
    :"exchange_order_id" => String.t | nil,
    :"amount_open" => float() | nil,
    :"amount_filled" => float() | nil,
    :"status" => OrderStatus | nil,
    :"time_order" => [[String.t]] | nil,
    :"error_message" => String.t | nil,
    :"client_order_id" => String.t | nil,
    :"symbol_exchange" => String.t | nil,
    :"symbol_coinapi" => String.t | nil,
    :"amount_order" => float() | nil,
    :"price" => float() | nil,
    :"side" => String.t | nil,
    :"order_type" => String.t | nil,
    :"time_in_force" => TimeInForce | nil,
    :"expire_time" => DateTime | nil,
    :"exec_inst" => [String.t] | nil
  }
end

defimpl Poison.Decoder, for: OMS-RESTAPI.Model.OrderLive do
  import OMS-RESTAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"status", :struct, OMS-RESTAPI.Model.OrderStatus, options)
    |> deserialize(:"time_in_force", :struct, OMS-RESTAPI.Model.TimeInForce, options)
    |> deserialize(:"expire_time", :struct, OMS-RESTAPI.Model.DateTime, options)
  end
end

