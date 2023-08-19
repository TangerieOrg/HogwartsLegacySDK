#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UPoseGroup;
#pragma pack(push, 1)
class USceneActionState_PoseGroup : public USceneRigObjectActionState {
public:
    UPoseGroup* CurrentPoseGroup; // 0x70
    static USceneActionState_PoseGroup* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
