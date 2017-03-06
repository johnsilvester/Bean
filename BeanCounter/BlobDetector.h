//
//  BlobDetector.h
//  BeanCounter
//
//  Created by John Silvester on 12/2/16.
//  Copyright © 2016 FlyPhone. All rights reserved.
//

#ifndef BlobDetector_h
#define BlobDetector_h
#include "Blob.h"
class BlobDetector
{
public:
    void detect(cv::Mat &image, std::vector<Blob> &blob, double resizeFactor = 1.0, bool draw = false);
    
    const cv::Mat &getMask() const;
    
private:
    void createMask(const cv::Mat &image);
    
    cv::Mat resizedImage;
    cv::Mat mask;
    cv::Mat edges;
    std::vector<std::vector<cv::Point>> contours;
    std::vector<cv::Vec4i> hierarchy;
};


#endif /* BlobDetector_h */


