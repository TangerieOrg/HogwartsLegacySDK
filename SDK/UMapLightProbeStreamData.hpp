#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMapLightProbeStreamData : public UObject {
public:
    char pad_28[0x58];
    static UMapLightProbeStreamData* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
