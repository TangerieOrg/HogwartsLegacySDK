#pragma once
#include <cstdint>
#include "EVisibilityGroupMask.hpp"
#include "FVolumetricCloudsGroundShadowsCutOut.hpp"
#include "FVolumetricCloudsGroundShadowsParams.hpp"
#include "FVolumetricCloudsParams.hpp"
#include "USceneComponent.hpp"
class UVolumetricCloudsGroundWorldState;
#pragma pack(push, 1)
class UVolumetricCloudsComponent : public USceneComponent {
public:
    FVolumetricCloudsParams Params; // 0x220
    char pad_4a0[0x230];
    float Height; // 0x6d0
    float HeightOffset; // 0x6d4
    char pad_6d8[0x18];
    FVolumetricCloudsGroundShadowsParams GroundShadows; // 0x6f0
    FVolumetricCloudsGroundShadowsCutOut GroundShadowsCutOut; // 0x750
    float GroundShadowsStrength; // 0x758
    char pad_75c[0x4];
    UVolumetricCloudsGroundWorldState* GroundShadowsState; // 0x760
    uint8_t bIsIntro : 1; // 0x768
    uint8_t pad_bitfield_768_1 : 7;
    EVisibilityGroupMask VisibilityGroupMask; // 0x769
    char pad_76a[0x6];
    static UVolumetricCloudsComponent* StaticClass();
}; // Size: 0x770
#pragma pack(pop)
