#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class USceneAction_IKPoseFixup;
#pragma pack(push, 1)
class USceneActionState_IKPoseFixup : public USceneRigObjectActionState {
public:
    USceneAction_IKPoseFixup* IKPoseFixupDefinition; // 0x70
    char pad_78[0x10];
    static USceneActionState_IKPoseFixup* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
