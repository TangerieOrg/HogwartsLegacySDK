#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAISenseFOVDetails : public UObject {
public:
    FVector FOVAxis; // 0x28
    float FOV; // 0x34
    static UAISenseFOVDetails* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
