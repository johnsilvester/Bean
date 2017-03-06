//
//  BlobDescriptor.cpp
//  BeanCounter
//
//  Created by John Silvester on 12/2/16.
//  Copyright © 2016 FlyPhone. All rights reserved.
//

#include <stdio.h>
#include "BlobDescriptor.h"

BlobDescriptor::BlobDescriptor(const cv::Mat &normalizedHistogram, const cv::Mat &keypointDescriptors, uint32_t label)
: normalizedHistogram(normalizedHistogram)
, keypointDescriptors(keypointDescriptors)
, label(label)
{
}

const cv::Mat &BlobDescriptor::getNormalizedHistogram() const {
    return normalizedHistogram;
}

const cv::Mat &BlobDescriptor::getKeypointDescriptors() const {
    return keypointDescriptors;
}

uint32_t BlobDescriptor::getLabel() const {
    return label;
}
