(ns oms-rest-api.api.positions
  (:require [oms-rest-api.core :refer [call-api check-required-params with-collection-format *api-context*]]
            [clojure.spec.alpha :as s]
            [spec-tools.core :as st]
            [orchestra.core :refer [defn-spec]]
            [oms-rest-api.specs.time-in-force :refer :all]
            [oms-rest-api.specs.order-data :refer :all]
            [oms-rest-api.specs.balance-data :refer :all]
            [oms-rest-api.specs.create-order400 :refer :all]
            [oms-rest-api.specs.cancel-all-order :refer :all]
            [oms-rest-api.specs.cancel-order :refer :all]
            [oms-rest-api.specs.position-data :refer :all]
            [oms-rest-api.specs.order-status :refer :all]
            [oms-rest-api.specs.messages-info :refer :all]
            [oms-rest-api.specs.balance :refer :all]
            [oms-rest-api.specs.messages :refer :all]
            [oms-rest-api.specs.order-live :refer :all]
            [oms-rest-api.specs.position :refer :all]
            [oms-rest-api.specs.new-order :refer :all]
            [oms-rest-api.specs.order :refer :all]
            [oms-rest-api.specs.messages-ok :refer :all]
            )
  (:import (java.io File)))


(defn-spec v1-positions-get-with-http-info any?
  "Get positions
  Returns all of your positions."
  ([] (v1-positions-get-with-http-info nil))
  ([{:keys [exchange_id]} (s/map-of keyword? any?)]
   (call-api "/v1/positions" :get
             {:path-params   {}
              :header-params {}
              :query-params  {"exchange_id" exchange_id }
              :form-params   {}
              :content-types []
              :accepts       ["application/json"]
              :auth-names    []})))

(defn-spec v1-positions-get (s/coll-of position-spec)
  "Get positions
  Returns all of your positions."
  ([] (v1-positions-get nil))
  ([optional-params any?]
   (let [res (:data (v1-positions-get-with-http-info optional-params))]
     (if (:decode-models *api-context*)
        (st/decode (s/coll-of position-spec) res st/string-transformer)
        res))))


