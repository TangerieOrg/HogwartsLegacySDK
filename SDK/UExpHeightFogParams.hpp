#pragma once
#include <cstdint>
#include "UObject.hpp"
class UExpHeightFogTransmuter;
#pragma pack(push, 1)
class UExpHeightFogParams : public UObject {
public:
    UExpHeightFogTransmuter* Transmuter; // 0x28
    static UExpHeightFogParams* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
