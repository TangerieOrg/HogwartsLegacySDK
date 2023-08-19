#pragma once
#include <cstdint>
#include "FAnimNode_BlendListByBool.hpp"
#include "FAnimNode_CopyPoseFromMesh.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimSharingTransitionInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_Tier4_SharedTransition_C : public UAnimSharingTransitionInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
    FAnimNode_Root AnimGraphNode_Root; // 0x2d8
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x308
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_1; // 0x3a8
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x580
    char pad_758[0x8];
    static UABP_Tier4_SharedTransition_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Tier4_SharedTransition(int32_t EntryPoint);
}; // Size: 0x760
#pragma pack(pop)
