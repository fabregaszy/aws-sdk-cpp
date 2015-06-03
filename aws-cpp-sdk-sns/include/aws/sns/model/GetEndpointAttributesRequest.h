/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /*
    <p>Input for GetEndpointAttributes action.</p>
  */
  class AWS_SNS_API GetEndpointAttributesRequest : public SNSRequest
  {
  public:
    GetEndpointAttributesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>EndpointArn for GetEndpointAttributes input.</p>
    */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    /*
     <p>EndpointArn for GetEndpointAttributes input.</p>
    */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }

    /*
     <p>EndpointArn for GetEndpointAttributes input.</p>
    */
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }

    /*
     <p>EndpointArn for GetEndpointAttributes input.</p>
    */
    inline GetEndpointAttributesRequest&  WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /*
     <p>EndpointArn for GetEndpointAttributes input.</p>
    */
    inline GetEndpointAttributesRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}

  private:
    Aws::String m_endpointArn;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws