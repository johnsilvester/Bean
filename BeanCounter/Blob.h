//
//  Blob.h
//  BeanCounter
//
//  Created by John Silvester on 12/2/16.
//  Copyright © 2016 FlyPhone. All rights reserved.
//

#ifndef Blob_h
#define Blob_h
#include <opencv2/core.hpp>
class Blob
{
public:
    Blob(const cv::Mat &mat, uint32_t label = 0ul);
    
    /**
     * Construct an empty blob.
     */
    Blob();
    
    /**
     * Construct a blob by copying another blob.
     */
    Blob(const Blob &other);
    
    bool isEmpty() const;
    
    uint32_t getLabel() const;
    void setLabel(uint32_t value);
    
    const cv::Mat &getMat() const;
    int getWidth() const;
    int getHeight() const;
    int getSize() const;
    
private:
    uint32_t label;
    
    cv::Mat mat;
};


#endif /* Blob_h */
