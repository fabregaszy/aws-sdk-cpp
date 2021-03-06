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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /*
  */
  class AWS_KINESIS_API IncreaseStreamRetentionPeriodRequest : public KinesisRequest
  {
  public:
    IncreaseStreamRetentionPeriodRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    
    inline IncreaseStreamRetentionPeriodRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    
    inline IncreaseStreamRetentionPeriodRequest& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    
    inline IncreaseStreamRetentionPeriodRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    
    inline long GetRetentionPeriodHours() const{ return m_retentionPeriodHours; }

    
    inline void SetRetentionPeriodHours(long value) { m_retentionPeriodHoursHasBeenSet = true; m_retentionPeriodHours = value; }

    
    inline IncreaseStreamRetentionPeriodRequest& WithRetentionPeriodHours(long value) { SetRetentionPeriodHours(value); return *this;}

  private:
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    long m_retentionPeriodHours;
    bool m_retentionPeriodHoursHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
