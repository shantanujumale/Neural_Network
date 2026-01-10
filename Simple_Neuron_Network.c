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


#include<stdio.h>

int step_function(float net){
    return(net>0) ? 1 : 0;
}

int main(){

    // Traning data for AND gate
    int x[4][2] = {{0.0},{0,1},{1,0},{1,1}};
    int targe[4] = {0,0,0,0};    
    float w[2] = {0.0,0.0};    // initial weight    
    float bias = -0.5;         // initial bias

    float learning_rate=0.1;
    int epochs=10;
    int epoch,i;
    float net;
    int output;
    int error;

    for (epoch = 0;epoch<epochs; epoch++){
        printf("\n Epoch %d \n",epoch+1);

        for(i=0;i<4;i++){
            //comput net input
            net=x[1][0] *  w[0] +x[i][1] * w[1] +bias;
            output=step_function(net);

            // comput error
            error=targe[i] - output;

            //update wights and bias

            w[0] = w[0] + learning_rate * error * x[i][0];
            w[1] = w[1] + learning_rate * error * x[i][1];
            bias = bias +learning_rate * error;

            printf("input %d %d output %d error : %d w1: %.2f w2: %.2f bais: %.2f\n",x[i][0],x[i][1],output,error,w[0],w[1],bias);
        }
    }

    printf("\nfinal weight: w1 = %.2f,  w2 = %.2f, bais =  %.2f\n",w[0],w[1],bias);

    return 0;
}
