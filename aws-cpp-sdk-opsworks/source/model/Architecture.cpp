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
#include <aws/opsworks/model/Architecture.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int x86_64_HASH = HashingUtils::HashString("x86_64");
static const int i386_HASH = HashingUtils::HashString("i386");

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
namespace ArchitectureMapper
{
Architecture GetArchitectureForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == x86_64_HASH)
  {
    return Architecture::x86_64;
  }
  else if (hashCode == i386_HASH)
  {
    return Architecture::i386;
  }

  return Architecture::NOT_SET;
}

Aws::String GetNameForArchitecture(Architecture value)
{
  switch(value)
  {
  case Architecture::x86_64:
    return "x86_64";
  case Architecture::i386:
    return "i386";
  default:
    return "";
  }
}

} // namespace ArchitectureMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
