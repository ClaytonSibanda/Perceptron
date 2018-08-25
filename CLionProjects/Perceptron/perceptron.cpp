//
// Created by Nyasha on 2018/08/25.
//

#include <iostream>
#include "perceptron.h"

int perceptron::activation_fn(float value){

    return  value>=0?1:0;
}

float perceptron::predict(std::vector<float> &input){

    float sum=0;

    for(int i=0;i<input.size();++i){
        sum+=(input[i]*weights[i]);
    }

    return perceptron::activation_fn(sum);
}


void perceptron::train(std::vector<std::vector<float> > &inputs){
        float output=0;
        float error=0;
        for(int i=0;i<inputs.size();++i){

            output = predict(inputs[i]);

            //if its the expected then dont change the weight else apply the formula to change the weigth on the items
            error=target[i]-output;
            weights[0]+=error*inputs[i][0];
            weights[1]+=error*inputs[i][1];
        }

}