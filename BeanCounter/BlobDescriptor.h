//
//  BlobDescriptor.h
//  BeanCounter
//
//  Created by John Silvester on 12/2/16.
//  Copyright © 2016 FlyPhone. All rights reserved.
//

#ifndef BlobDescriptor_h
#define BlobDescriptor_h

#include <opencv2/core.hpp>

class BlobDescriptor
{
public:
    BlobDescriptor(const cv::Mat &normalizedHistogram, const cv::Mat &keypointDescriptors, uint32_t label);
    
    const cv::Mat &getNormalizedHistogram() const;
    const cv::Mat &getKeypointDescriptors() const;
    uint32_t getLabel() const;
    
private:
    cv::Mat normalizedHistogram;
    cv::Mat keypointDescriptors;
    uint32_t label;
};


#endif /* BlobDescriptor_h */
