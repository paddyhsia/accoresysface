//
// Created by jbk on 19-3-14.
//

#ifndef LOADPARAM_POOLING_LAYER_H
#define LOADPARAM_POOLING_LAYER_H

#include "layer.hpp"
#include "transformer_param.hpp"

using std::vector;
using std::shared_ptr;
using std::string;

namespace caffe{

    class PoolLayer : public Layer
    {
    public:
        PoolLayer(){}
        ~PoolLayer(){}
        void SetUp(const LayerParameter& param, const vector<pair<string, shared_ptr<Blob>>>& bottom, vector<pair<string, shared_ptr<Blob>>>& top);
        void Forward(const const vector<pair<string, shared_ptr<Blob>>>& bottom, vector<pair<string, shared_ptr<Blob>>>& top);

    private:
        void calc_shape_(const vector<int>& in_shape, vector<int>& out_shape);
    };

}

#endif
