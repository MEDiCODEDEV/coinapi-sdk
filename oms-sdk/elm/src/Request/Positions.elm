{-
   OMS - REST API
   OMS Project

   The version of the OpenAPI document: v1

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Request.Positions exposing (v1PositionsGet)

import Data.Position as Position exposing (Position)
import Dict
import Http
import Json.Decode as Decode
import Url.Builder as Url




basePath : String
basePath =
    "http://localhost:3001"


{-| Returns all of your positions.
-}
v1PositionsGet :
    { onSend : Result Http.Error (List Position) -> msg




    , exchangeId : Maybe (String)
    }
    -> Cmd msg
v1PositionsGet params =
    Http.request
        { method = "GET"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v1", "positions"]
            (List.filterMap identity [Maybe.map (Url.string "exchange_id" << identity) params.exchangeId])
        , body = Http.emptyBody
        , expect = Http.expectJson params.onSend (Decode.list Position.decoder)
        , timeout = Just 30000
        , tracker = Nothing
        }
