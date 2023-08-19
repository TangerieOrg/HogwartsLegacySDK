#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UPoseGroupProvider;
#pragma pack(push, 1)
class USceneAction_PoseGroup : public USceneRigObjectActionBase {
public:
    UPoseGroupProvider* PoseGroupProvider; // 0xa0
    bool RegisterWithConversation; // 0xa8
    char pad_a9[0x7];
    static USceneAction_PoseGroup* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
