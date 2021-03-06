--  OMS _ REST API
--  OMS Project
--
--  The version of the OpenAPI document: v1
--  
--
--  NOTE: This package is auto generated by OpenAPI-Generator 4.3.1.
--  https://openapi-generator.tech
--  Do not edit the class manually.

with .Models;
with Swagger.Clients;
package .Clients is

   type Client_Type is new Swagger.Clients.Client_Type with null record;

   --  Get balances
   --  Returns all of your balances, including available balance.
   procedure V1_Balances_Get
      (Client : in out Client_Type;
       Exchange_Id : in Swagger.Nullable_UString;
       Result : out .Models.Balance_Type_Vectors.Vector);

   --  Cancel all order
   --  Cancel all existing order.
   procedure V1_Orders_Cancel_All_Post
      (Client : in out Client_Type;
       Cancel_All_Order_Type : in .Models.CancelAllOrder_Type;
       Result : out .Models.MessagesOk_Type);

   --  Cancel order
   --  Cancel an existing order, can be used to cancel margin, exchange, and derivative orders. You can cancel the order by the internal order ID or exchange order ID.
   procedure V1_Orders_Cancel_Post
      (Client : in out Client_Type;
       Cancel_Order_Type : in .Models.CancelOrder_Type;
       Result : out .Models.OrderLive_Type);

   --  Get orders
   --  List your current open orders.
   procedure V1_Orders_Get
      (Client : in out Client_Type;
       Exchange_Id : in Swagger.Nullable_UString;
       Result : out .Models.Order_Type_Vectors.Vector);

   --  Create new order
   --  You can place two types of orders: limit and market. Orders can only be placed if your account has sufficient funds.
   procedure V1_Orders_Post
      (Client : in out Client_Type;
       New_Order_Type : in .Models.NewOrder_Type;
       Result : out .Models.OrderLive_Type);

   --  Get positions
   --  Returns all of your positions.
   procedure V1_Positions_Get
      (Client : in out Client_Type;
       Exchange_Id : in Swagger.Nullable_UString;
       Result : out .Models.Position_Type_Vectors.Vector);

end .Clients;
