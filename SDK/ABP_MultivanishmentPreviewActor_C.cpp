#include "ABP_MultivanishmentPreviewActor_C.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UParticleSystemComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
ABP_MultivanishmentPreviewActor_C* ABP_MultivanishmentPreviewActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C");
    return (ABP_MultivanishmentPreviewActor_C*)res;
}
void ABP_MultivanishmentPreviewActor_C::ScaleDownTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.ScaleDownTimeline__FinishedFunc"));
    struct Params_ScaleDownTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_ScaleDownTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_MultivanishmentPreviewActor_C::ExecuteUbergraph_BP_MultivanishmentPreviewActor(int32_t EntryPoint, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent, bool CallFunc_K2_AttachToComponent_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter_1, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter_2, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent_2, FVector CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.ExecuteUbergraph_BP_MultivanishmentPreviewActor"));
    struct Params_ExecuteUbergraph_BP_MultivanishmentPreviewActor {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_MakeVector_ReturnValue; // 0x4
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter; // 0x10
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent; // 0x1c
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x28
        char pad_29[0x3];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x2c
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter_1; // 0x38
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent_1; // 0x44
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0x50
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter_2; // 0xd8
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent_2; // 0xe4
        FVector CallFunc_Divide_VectorFloat_ReturnValue; // 0xf0
        float CallFunc_BreakVector_X; // 0xfc
        float CallFunc_BreakVector_Y; // 0x100
        float CallFunc_BreakVector_Z; // 0x104
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x108
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x10c
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x110
        float CallFunc_FClamp_ReturnValue; // 0x114
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x118
        char pad_124[0x4];
        UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue; // 0x128
    }; // Size: 0x130
    Params_ExecuteUbergraph_BP_MultivanishmentPreviewActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectCenter = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectCenter;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectExtent = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectExtent;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectCenter_1 = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectCenter_1;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectExtent_1 = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectExtent_1;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectCenter_2 = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectCenter_2;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectExtent_2 = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectExtent_2;
    params.CallFunc_Divide_VectorFloat_ReturnValue = (FVector)CallFunc_Divide_VectorFloat_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_SpawnEmitterAtLocation_ReturnValue = (UParticleSystemComponent*)CallFunc_SpawnEmitterAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_MultivanishmentPreviewActor_C::OnPreviewMeshLoaded0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.OnPreviewMeshLoaded"));
    struct Params_OnPreviewMeshLoaded {
    }; // Size: 0x0
    Params_OnPreviewMeshLoaded params{};
    ProcessEvent(func, &params);
}
void ABP_MultivanishmentPreviewActor_C::ScaleDownTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.ScaleDownTimeline__UpdateFunc"));
    struct Params_ScaleDownTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_ScaleDownTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_MultivanishmentPreviewActor_C::OnVanishStart0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_MultivanishmentPreviewActor.BP_MultivanishmentPreviewActor_C.OnVanishStart"));
    struct Params_OnVanishStart {
    }; // Size: 0x0
    Params_OnVanishStart params{};
    ProcessEvent(func, &params);
}
