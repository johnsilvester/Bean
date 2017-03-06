//
//  BlobClassifier.h
//  BeanCounter
//
//  Created by John Silvester on 12/2/16.
//  Copyright © 2016 FlyPhone. All rights reserved.
//

#ifndef BlobClassifier_h
#define BlobClassifier_h

#import "Blob.h"
#import "BlobDescriptor.h"

#include <opencv2/features2d.hpp>

class BlobClassifier
{
public:
    BlobClassifier();
    
    /**
     * Add a reference blob to the classification model.
     */
    void update(const Blob &referenceBlob);
    
    /**
     * Clear the classification model.
     */
    void clear();
    
    /**
     * Classify a blob that was detected in a scene.
     */
    void classify(Blob &detectedBlob) const;
    
private:
    BlobDescriptor createBlobDescriptor(const Blob &blob) const;
    float findDistance(const BlobDescriptor &detectedBlobDescriptor, const BlobDescriptor &referenceBlobDescriptor) const;
    
    /**
     * An adaptive equalizer to enhance local contrast.
     */
    cv::Ptr<cv::CLAHE> clahe;
    
    /**
     * A feature detector and descriptor extractor.
     * It finds features in images.
     * Then, it creates descriptors of the features.
     */
    cv::Ptr<cv::Feature2D> featureDetectorAndDescriptorExtractor;
    
    /**
     * A descriptor matcher.
     * It matches features based on their descriptors.
     */
    cv::Ptr<cv::DescriptorMatcher> descriptorMatcher;
    
    /**
     * Descriptors of the reference blobs.
     */
    std::vector<BlobDescriptor> referenceBlobDescriptors;
};


#endif /* BlobClassifier_h */
