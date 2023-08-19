#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_CharacterWalkToPoint : public USceneRigObjectActionBase {
public:
    UTransformProvider* WorldSpaceTransform; // 0xa0
    float WalkSpeed; // 0xa8
    float ArrivalRadius; // 0xac
    static USceneAction_CharacterWalkToPoint* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
