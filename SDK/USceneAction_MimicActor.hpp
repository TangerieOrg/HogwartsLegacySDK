#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_MimicActor : public USceneRigObjectActionBase {
public:
    UActorProvider* ActorToMimic; // 0xa0
    bool bMimicVisibility; // 0xa8
    bool bMimicAnimation; // 0xa9
    bool bMimicTransform; // 0xaa
    char pad_ab[0x5];
    FTransform Offset; // 0xb0
    bool bFlipAroundFloor; // 0xe0
    char pad_e1[0x3];
    float FloorZ; // 0xe4
    char pad_e8[0x8];
    static USceneAction_MimicActor* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
