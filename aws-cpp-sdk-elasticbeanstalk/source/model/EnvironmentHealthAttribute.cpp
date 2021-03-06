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
#include <aws/elasticbeanstalk/model/EnvironmentHealthAttribute.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Status_HASH = HashingUtils::HashString("Status");
static const int Color_HASH = HashingUtils::HashString("Color");
static const int Causes_HASH = HashingUtils::HashString("Causes");
static const int ApplicationMetrics_HASH = HashingUtils::HashString("ApplicationMetrics");
static const int InstancesHealth_HASH = HashingUtils::HashString("InstancesHealth");
static const int All_HASH = HashingUtils::HashString("All");
static const int HealthStatus_HASH = HashingUtils::HashString("HealthStatus");
static const int RefreshedAt_HASH = HashingUtils::HashString("RefreshedAt");

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
namespace EnvironmentHealthAttributeMapper
{
EnvironmentHealthAttribute GetEnvironmentHealthAttributeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Status_HASH)
  {
    return EnvironmentHealthAttribute::Status;
  }
  else if (hashCode == Color_HASH)
  {
    return EnvironmentHealthAttribute::Color;
  }
  else if (hashCode == Causes_HASH)
  {
    return EnvironmentHealthAttribute::Causes;
  }
  else if (hashCode == ApplicationMetrics_HASH)
  {
    return EnvironmentHealthAttribute::ApplicationMetrics;
  }
  else if (hashCode == InstancesHealth_HASH)
  {
    return EnvironmentHealthAttribute::InstancesHealth;
  }
  else if (hashCode == All_HASH)
  {
    return EnvironmentHealthAttribute::All;
  }
  else if (hashCode == HealthStatus_HASH)
  {
    return EnvironmentHealthAttribute::HealthStatus;
  }
  else if (hashCode == RefreshedAt_HASH)
  {
    return EnvironmentHealthAttribute::RefreshedAt;
  }

  return EnvironmentHealthAttribute::NOT_SET;
}

Aws::String GetNameForEnvironmentHealthAttribute(EnvironmentHealthAttribute value)
{
  switch(value)
  {
  case EnvironmentHealthAttribute::Status:
    return "Status";
  case EnvironmentHealthAttribute::Color:
    return "Color";
  case EnvironmentHealthAttribute::Causes:
    return "Causes";
  case EnvironmentHealthAttribute::ApplicationMetrics:
    return "ApplicationMetrics";
  case EnvironmentHealthAttribute::InstancesHealth:
    return "InstancesHealth";
  case EnvironmentHealthAttribute::All:
    return "All";
  case EnvironmentHealthAttribute::HealthStatus:
    return "HealthStatus";
  case EnvironmentHealthAttribute::RefreshedAt:
    return "RefreshedAt";
  default:
    return "";
  }
}

} // namespace EnvironmentHealthAttributeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
