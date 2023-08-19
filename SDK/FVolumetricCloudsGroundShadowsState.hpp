#pragma once
#include <cstdint>
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FVolumetricCloudsGroundShadowsState {
    char pad_0[0x8];
    UMaterialInstanceDynamic* LightFunctionMID; // 0x8
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
