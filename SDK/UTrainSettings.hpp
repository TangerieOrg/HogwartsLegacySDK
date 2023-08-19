#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTrainSettings : public UObject {
public:
    char pad_28[0x78];
    bool bIncludeCoalCar; // 0xa0
    char pad_a1[0x3];
    int32_t NumOfPassengerCars; // 0xa4
    float MinScreenSize; // 0xa8
    char pad_ac[0x4];
    static UTrainSettings* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
