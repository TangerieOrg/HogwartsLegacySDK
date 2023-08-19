#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UObject.hpp"
class ULandscapeComponent;
#pragma pack(push, 1)
class ULandscapeWeightmapUsage : public UObject {
public:
    ULandscapeComponent* ChannelUsage[4]; // 0x28
    FGuid LayerGuid; // 0x48
    static ULandscapeWeightmapUsage* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
