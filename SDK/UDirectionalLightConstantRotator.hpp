#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UDirectionalLightDirection.hpp"
#pragma pack(push, 1)
class UDirectionalLightConstantRotator : public UDirectionalLightDirection {
public:
    FRotator Direction; // 0x28
    char pad_34[0x4];
    static UDirectionalLightConstantRotator* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
