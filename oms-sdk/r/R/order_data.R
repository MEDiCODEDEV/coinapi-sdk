# OMS - REST API
#
# OMS Project
#
# The version of the OpenAPI document: v1
# 
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title OrderData
#' @description OrderData Class
#' @format An \code{R6Class} generator object
#' @field exchange_id  character [optional]
#'
#' @field id  character [optional]
#'
#' @field client_order_id_format_exchange  character [optional]
#'
#' @field exchange_order_id  character [optional]
#'
#' @field amount_open  numeric [optional]
#'
#' @field amount_filled  numeric [optional]
#'
#' @field status  \link{OrderStatus} [optional]
#'
#' @field time_order  list( \link{array[character]} ) [optional]
#'
#' @field error_message  character [optional]
#'
#' @field client_order_id  character [optional]
#'
#' @field symbol_exchange  character [optional]
#'
#' @field symbol_coinapi  character [optional]
#'
#' @field amount_order  numeric [optional]
#'
#' @field price  numeric [optional]
#'
#' @field side  character [optional]
#'
#' @field order_type  character [optional]
#'
#' @field time_in_force  \link{TimeInForce} [optional]
#'
#' @field expire_time  character [optional]
#'
#' @field exec_inst  list( character ) [optional]
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
OrderData <- R6::R6Class(
  'OrderData',
  public = list(
    `exchange_id` = NULL,
    `id` = NULL,
    `client_order_id_format_exchange` = NULL,
    `exchange_order_id` = NULL,
    `amount_open` = NULL,
    `amount_filled` = NULL,
    `status` = NULL,
    `time_order` = NULL,
    `error_message` = NULL,
    `client_order_id` = NULL,
    `symbol_exchange` = NULL,
    `symbol_coinapi` = NULL,
    `amount_order` = NULL,
    `price` = NULL,
    `side` = NULL,
    `order_type` = NULL,
    `time_in_force` = NULL,
    `expire_time` = NULL,
    `exec_inst` = NULL,
    initialize = function(`exchange_id`=NULL, `id`=NULL, `client_order_id_format_exchange`=NULL, `exchange_order_id`=NULL, `amount_open`=NULL, `amount_filled`=NULL, `status`=NULL, `time_order`=NULL, `error_message`=NULL, `client_order_id`=NULL, `symbol_exchange`=NULL, `symbol_coinapi`=NULL, `amount_order`=NULL, `price`=NULL, `side`=NULL, `order_type`=NULL, `time_in_force`=NULL, `expire_time`=NULL, `exec_inst`=NULL, ...){
      local.optional.var <- list(...)
      if (!is.null(`exchange_id`)) {
        stopifnot(is.character(`exchange_id`), length(`exchange_id`) == 1)
        self$`exchange_id` <- `exchange_id`
      }
      if (!is.null(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!is.null(`client_order_id_format_exchange`)) {
        stopifnot(is.character(`client_order_id_format_exchange`), length(`client_order_id_format_exchange`) == 1)
        self$`client_order_id_format_exchange` <- `client_order_id_format_exchange`
      }
      if (!is.null(`exchange_order_id`)) {
        stopifnot(is.character(`exchange_order_id`), length(`exchange_order_id`) == 1)
        self$`exchange_order_id` <- `exchange_order_id`
      }
      if (!is.null(`amount_open`)) {
        self$`amount_open` <- `amount_open`
      }
      if (!is.null(`amount_filled`)) {
        self$`amount_filled` <- `amount_filled`
      }
      if (!is.null(`status`)) {
        stopifnot(R6::is.R6(`status`))
        self$`status` <- `status`
      }
      if (!is.null(`time_order`)) {
        stopifnot(is.vector(`time_order`), length(`time_order`) != 0)
        sapply(`time_order`, function(x) stopifnot(R6::is.R6(x)))
        self$`time_order` <- `time_order`
      }
      if (!is.null(`error_message`)) {
        stopifnot(is.character(`error_message`), length(`error_message`) == 1)
        self$`error_message` <- `error_message`
      }
      if (!is.null(`client_order_id`)) {
        stopifnot(is.character(`client_order_id`), length(`client_order_id`) == 1)
        self$`client_order_id` <- `client_order_id`
      }
      if (!is.null(`symbol_exchange`)) {
        stopifnot(is.character(`symbol_exchange`), length(`symbol_exchange`) == 1)
        self$`symbol_exchange` <- `symbol_exchange`
      }
      if (!is.null(`symbol_coinapi`)) {
        stopifnot(is.character(`symbol_coinapi`), length(`symbol_coinapi`) == 1)
        self$`symbol_coinapi` <- `symbol_coinapi`
      }
      if (!is.null(`amount_order`)) {
        self$`amount_order` <- `amount_order`
      }
      if (!is.null(`price`)) {
        self$`price` <- `price`
      }
      if (!is.null(`side`)) {
        stopifnot(is.character(`side`), length(`side`) == 1)
        self$`side` <- `side`
      }
      if (!is.null(`order_type`)) {
        stopifnot(is.character(`order_type`), length(`order_type`) == 1)
        self$`order_type` <- `order_type`
      }
      if (!is.null(`time_in_force`)) {
        stopifnot(R6::is.R6(`time_in_force`))
        self$`time_in_force` <- `time_in_force`
      }
      if (!is.null(`expire_time`)) {
        self$`expire_time` <- `expire_time`
      }
      if (!is.null(`exec_inst`)) {
        stopifnot(is.vector(`exec_inst`), length(`exec_inst`) != 0)
        sapply(`exec_inst`, function(x) stopifnot(is.character(x)))
        self$`exec_inst` <- `exec_inst`
      }
    },
    toJSON = function() {
      OrderDataObject <- list()
      if (!is.null(self$`exchange_id`)) {
        OrderDataObject[['exchange_id']] <-
          self$`exchange_id`
      }
      if (!is.null(self$`id`)) {
        OrderDataObject[['id']] <-
          self$`id`
      }
      if (!is.null(self$`client_order_id_format_exchange`)) {
        OrderDataObject[['client_order_id_format_exchange']] <-
          self$`client_order_id_format_exchange`
      }
      if (!is.null(self$`exchange_order_id`)) {
        OrderDataObject[['exchange_order_id']] <-
          self$`exchange_order_id`
      }
      if (!is.null(self$`amount_open`)) {
        OrderDataObject[['amount_open']] <-
          self$`amount_open`
      }
      if (!is.null(self$`amount_filled`)) {
        OrderDataObject[['amount_filled']] <-
          self$`amount_filled`
      }
      if (!is.null(self$`status`)) {
        OrderDataObject[['status']] <-
          self$`status`$toJSON()
      }
      if (!is.null(self$`time_order`)) {
        OrderDataObject[['time_order']] <-
          lapply(self$`time_order`, function(x) x$toJSON())
      }
      if (!is.null(self$`error_message`)) {
        OrderDataObject[['error_message']] <-
          self$`error_message`
      }
      if (!is.null(self$`client_order_id`)) {
        OrderDataObject[['client_order_id']] <-
          self$`client_order_id`
      }
      if (!is.null(self$`symbol_exchange`)) {
        OrderDataObject[['symbol_exchange']] <-
          self$`symbol_exchange`
      }
      if (!is.null(self$`symbol_coinapi`)) {
        OrderDataObject[['symbol_coinapi']] <-
          self$`symbol_coinapi`
      }
      if (!is.null(self$`amount_order`)) {
        OrderDataObject[['amount_order']] <-
          self$`amount_order`
      }
      if (!is.null(self$`price`)) {
        OrderDataObject[['price']] <-
          self$`price`
      }
      if (!is.null(self$`side`)) {
        OrderDataObject[['side']] <-
          self$`side`
      }
      if (!is.null(self$`order_type`)) {
        OrderDataObject[['order_type']] <-
          self$`order_type`
      }
      if (!is.null(self$`time_in_force`)) {
        OrderDataObject[['time_in_force']] <-
          self$`time_in_force`$toJSON()
      }
      if (!is.null(self$`expire_time`)) {
        OrderDataObject[['expire_time']] <-
          self$`expire_time`
      }
      if (!is.null(self$`exec_inst`)) {
        OrderDataObject[['exec_inst']] <-
          self$`exec_inst`
      }

      OrderDataObject
    },
    fromJSON = function(OrderDataJson) {
      OrderDataObject <- jsonlite::fromJSON(OrderDataJson)
      if (!is.null(OrderDataObject$`exchange_id`)) {
        self$`exchange_id` <- OrderDataObject$`exchange_id`
      }
      if (!is.null(OrderDataObject$`id`)) {
        self$`id` <- OrderDataObject$`id`
      }
      if (!is.null(OrderDataObject$`client_order_id_format_exchange`)) {
        self$`client_order_id_format_exchange` <- OrderDataObject$`client_order_id_format_exchange`
      }
      if (!is.null(OrderDataObject$`exchange_order_id`)) {
        self$`exchange_order_id` <- OrderDataObject$`exchange_order_id`
      }
      if (!is.null(OrderDataObject$`amount_open`)) {
        self$`amount_open` <- OrderDataObject$`amount_open`
      }
      if (!is.null(OrderDataObject$`amount_filled`)) {
        self$`amount_filled` <- OrderDataObject$`amount_filled`
      }
      if (!is.null(OrderDataObject$`status`)) {
        statusObject <- OrderStatus$new()
        statusObject$fromJSON(jsonlite::toJSON(OrderDataObject$status, auto_unbox = TRUE, digits = NA))
        self$`status` <- statusObject
      }
      if (!is.null(OrderDataObject$`time_order`)) {
        self$`time_order` <- ApiClient$new()$deserializeObj(OrderDataObject$`time_order`, "array[array[character]]", loadNamespace("openapi"))
      }
      if (!is.null(OrderDataObject$`error_message`)) {
        self$`error_message` <- OrderDataObject$`error_message`
      }
      if (!is.null(OrderDataObject$`client_order_id`)) {
        self$`client_order_id` <- OrderDataObject$`client_order_id`
      }
      if (!is.null(OrderDataObject$`symbol_exchange`)) {
        self$`symbol_exchange` <- OrderDataObject$`symbol_exchange`
      }
      if (!is.null(OrderDataObject$`symbol_coinapi`)) {
        self$`symbol_coinapi` <- OrderDataObject$`symbol_coinapi`
      }
      if (!is.null(OrderDataObject$`amount_order`)) {
        self$`amount_order` <- OrderDataObject$`amount_order`
      }
      if (!is.null(OrderDataObject$`price`)) {
        self$`price` <- OrderDataObject$`price`
      }
      if (!is.null(OrderDataObject$`side`)) {
        self$`side` <- OrderDataObject$`side`
      }
      if (!is.null(OrderDataObject$`order_type`)) {
        self$`order_type` <- OrderDataObject$`order_type`
      }
      if (!is.null(OrderDataObject$`time_in_force`)) {
        time_in_forceObject <- TimeInForce$new()
        time_in_forceObject$fromJSON(jsonlite::toJSON(OrderDataObject$time_in_force, auto_unbox = TRUE, digits = NA))
        self$`time_in_force` <- time_in_forceObject
      }
      if (!is.null(OrderDataObject$`expire_time`)) {
        self$`expire_time` <- OrderDataObject$`expire_time`
      }
      if (!is.null(OrderDataObject$`exec_inst`)) {
        self$`exec_inst` <- ApiClient$new()$deserializeObj(OrderDataObject$`exec_inst`, "array[character]", loadNamespace("openapi"))
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`exchange_id`)) {
        sprintf(
        '"exchange_id":
          "%s"
                ',
        self$`exchange_id`
        )},
        if (!is.null(self$`id`)) {
        sprintf(
        '"id":
          "%s"
                ',
        self$`id`
        )},
        if (!is.null(self$`client_order_id_format_exchange`)) {
        sprintf(
        '"client_order_id_format_exchange":
          "%s"
                ',
        self$`client_order_id_format_exchange`
        )},
        if (!is.null(self$`exchange_order_id`)) {
        sprintf(
        '"exchange_order_id":
          "%s"
                ',
        self$`exchange_order_id`
        )},
        if (!is.null(self$`amount_open`)) {
        sprintf(
        '"amount_open":
          %d
                ',
        self$`amount_open`
        )},
        if (!is.null(self$`amount_filled`)) {
        sprintf(
        '"amount_filled":
          %d
                ',
        self$`amount_filled`
        )},
        if (!is.null(self$`status`)) {
        sprintf(
        '"status":
        %s
        ',
        jsonlite::toJSON(self$`status`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`time_order`)) {
        sprintf(
        '"time_order":
        [%s]
',
        paste(sapply(self$`time_order`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )},
        if (!is.null(self$`error_message`)) {
        sprintf(
        '"error_message":
          "%s"
                ',
        self$`error_message`
        )},
        if (!is.null(self$`client_order_id`)) {
        sprintf(
        '"client_order_id":
          "%s"
                ',
        self$`client_order_id`
        )},
        if (!is.null(self$`symbol_exchange`)) {
        sprintf(
        '"symbol_exchange":
          "%s"
                ',
        self$`symbol_exchange`
        )},
        if (!is.null(self$`symbol_coinapi`)) {
        sprintf(
        '"symbol_coinapi":
          "%s"
                ',
        self$`symbol_coinapi`
        )},
        if (!is.null(self$`amount_order`)) {
        sprintf(
        '"amount_order":
          %d
                ',
        self$`amount_order`
        )},
        if (!is.null(self$`price`)) {
        sprintf(
        '"price":
          %d
                ',
        self$`price`
        )},
        if (!is.null(self$`side`)) {
        sprintf(
        '"side":
          "%s"
                ',
        self$`side`
        )},
        if (!is.null(self$`order_type`)) {
        sprintf(
        '"order_type":
          "%s"
                ',
        self$`order_type`
        )},
        if (!is.null(self$`time_in_force`)) {
        sprintf(
        '"time_in_force":
        %s
        ',
        jsonlite::toJSON(self$`time_in_force`$toJSON(), auto_unbox=TRUE, digits = NA)
        )},
        if (!is.null(self$`expire_time`)) {
        sprintf(
        '"expire_time":
          "%s"
                ',
        self$`expire_time`
        )},
        if (!is.null(self$`exec_inst`)) {
        sprintf(
        '"exec_inst":
           [%s]
        ',
        paste(unlist(lapply(self$`exec_inst`, function(x) paste0('"', x, '"'))), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(OrderDataJson) {
      OrderDataObject <- jsonlite::fromJSON(OrderDataJson)
      self$`exchange_id` <- OrderDataObject$`exchange_id`
      self$`id` <- OrderDataObject$`id`
      self$`client_order_id_format_exchange` <- OrderDataObject$`client_order_id_format_exchange`
      self$`exchange_order_id` <- OrderDataObject$`exchange_order_id`
      self$`amount_open` <- OrderDataObject$`amount_open`
      self$`amount_filled` <- OrderDataObject$`amount_filled`
      self$`status` <- OrderStatus$new()$fromJSON(jsonlite::toJSON(OrderDataObject$status, auto_unbox = TRUE, digits = NA))
      self$`time_order` <- ApiClient$new()$deserializeObj(OrderDataObject$`time_order`, "array[array[character]]", loadNamespace("openapi"))
      self$`error_message` <- OrderDataObject$`error_message`
      self$`client_order_id` <- OrderDataObject$`client_order_id`
      self$`symbol_exchange` <- OrderDataObject$`symbol_exchange`
      self$`symbol_coinapi` <- OrderDataObject$`symbol_coinapi`
      self$`amount_order` <- OrderDataObject$`amount_order`
      self$`price` <- OrderDataObject$`price`
      self$`side` <- OrderDataObject$`side`
      self$`order_type` <- OrderDataObject$`order_type`
      self$`time_in_force` <- TimeInForce$new()$fromJSON(jsonlite::toJSON(OrderDataObject$time_in_force, auto_unbox = TRUE, digits = NA))
      self$`expire_time` <- OrderDataObject$`expire_time`
      self$`exec_inst` <- ApiClient$new()$deserializeObj(OrderDataObject$`exec_inst`, "array[character]", loadNamespace("openapi"))
      self
    }
  )
)
