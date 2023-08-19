#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UDirectionalLightDirection.hpp"
#pragma pack(push, 1)
class UDirectionalLightConstantDirection : public UDirectionalLightDirection {
public:
    FVector Direction; // 0x28
    char pad_34[0x4];
    static UDirectionalLightConstantDirection* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
