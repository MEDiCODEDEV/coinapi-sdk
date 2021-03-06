{-
   OMS - REST API
   OMS Project

   The version of the OpenAPI document: v1

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.Order_ exposing (Order_, decoder, encode, encodeWithTag, toString)

import Data.OrderData as OrderData exposing (OrderData)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias Order_ =
    { type_ : Maybe (String)
    , exchangeName : Maybe (String)
    , data : Maybe ((List OrderData))
    }


decoder : Decoder Order_
decoder =
    Decode.succeed Order_
        |> optional "type" (Decode.nullable Decode.string) Nothing
        |> optional "exchange_name" (Decode.nullable Decode.string) Nothing
        |> optional "data" (Decode.nullable (Decode.list OrderData.decoder)) Nothing



encode : Order_ -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> Order_ -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : Order_ -> List (String, Encode.Value)
encodePairs model =
    [ ( "type", Maybe.withDefault Encode.null (Maybe.map Encode.string model.type_) )
    , ( "exchange_name", Maybe.withDefault Encode.null (Maybe.map Encode.string model.exchangeName) )
    , ( "data", Maybe.withDefault Encode.null (Maybe.map (Encode.list OrderData.encode) model.data) )
    ]



toString : Order_ -> String
toString =
    Encode.encode 0 << encode




