#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_CharacterTeleport : public USceneRigObjectActionBase {
public:
    UTransformProvider* WorldSpaceTransform; // 0xa0
    float MinDistanceToTeleport; // 0xa8
    char pad_ac[0x4];
    static USceneAction_CharacterTeleport* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
