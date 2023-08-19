#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTestHoudiniParameterBuilder : public UObject {
public:
    char pad_28[0xa0];
    static UTestHoudiniParameterBuilder* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
