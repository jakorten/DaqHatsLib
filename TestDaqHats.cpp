#include <stdint.h>
#include <string.h>
#include "DaqhatsLib.hpp"
#include "daqhats_utils.h"

void initDAQ_HAT();

int main() {
    //DaqhatsLib daqhats;
    //daqhats.someFunction();
    // ... more tests ...
    //initDAQ_HAT();
}
/*
void initDAQ_HAT() {
    uint8_t address;
    uint8_t channel;
    double value;
    uint8_t low_chan;
    uint8_t high_chan;
    uint8_t tc_type = TC_TYPE_J;    // change this to desired thermocouple type
    char c;
    int result = RESULT_SUCCESS;
    int samples_per_channel = 0;
    int delay_between_reads = 1000;  // ms
    int num_channels = mcc134_info()->NUM_AI_CHANNELS;
    char tc_type_str[10];

}*/