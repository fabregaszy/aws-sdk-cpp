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
#include <aws/s3/model/RequestCharged.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int requester_HASH = HashingUtils::HashString("requester");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace RequestChargedMapper
{
RequestCharged GetRequestChargedForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == requester_HASH)
  {
    return RequestCharged::requester;
  }

  return RequestCharged::NOT_SET;
}

Aws::String GetNameForRequestCharged(RequestCharged value)
{
  switch(value)
  {
  case RequestCharged::requester:
    return "requester";
  default:
    return "";
  }
}

} // namespace RequestChargedMapper
} // namespace Model
} // namespace S3
} // namespace Aws
