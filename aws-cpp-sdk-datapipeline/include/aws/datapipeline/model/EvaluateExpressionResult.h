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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace DataPipeline
{
namespace Model
{
  /*
    <p>Contains the output of EvaluateExpression.</p>
  */
  class AWS_DATAPIPELINE_API EvaluateExpressionResult
  {
  public:
    EvaluateExpressionResult();
    EvaluateExpressionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    EvaluateExpressionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /*
     <p>The evaluated expression.</p>
    */
    inline const Aws::String& GetEvaluatedExpression() const{ return m_evaluatedExpression; }

    /*
     <p>The evaluated expression.</p>
    */
    inline void SetEvaluatedExpression(const Aws::String& value) { m_evaluatedExpression = value; }

    /*
     <p>The evaluated expression.</p>
    */
    inline void SetEvaluatedExpression(Aws::String&& value) { m_evaluatedExpression = value; }

    /*
     <p>The evaluated expression.</p>
    */
    inline void SetEvaluatedExpression(const char* value) { m_evaluatedExpression.assign(value); }

    /*
     <p>The evaluated expression.</p>
    */
    inline EvaluateExpressionResult& WithEvaluatedExpression(const Aws::String& value) { SetEvaluatedExpression(value); return *this;}

    /*
     <p>The evaluated expression.</p>
    */
    inline EvaluateExpressionResult& WithEvaluatedExpression(Aws::String&& value) { SetEvaluatedExpression(value); return *this;}

    /*
     <p>The evaluated expression.</p>
    */
    inline EvaluateExpressionResult& WithEvaluatedExpression(const char* value) { SetEvaluatedExpression(value); return *this;}

  private:
    Aws::String m_evaluatedExpression;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
