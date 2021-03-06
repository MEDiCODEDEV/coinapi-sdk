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
class POSITION_DATA 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable STRING_32 
      -- Unique position ID
    symbol_exchange: detachable STRING_32 
      -- The contract for this position.
    symbol_coinapi: detachable STRING_32 
      -- The coinapi contract for this position.
    avg_entry_price: REAL_32 
      
    quantity: REAL_32 
      -- The current position amount in contracts.
    is_buy: BOOLEAN 
      
    unrealised_pn_l: REAL_32 
      -- Unrealised PNL is all the unrealised profit or loss coming from your portfolio's open positions.
    leverage: REAL_32 
      -- 1 / initMarginReq.
    cross_margin: BOOLEAN 
      -- True/false depending on whether you set cross margin on this position.
    liquidation_price: REAL_32 
      -- Once markPrice reaches this price, this position will be liquidated.
    raw_data: detachable STRING_32 
      

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_symbol_exchange (a_name: like symbol_exchange)
        -- Set 'symbol_exchange' with 'a_name'.
      do
        symbol_exchange := a_name
      ensure
        symbol_exchange_set: symbol_exchange = a_name		
      end

    set_symbol_coinapi (a_name: like symbol_coinapi)
        -- Set 'symbol_coinapi' with 'a_name'.
      do
        symbol_coinapi := a_name
      ensure
        symbol_coinapi_set: symbol_coinapi = a_name		
      end

    set_avg_entry_price (a_name: like avg_entry_price)
        -- Set 'avg_entry_price' with 'a_name'.
      do
        avg_entry_price := a_name
      ensure
        avg_entry_price_set: avg_entry_price = a_name		
      end

    set_quantity (a_name: like quantity)
        -- Set 'quantity' with 'a_name'.
      do
        quantity := a_name
      ensure
        quantity_set: quantity = a_name		
      end

    set_is_buy (a_name: like is_buy)
        -- Set 'is_buy' with 'a_name'.
      do
        is_buy := a_name
      ensure
        is_buy_set: is_buy = a_name		
      end

    set_unrealised_pn_l (a_name: like unrealised_pn_l)
        -- Set 'unrealised_pn_l' with 'a_name'.
      do
        unrealised_pn_l := a_name
      ensure
        unrealised_pn_l_set: unrealised_pn_l = a_name		
      end

    set_leverage (a_name: like leverage)
        -- Set 'leverage' with 'a_name'.
      do
        leverage := a_name
      ensure
        leverage_set: leverage = a_name		
      end

    set_cross_margin (a_name: like cross_margin)
        -- Set 'cross_margin' with 'a_name'.
      do
        cross_margin := a_name
      ensure
        cross_margin_set: cross_margin = a_name		
      end

    set_liquidation_price (a_name: like liquidation_price)
        -- Set 'liquidation_price' with 'a_name'.
      do
        liquidation_price := a_name
      ensure
        liquidation_price_set: liquidation_price = a_name		
      end

    set_raw_data (a_name: like raw_data)
        -- Set 'raw_data' with 'a_name'.
      do
        raw_data := a_name
      ensure
        raw_data_set: raw_data = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass POSITION_DATA%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached symbol_exchange as l_symbol_exchange then
          Result.append ("%Nsymbol_exchange:")
          Result.append (l_symbol_exchange.out)
          Result.append ("%N")    
        end  
        if attached symbol_coinapi as l_symbol_coinapi then
          Result.append ("%Nsymbol_coinapi:")
          Result.append (l_symbol_coinapi.out)
          Result.append ("%N")    
        end  
        if attached avg_entry_price as l_avg_entry_price then
          Result.append ("%Navg_entry_price:")
          Result.append (l_avg_entry_price.out)
          Result.append ("%N")    
        end  
        if attached quantity as l_quantity then
          Result.append ("%Nquantity:")
          Result.append (l_quantity.out)
          Result.append ("%N")    
        end  
        if attached is_buy as l_is_buy then
          Result.append ("%Nis_buy:")
          Result.append (l_is_buy.out)
          Result.append ("%N")    
        end  
        if attached unrealised_pn_l as l_unrealised_pn_l then
          Result.append ("%Nunrealised_pn_l:")
          Result.append (l_unrealised_pn_l.out)
          Result.append ("%N")    
        end  
        if attached leverage as l_leverage then
          Result.append ("%Nleverage:")
          Result.append (l_leverage.out)
          Result.append ("%N")    
        end  
        if attached cross_margin as l_cross_margin then
          Result.append ("%Ncross_margin:")
          Result.append (l_cross_margin.out)
          Result.append ("%N")    
        end  
        if attached liquidation_price as l_liquidation_price then
          Result.append ("%Nliquidation_price:")
          Result.append (l_liquidation_price.out)
          Result.append ("%N")    
        end  
        if attached raw_data as l_raw_data then
          Result.append ("%Nraw_data:")
          Result.append (l_raw_data.out)
          Result.append ("%N")    
        end  
      end
end


