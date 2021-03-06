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
#include <aws/kms/model/CreateKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateKeyRequest::CreateKeyRequest() : 
    m_policyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyUsageHasBeenSet(false)
{
}

Aws::String CreateKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_keyUsageHasBeenSet)
  {
   payload.WithString("KeyUsage", KeyUsageTypeMapper::GetNameForKeyUsageType(m_keyUsage));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateKey"));
  return std::move(headers);

}



