//
// Created by Nyasha on 2018/08/25.
//

#ifndef PERCEPTRON_PERCEPTRON_H
#define PERCEPTRON_PERCEPTRON_H

#include <vector>
class perceptron {


    std::vector<float> weights;
    std::vector<std::vector<float> > inputs;
    float learning_rate =0.1;
   std::vector<int>target;


public:

    perceptron(std::vector<float> _weights,std::vector<std::vector<float> > _inputs,std::vector<int> _target):
                        weights(std::move(_weights)),inputs(std::move(_inputs)),target(std::move(_target)){};


    int activation_fn(float value){};
   int predict(std::vector<float> &input){};

   void train(std::vector<std::vector<float> > &inputs){};





};


#endif //PERCEPTRON_PERCEPTRON_H
