#include <stdio.h>


float celsius_to_fahrenheit (float celsius){
    float F=0;
    F = (1.8*celsius)+32;
    return F; 
}

float fahrenheit_to_celsius (float fahrenheit){
    float C;
    C = (5.0/9)*(fahrenheit- 32);
    return C;
}

float celsius_to_kelvin (float celsius){
    float K;
    K = celsius + 273.15;
    return K;
}

float kelvin_to_celsius(float kelvin){
    float C;
    C = kelvin - 273.15; 
    return C;
}


float temperature_category(float temperature){
    if (temperature < 0){
        printf("Temperature category: Freezing ");
        printf("\n");
        printf("Weather advisory: Wear a heavy jacket and glowes / Stay Indoors ");
    }
    else if (0 <= temperature < 10 ){
        printf("Temperature category: Cold ");
        printf("\n");
        printf("Weather advisory: Wear a heavy jacket");
    }
    else if (10<= temperature < 25){
        printf("Temperature category: Comfortable ");
        printf("\n");
        printf("Weather advisory : Good Comfortable ");
    }
    else if (25<= temperature < 35){
        printf("Temperature category: Hot");
        printf("\n");
        printf(" Weather advisory : Stay hydrated ");
    }
    else if (temperature > 35){
        printf("Temperature category: Extreme hot");
        printf("\n");
        printf(" Weather advisory : Stay hydrated and stay indoors");
    }
    return 0 ;
}


int main(){
    float temp;
    int temp_in; 
    int temp_out;
    float temp_func;
    float celsius_temp; 
    printf("Enter the temperature ; ");
    scanf("%f", &temp);
    printf("\n");
    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%i", &temp_in);
    printf("\n");
    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%i", &temp_out);
    printf("\n");
    if (temp_in == 1 && temp_out == 2){
        celsius_temp=temp;
        temp_func=celsius_to_fahrenheit(temp);
    }
    else if (temp_in==2 && temp_out==1){
        temp_func=fahrenheit_to_celsius(temp);
        celsius_temp=temp_func;
    }
    else if (temp_in == 1 && temp_out == 3){
        celsius_temp=temp;
        temp_func = celsius_to_kelvin(temp); 
    }
    else if (temp_in == 3 && temp_out == 1){
        temp_func = kelvin_to_celsius(temp);
        celsius_temp=temp_func;
    }
    else if (temp_in == 2 && temp_out == 3 ){
        temp_func=fahrenheit_to_celsius(temp);
        celsius_temp=temp_func;
        temp_func=celsius_to_kelvin(temp);
    }
    else if (temp_in == 3 && temp_out == 2 ){
        temp_func=kelvin_to_celsius(temp);
        celsius_temp=temp_func;
        temp_func=celsius_to_fahrenheit(temp);
    }

    printf("Converted temperature: %f", temp_func);
    printf("\n");
    temperature_category(celsius_temp);

}