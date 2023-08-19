#pragma once
#include <cstdint>
#include "UGlobalLightingBlendable.hpp"
class AAmbientOcclusionVolume;
#pragma pack(push, 1)
class UGlobalLightingBlendableGTAOFromAOVolume : public UGlobalLightingBlendable {
public:
    AAmbientOcclusionVolume* AmbientOcclusionVolume; // 0x28
    static UGlobalLightingBlendableGTAOFromAOVolume* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
