#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULightCullingProvider : public UObject {
public:
    static ULightCullingProvider* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
