#include "AActor.hpp"
#include "ABP_RotatingMesh_C.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UArrowComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_RotatingMesh_C* ABP_RotatingMesh_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/ProxyLODHarvest/BP_RotatingMesh.BP_RotatingMesh_C");
    return (ABP_RotatingMesh_C*)res;
}
void ABP_RotatingMesh_C::SetRelativeRotation(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_RotatingMesh.BP_RotatingMesh_C.SetRelativeRotation"));
    struct Params_SetRelativeRotation {
        float CallFunc_BreakVector_X; // 0x0
        float CallFunc_BreakVector_Y; // 0x4
        float CallFunc_BreakVector_Z; // 0x8
        float CallFunc_GetGameTimeInSeconds_ReturnValue; // 0xc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        float CallFunc_Percent_FloatFloat_ReturnValue; // 0x14
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x18
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0x1c
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0x20
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x24
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x30
    }; // Size: 0xb8
    Params_SetRelativeRotation params{};
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_GetGameTimeInSeconds_ReturnValue = (float)CallFunc_GetGameTimeInSeconds_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Percent_FloatFloat_ReturnValue = (float)CallFunc_Percent_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_RotatingMesh_C::ExecuteUbergraph_BP_RotatingMesh(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_RotatingMesh.BP_RotatingMesh_C.ExecuteUbergraph_BP_RotatingMesh"));
    struct Params_ExecuteUbergraph_BP_RotatingMesh {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_RotatingMesh params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_RotatingMesh_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_RotatingMesh.BP_RotatingMesh_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_RotatingMesh_C::UserConstructionScript0(bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_RotatingMesh.BP_RotatingMesh_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UserConstructionScript params{};
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_RotatingMesh_C::UpdateRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_RotatingMesh.BP_RotatingMesh_C.UpdateRotation"));
    struct Params_UpdateRotation {
    }; // Size: 0x0
    Params_UpdateRotation params{};
    ProcessEvent(func, &params);
}
