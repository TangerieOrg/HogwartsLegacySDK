#pragma once
#include <cstdint>
#include "UAIDataProvider.hpp"
#pragma pack(push, 1)
class UAIDataProvider_QueryParams : public UAIDataProvider {
public:
    FName ParamName; // 0x28
    float FloatValue; // 0x30
    int32_t IntValue; // 0x34
    bool BoolValue; // 0x38
    char pad_39[0x7];
    static UAIDataProvider_QueryParams* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
