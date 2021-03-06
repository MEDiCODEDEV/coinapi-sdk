/**
 * OMS - REST API
 * OMS Project
 *
 * The version of the OpenAPI document: v1
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from '../model/models';

/* tslint:disable:no-unused-variable member-ordering */

export class OrdersApi {
    protected basePath = 'http://localhost:3001';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
     * Cancel all existing order.
     * @summary Cancel all order
     * @param cancelAllOrder 
     */
    public v1OrdersCancelAllPost (cancelAllOrder: models.CancelAllOrder, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.MessagesOk> {
        const localVarPath = this.basePath + '/v1/orders/cancel/all';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'cancelAllOrder' is not null or undefined
        if (cancelAllOrder === null || cancelAllOrder === undefined) {
            throw new Error('Required parameter cancelAllOrder was null or undefined when calling v1OrdersCancelAllPost.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: cancelAllOrder,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * Cancel an existing order, can be used to cancel margin, exchange, and derivative orders. You can cancel the order by the internal order ID or exchange order ID.
     * @summary Cancel order
     * @param cancelOrder 
     */
    public v1OrdersCancelPost (cancelOrder: models.CancelOrder, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.OrderLive> {
        const localVarPath = this.basePath + '/v1/orders/cancel';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'cancelOrder' is not null or undefined
        if (cancelOrder === null || cancelOrder === undefined) {
            throw new Error('Required parameter cancelOrder was null or undefined when calling v1OrdersCancelPost.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: cancelOrder,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * List your current open orders.
     * @summary Get orders
     * @param exchangeId Exchange name
     */
    public v1OrdersGet (exchangeId?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<Array<models.Order>> {
        const localVarPath = this.basePath + '/v1/orders';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        if (exchangeId !== undefined) {
            queryParameters['exchange_id'] = exchangeId;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
     * You can place two types of orders: limit and market. Orders can only be placed if your account has sufficient funds.
     * @summary Create new order
     * @param newOrder 
     */
    public v1OrdersPost (newOrder: models.NewOrder, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.OrderLive> {
        const localVarPath = this.basePath + '/v1/orders';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'newOrder' is not null or undefined
        if (newOrder === null || newOrder === undefined) {
            throw new Error('Required parameter newOrder was null or undefined when calling v1OrdersPost.');
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: newOrder,
            params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
}
