#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_SetLightingChannels : public USceneRigObjectActionBase {
public:
    FLightingChannels LightingChannels; // 0xa0
    char pad_a1[0x7];
    static USceneAction_SetLightingChannels* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
