# coding: utf-8

"""
    OMS - REST API

    OMS Project  # noqa: E501

    The version of the OpenAPI document: v1
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.cancel_order import CancelOrder  # noqa: E501
from openapi_client.rest import ApiException

class TestCancelOrder(unittest.TestCase):
    """CancelOrder unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test CancelOrder
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.cancel_order.CancelOrder()  # noqa: E501
        if include_optional :
            return CancelOrder(
                exchange_id = 'KRAKEN', 
                exchange_order_id = 'd8574207d9e3b16a4a5511753eeef1751', 
                client_order_id = 'A12345'
            )
        else :
            return CancelOrder(
        )

    def testCancelOrder(self):
        """Test CancelOrder"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
