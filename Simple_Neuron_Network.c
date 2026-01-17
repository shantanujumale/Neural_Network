// --------------------------------- Artifical Neuron ------------------------------


// #include<stdio.h>

// int main() {
    
//     float x1=1.0;
//     float x2=0.0;

//     float w1=0.7;
//     float w2=0.5;

//     float bias=-0.2;
//     float net;
//     int output;

//     net = (x1 * w1) + (x2 * w2) + bias;

//     if (net>=0){
//         output = 1;
    
//     }
//     else{
//         output = 0;

//     }
//     printf("Input1 = %.1f, x2 = %.1f\n",x1,x2);
//     printf("net input = %.2f\n",net);
//     printf("neural network output = %d\n",output);


    
//     return 0;
// }



// ---------------------------------------------------------------------------------
// ----------------------------- Neuron Model using AND and OR ----------------------------



// #include<stdio.h>

//     int mcculloch_pitts(int x[], int w[], int n, int thr){
//         int sum = 0;
        
//         for (int i=0; i<n;i++){
//             sum+=x[i]*w[i];
//         }
        
//         if (sum>thr){
//             return 1;
//         }
        
//         else{
//             return 0;
//         }
//     }
        
// int main(){
    
//     int x[2]; //input
//     int w[2]={
//         1,
//         1
//     };  // weight

//     int thr;

//     printf("Enter input (0 or 1): \n");
//     printf("x1: ");
//     scanf("%d",&x[0]);

//     printf("x2: ");
//     scanf("%d",&x[1]);


//     //AND gate
//     thr=2;
//     printf("\n AND gate output: %d",mcculloch_pitts(x,w,2,thr));

//     //OR gate

//     thr=1;

//     printf("\n OR gate output: %d\n",mcculloch_pitts(x,w,2,thr));

//     return 0;
// }



// ---------------------------------------------------------------------------------

// --------------------------------- Perceptron Model ------------------------------


// #include<stdio.h>

// int step_function(int net){

//     if (net>=0){
//         return 1;
//     }

//     else{
//         return 0;
//     }
// }

// int main(){

//     int x[4][2] = {{0.0},{0,1},{1,0},{1,1}};
//     int targe[4] = {0,0,0,0};    // AND gate output
//     float w[2] = {0.0,0.0};     // inttial weights


//     float bias = -0.5;
//     float learning_rate=0.1;
//     int epoch,i;
//     float net;
//     int output;
//     int error;

//     for (epoch = 0;epoch<10; epoch++){
//         printf("\n Epoch %d \n",epoch+1);

//         for(i=0;i<4;i++){
//             net=x[1][0] *  w[0] +x[i][1] * w[1] +bias;
//             output=step_function(net);
//             error=targe[i] - output;

//             //weight update

//             w[0] = w[0] + learning_rate * error * x[i][0];
//             w[1] = w[1] + learning_rate * error * x[i][1];
//             bias = bias +learning_rate * error;

//             printf("input %d %d output %d error : %d\n",x[i][0],x[i][1],output,error);
//         }
//     }

//     print("\nfinal weight: w1 = %.2f,  w2 = %.2f, bais =  %.2f\n",w[0],w[1],bias);

//     return 0;
// }



// ---------------------------------------------------------------------------------

// ----------------------------- Adaptive Neuron Model ----------------------------


// #include<stdio.h>

// int step_function(float net){
//     return(net>0) ? 1 : 0;
// }

// int main(){

//     // Traning data for AND gate
//     int x[4][2] = {{0.0},{0,1},{1,0},{1,1}};
//     int targe[4] = {0,0,0,0};    
//     float w[2] = {0.0,0.0};    // initial weight    
//     float bias = -0.5;         // initial bias

//     float learning_rate=0.1;
//     int epochs=10;
//     int epoch,i;
//     float net;
//     int output;
//     int error;

//     for (epoch = 0;epoch<epochs; epoch++){
//         printf("\n Epoch %d \n",epoch+1);

//         for(i=0;i<4;i++){
//             //comput net input
//             net=x[1][0] *  w[0] +x[i][1] * w[1] +bias;
//             output=step_function(net);

//             // comput error
//             error=targe[i] - output;

//             //update wights and bias

//             w[0] = w[0] + learning_rate * error * x[i][0];
//             w[1] = w[1] + learning_rate * error * x[i][1];
//             bias = bias +learning_rate * error;

//             printf("input %d %d output %d error : %d w1: %.2f w2: %.2f bais: %.2f\n",x[i][0],x[i][1],output,error,w[0],w[1],bias);
//         }
//     }

//     printf("\nfinal weight: w1 = %.2f,  w2 = %.2f, bais =  %.2f\n",w[0],w[1],bias);

//     return 0;
// }


// ----------------------------- Feedback Nerural Network ----------------------------


// #include<stdio.h>
// #include <math.h>


//     double sigmoid(double x){
//         return 1.0/(1.9 + exp(-x));
        
//     }
    
// int main(){
//     //inputs
//     double input[2] = {1.0, 0.5};
    
//     double weight_input_hidden[2][2] = {
//         {0.15,0.20},
//         {0.25,0.30}
//     };

// //bias hidden layer
//     double bias_hidden[2] = {0.35,0.35};
  
//   //weight from hiddern to output layer
//   double weight_hidden_output[2] =  {0.40,0.45};
  
//   //bias for output layer
//   double bias_output = 0.60;
  
//   //hidden layer output
//   double hidden[2];
  
//   //foreard pass: input--> hidden
//   for (int i=0;i<2;i++){
//       hidden[i]=bias_hidden[i];
//       for(int j=0;j<2;j++){
//           hidden[i]+=input[j] * weight_input_hidden[j][i];
//       }
//       hidden[i]=sigmoid(hidden[i]);
//   }

//   //forward pass: hidden --> output
//   double output = bias_output;
//   for(int i=0;i < 2;i++){
//     output += hidden[i] * weight_hidden_output[i];
//   }
//   output=sigmoid(output);

//   //print result
//   printf("output of the neural network: %.6f\n",output);

//   return 0;
// }
  
// ----------------------------- Feedback Nerural Network prime number----------------------------

#include <stdio.h>

// activation function (simple linear)
float activation(float x) {
    return x;
}

int main() {
    float input[5];
    float weight_input;
    int n[100];
    float weight_feedback = 0.4;
    float output = 0.0;   // initial previous output

    // take weight input
    printf("Enter n: ");
    scanf("%f", &n);

    // take input values from user
    printf("Enter  input values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &n[i]);
    }
    
    int isprime[n];
    
     for (i = 1; i <= n; i++) {


    printf("\nTime\tInput\tOutput\n");

    for (int t = 0; t < 5; t++) {
        output = activation(
            input[t] * weight_input + output * weight_feedback
        );
        printf("%d\t%.2f\t%.2f\n", t, input[t], output);
    }

    return 0;
}




