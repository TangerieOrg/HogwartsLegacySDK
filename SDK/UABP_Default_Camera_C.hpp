#pragma once
#include <cstdint>
#include "FAnimNode_CameraFixup.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SceneRigCameraDriver.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimInstance_ApplyActorTransform.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_Default_Camera_C : public UAnimInstance_ApplyActorTransform {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x300
    FAnimNode_Root AnimGraphNode_Root; // 0x308
    char pad_338[0x8];
    FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x340
    FAnimNode_SceneRigCameraDriver AnimGraphNode_SceneRigCameraDriver; // 0x3f0
    FAnimNode_CameraFixup AnimGraphNode_CameraFixup; // 0x420
    char pad_488[0x8];
    static UABP_Default_Camera_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Default_Camera(int32_t EntryPoint);
}; // Size: 0x490
#pragma pack(pop)
