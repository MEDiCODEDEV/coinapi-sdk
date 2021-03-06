note
 description:"[
		OMS - REST API
 		OMS Project
  		The version of the OpenAPI document: v1
 	    

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"

class
	ORDERS_API

inherit

    API_I


feature -- API Access


	v1_orders_cancel_all_post (cancel_all_order: CANCEL_ALL_ORDER): detachable MESSAGES_OK
			-- Cancel all order
			-- Cancel all existing order.
			-- 
			-- argument: cancel_all_order  (required)
			-- 
			-- 
			-- Result MESSAGES_OK
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(cancel_all_order)
			l_path := "/v1/orders/cancel/all"


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<>>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { MESSAGES_OK } l_response.data ({ MESSAGES_OK }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	v1_orders_cancel_post (cancel_order: CANCEL_ORDER): detachable ORDER_LIVE
			-- Cancel order
			-- Cancel an existing order, can be used to cancel margin, exchange, and derivative orders. You can cancel the order by the internal order ID or exchange order ID.
			-- 
			-- argument: cancel_order  (required)
			-- 
			-- 
			-- Result ORDER_LIVE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(cancel_order)
			l_path := "/v1/orders/cancel"


			if attached {STRING} api_client.select_header_accept (<<"application/json", "appliction/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<>>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { ORDER_LIVE } l_response.data ({ ORDER_LIVE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	v1_orders_get (exchange_id: STRING_32): detachable LIST [ORDER]
			-- Get orders
			-- List your current open orders.
			-- 
			-- argument: exchange_id Exchange name (optional, default to null)
			-- 
			-- 
			-- Result LIST [ORDER]
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/v1/orders"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "exchange_id", exchange_id));


			if attached {STRING} api_client.select_header_accept (<<"application/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<>>),"Content-Type")
			l_request.set_auth_names (<<>>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { LIST [ORDER] } l_response.data ({ LIST [ORDER] }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	

	v1_orders_post (new_order: NEW_ORDER): detachable ORDER_LIVE
			-- Create new order
			-- You can place two types of orders: limit and market. Orders can only be placed if your account has sufficient funds.
			-- 
			-- argument: new_order  (required)
			-- 
			-- 
			-- Result ORDER_LIVE
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			l_request.set_body(new_order)
			l_path := "/v1/orders"


			if attached {STRING} api_client.select_header_accept (<<"application/json", "appliction/json">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type (<<"application/json">>),"Content-Type")
			l_request.set_auth_names (<<>>)
			l_response := api_client.call_api (l_path, "Post", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { ORDER_LIVE } l_response.data ({ ORDER_LIVE }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end	


end
