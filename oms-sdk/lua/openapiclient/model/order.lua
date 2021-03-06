--[[
  OMS - REST API
 
  OMS Project
 
  The version of the OpenAPI document: v1
  
  Generated by: https://openapi-generator.tech
]]

-- order class
local order = {}
local order_mt = {
	__name = "order";
	__index = order;
}

local function cast_order(t)
	return setmetatable(t, order_mt)
end

local function new_order(type, exchange_name, data)
	return cast_order({
		["type"] = type;
		["exchange_name"] = exchange_name;
		["data"] = data;
	})
end

return {
	cast = cast_order;
	new = new_order;
}
