#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_CharacterWalkAlongSpline : public USceneRigObjectActionBase {
public:
    UActorProvider* SplinePathActor; // 0xa0
    float WalkSpeed; // 0xa8
    int32_t SplineFollowDirection; // 0xac
    float SplineHorizontalOffset; // 0xb0
    float SplineLookAheadDistance; // 0xb4
    static USceneAction_CharacterWalkAlongSpline* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
