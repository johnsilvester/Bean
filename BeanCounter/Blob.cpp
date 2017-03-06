//
//  Blob.cpp
//  BeanCounter
//
//  Created by John Silvester on 12/2/16.
//  Copyright © 2016 FlyPhone. All rights reserved.
//

#include <stdio.h>
#import "Blob.h"

Blob::Blob(const cv::Mat &mat, uint32_t label)
: label(label)
{
    mat.copyTo(this->mat);
}

Blob::Blob() {
}

Blob::Blob(const Blob &other)
: label(other.label)
{
    other.mat.copyTo(mat);
}

bool Blob::isEmpty() const {
    return mat.empty();
}

uint32_t Blob::getLabel() const {
    return label;
}

void Blob::setLabel(uint32_t value) {
    label = value;
}

const cv::Mat &Blob::getMat() const {
    return mat;
}

int Blob::getWidth() const {
    return mat.cols;
}

int Blob::getHeight() const {
    return mat.rows;
}

int Blob::getSize() const {
    return (mat.cols) * (mat.rows);
}

