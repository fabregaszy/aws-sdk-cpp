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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/GrantListEntry.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_KMS_API ListRetirableGrantsResult
  {
  public:
    ListRetirableGrantsResult();
    ListRetirableGrantsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRetirableGrantsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /*
     <p>A list of grants.</p>
    */
    inline const Aws::Vector<GrantListEntry>& GetGrants() const{ return m_grants; }

    /*
     <p>A list of grants.</p>
    */
    inline void SetGrants(const Aws::Vector<GrantListEntry>& value) { m_grants = value; }

    /*
     <p>A list of grants.</p>
    */
    inline void SetGrants(Aws::Vector<GrantListEntry>&& value) { m_grants = value; }

    /*
     <p>A list of grants.</p>
    */
    inline ListRetirableGrantsResult& WithGrants(const Aws::Vector<GrantListEntry>& value) { SetGrants(value); return *this;}

    /*
     <p>A list of grants.</p>
    */
    inline ListRetirableGrantsResult& WithGrants(Aws::Vector<GrantListEntry>&& value) { SetGrants(value); return *this;}

    /*
     <p>A list of grants.</p>
    */
    inline ListRetirableGrantsResult& AddGrants(const GrantListEntry& value) { m_grants.push_back(value); return *this; }

    /*
     <p>A list of grants.</p>
    */
    inline ListRetirableGrantsResult& AddGrants(GrantListEntry&& value) { m_grants.push_back(value); return *this; }

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline ListRetirableGrantsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline ListRetirableGrantsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /*
     <p>If <code>Truncated</code> is true, this value is present and contains the value to use for the <code>Marker</code> request parameter in a subsequent pagination request. </p>
    */
    inline ListRetirableGrantsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /*
     <p>A flag that indicates whether there are more items in the list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more grants in the list. </p>
    */
    inline bool GetTruncated() const{ return m_truncated; }

    /*
     <p>A flag that indicates whether there are more items in the list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more grants in the list. </p>
    */
    inline void SetTruncated(bool value) { m_truncated = value; }

    /*
     <p>A flag that indicates whether there are more items in the list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more grants in the list. </p>
    */
    inline ListRetirableGrantsResult& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:
    Aws::Vector<GrantListEntry> m_grants;
    Aws::String m_nextMarker;
    bool m_truncated;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
