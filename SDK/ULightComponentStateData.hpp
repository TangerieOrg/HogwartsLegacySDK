#pragma once
#include <cstdint>
#include "UObject.hpp"
class ULightComponentState;
#pragma pack(push, 1)
class ULightComponentStateData : public UObject {
public:
    ULightComponentState* State; // 0x28
    static ULightComponentStateData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
