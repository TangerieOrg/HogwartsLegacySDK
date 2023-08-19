#pragma once
#include <cstdint>
#include "FVolumetricCloudsGroundShadowsState.hpp"
#include "UObject.hpp"
class UTexture2DAlias;
#pragma pack(push, 1)
class UVolumetricCloudsGroundWorldState : public UObject {
public:
    TArray<FVolumetricCloudsGroundShadowsState> ShadowedLights; // 0x28
    UTexture2DAlias* ShadowAlias; // 0x38
    static UVolumetricCloudsGroundWorldState* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
