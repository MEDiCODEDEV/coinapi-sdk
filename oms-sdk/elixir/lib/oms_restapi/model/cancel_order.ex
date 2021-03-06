# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OMS-RESTAPI.Model.CancelOrder do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"exchange_id",
    :"exchange_order_id",
    :"client_order_id"
  ]

  @type t :: %__MODULE__{
    :"exchange_id" => String.t | nil,
    :"exchange_order_id" => String.t | nil,
    :"client_order_id" => String.t | nil
  }
end

defimpl Poison.Decoder, for: OMS-RESTAPI.Model.CancelOrder do
  def decode(value, _options) do
    value
  end
end

