#pragma once
#include <cstdint>
#include "FAnimNode_AmbientFacial.hpp"
#include "FAnimNode_ApplyMeshSpaceAdditive.hpp"
#include "FAnimNode_PoseBlendNode.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhxAnimSharingStateInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_Tier4_AnimSharingStateInstance_C : public UPhxAnimSharingStateInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
    FAnimNode_Root AnimGraphNode_Root; // 0x3b8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x3e8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x468
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x4e8
    FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x5b8
    char pad_658[0x8];
    FAnimNode_AmbientFacial AnimGraphNode_AmbientFacial; // 0x660
    static UABP_Tier4_AnimSharingStateInstance_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance(int32_t EntryPoint);
}; // Size: 0x830
#pragma pack(pop)
