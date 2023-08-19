#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UObjectProvider;
#pragma pack(push, 1)
class USceneAction_CharacterWalkFollow : public USceneRigObjectActionBase {
public:
    UObjectProvider* GoalActor; // 0xa0
    float WalkSpeed; // 0xa8
    float DistanceToMaintain; // 0xac
    static USceneAction_CharacterWalkFollow* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
