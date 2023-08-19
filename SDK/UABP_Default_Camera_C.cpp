#include "FAnimNode_CameraFixup.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SceneRigCameraDriver.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_Default_Camera_C.hpp"
#include "UAnimInstance_ApplyActorTransform.hpp"
#include "UFunction.hpp"
UABP_Default_Camera_C* UABP_Default_Camera_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Cinematics/Props/ABP_Default_Camera.ABP_Default_Camera_C");
    return (UABP_Default_Camera_C*)res;
}
void UABP_Default_Camera_C::ExecuteUbergraph_ABP_Default_Camera(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Props/ABP_Default_Camera.ABP_Default_Camera_C.ExecuteUbergraph_ABP_Default_Camera"));
    struct Params_ExecuteUbergraph_ABP_Default_Camera {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_Default_Camera params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UABP_Default_Camera_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Props/ABP_Default_Camera.ABP_Default_Camera_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
