#pragma once
#include <cstdint>
#include "FIKPoseFixupDefinition.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_IKPoseFixup : public USceneRigObjectActionBase {
public:
    FIKPoseFixupDefinition Definition; // 0xa0
    static USceneAction_IKPoseFixup* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
