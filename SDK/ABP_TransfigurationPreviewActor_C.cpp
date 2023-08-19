#include "AActor.hpp"
#include "ABP_TransfigurationPreviewActor_C.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_PreviewActorState\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransfigurationResource.hpp"
#include "FVector.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UPointLightComponent.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_TransfigurationPreviewActor_C::ShowPreviewMesh(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ShowPreviewMesh"));
    struct Params_ShowPreviewMesh {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        USceneComponent* CallFunc_Array_Get_Item; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_ShowPreviewMesh params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ColorAboutToChange() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ColorAboutToChange"));
    struct Params_ColorAboutToChange {
    }; // Size: 0x0
    Params_ColorAboutToChange params{};
    ProcessEvent(func, &params);
}
ABP_TransfigurationPreviewActor_C* ABP_TransfigurationPreviewActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C");
    return (ABP_TransfigurationPreviewActor_C*)res;
}
void ABP_TransfigurationPreviewActor_C::ResetToOriginalScale() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ResetToOriginalScale"));
    struct Params_ResetToOriginalScale {
    }; // Size: 0x0
    Params_ResetToOriginalScale params{};
    ProcessEvent(func, &params);
}
bool ABP_TransfigurationPreviewActor_C::IsReadyForPlacement(float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.IsReadyForPlacement"));
    struct Params_IsReadyForPlacement {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        float CallFunc_GetTimelineLength_ReturnValue; // 0x4
        float CallFunc_GetPlaybackPosition_ReturnValue; // 0x8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0xc
        bool K2Node_SwitchEnum_CmpSuccess; // 0xd
    }; // Size: 0xe
    Params_IsReadyForPlacement params{};
    params.CallFunc_GetTimelineLength_ReturnValue = (float)CallFunc_GetTimelineLength_ReturnValue;
    params.CallFunc_GetPlaybackPosition_ReturnValue = (float)CallFunc_GetPlaybackPosition_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABP_TransfigurationPreviewActor_C::IsPreviewInTransition(bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.IsPreviewInTransition"));
    struct Params_IsPreviewInTransition {
        bool ReturnValue; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
    }; // Size: 0x2
    Params_IsPreviewInTransition params{};
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_TransfigurationPreviewActor_C::Set_EffectScale(FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent, float K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Set EffectScale"));
    struct Params_Set_EffectScale {
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter; // 0x0
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent; // 0xc
        float K2Node_MathExpression_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_Set_EffectScale params{};
    params.CallFunc_GetTransfigurationFxInfos_OutObjectCenter = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectCenter;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectExtent = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectExtent;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ShowBillboardComponents(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32_t CallFunc_Array_Length_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UMaterialBillboardComponent* K2Node_DynamicCast_AsMaterial_Billboard_Component, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ShowBillboardComponents"));
    struct Params_ShowBillboardComponents {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        TArray<USceneComponent*> CallFunc_GetChildrenComponents_Children; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        char pad_24[0x4];
        USceneComponent* CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        char pad_31[0x7];
        UMaterialBillboardComponent* K2Node_DynamicCast_AsMaterial_Billboard_Component; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
    }; // Size: 0x41
    Params_ShowBillboardComponents params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetChildrenComponents_Children = (TArray<USceneComponent*>)CallFunc_GetChildrenComponents_Children;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsMaterial_Billboard_Component = (UMaterialBillboardComponent*)K2Node_DynamicCast_AsMaterial_Billboard_Component;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    CallFunc_GetChildrenComponents_Children = params.CallFunc_GetChildrenComponents_Children;
}
void ABP_TransfigurationPreviewActor_C::HidePreviewMesh(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32_t CallFunc_Array_Length_ReturnValue, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsVisible_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.HidePreviewMesh"));
    struct Params_HidePreviewMesh {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        TArray<USceneComponent*> CallFunc_GetChildrenComponents_Children; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        char pad_24[0x4];
        USceneComponent* CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        char pad_31[0x3];
        int32_t CallFunc_Array_AddUnique_ReturnValue; // 0x34
        bool CallFunc_IsVisible_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_HidePreviewMesh params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetChildrenComponents_Children = (TArray<USceneComponent*>)CallFunc_GetChildrenComponents_Children;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_AddUnique_ReturnValue = (int32_t)CallFunc_Array_AddUnique_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetChildrenComponents_Children = params.CallFunc_GetChildrenComponents_Children;
}
void ABP_TransfigurationPreviewActor_C::FinishHoldVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.FinishHoldVanishing"));
    struct Params_FinishHoldVanishing {
    }; // Size: 0x0
    Params_FinishHoldVanishing params{};
    ProcessEvent(func, &params);
}
bool ABP_TransfigurationPreviewActor_C::ShouldBeCollapsedToSwirl(bool CallFunc_AreResourceRequirementsMet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_CanPlace_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ShouldBeCollapsedToSwirl"));
    struct Params_ShouldBeCollapsedToSwirl {
        bool ReturnValue; // 0x0
        bool CallFunc_AreResourceRequirementsMet_ReturnValue; // 0x1
        bool CallFunc_Not_PreBool_ReturnValue; // 0x2
        bool CallFunc_IsLocked_ReturnValue; // 0x3
        bool CallFunc_CanPlace_ReturnValue; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x5
        bool CallFunc_BooleanOR_ReturnValue; // 0x6
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x7
    }; // Size: 0x8
    Params_ShouldBeCollapsedToSwirl params{};
    params.CallFunc_AreResourceRequirementsMet_ReturnValue = (bool)CallFunc_AreResourceRequirementsMet_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_IsLocked_ReturnValue = (bool)CallFunc_IsLocked_ReturnValue;
    params.CallFunc_CanPlace_ReturnValue = (bool)CallFunc_CanPlace_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_TransfigurationPreviewActor_C::SetupCentredMeshRoot(FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter, FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent, bool CallFunc_K2_AttachToComponent_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.SetupCentredMeshRoot"));
    struct Params_SetupCentredMeshRoot {
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectCenter; // 0x0
        FVector CallFunc_GetTransfigurationFxInfos_OutObjectExtent; // 0xc
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x18
        char pad_19[0x3];
        FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0x1c
    }; // Size: 0xa4
    Params_SetupCentredMeshRoot params{};
    params.CallFunc_GetTransfigurationFxInfos_OutObjectCenter = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectCenter;
    params.CallFunc_GetTransfigurationFxInfos_OutObjectExtent = (FVector)CallFunc_GetTransfigurationFxInfos_OutObjectExtent;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_K2_SetWorldLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldLocation_SweepHitResult;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAirTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__FinishedFunc"));
    struct Params_ConjuredFromThinAirTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_ConjuredFromThinAirTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAirTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__UpdateFunc"));
    struct Params_ConjuredFromThinAirTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_ConjuredFromThinAirTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ReturnToSwirl() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ReturnToSwirl"));
    struct Params_ReturnToSwirl {
    }; // Size: 0x0
    Params_ReturnToSwirl params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc"));
    struct Params_ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc {
    }; // Size: 0x0
    Params_ConjuredFromThinAirTimeline__TriggerMotionBlur__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc"));
    struct Params_ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc {
    }; // Size: 0x0
    Params_ConjuredFromThinAirTimeline__SwirlOffEvent__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc"));
    struct Params_ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc {
    }; // Size: 0x0
    Params_ConjuredFromThinAirTimeline__BackwardsTransformationEvent__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAirTimeline__Camera_Shaker_Trigger__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAirTimeline__Camera Shaker Trigger__EventFunc"));
    struct Params_ConjuredFromThinAirTimeline__Camera_Shaker_Trigger__EventFunc {
    }; // Size: 0x0
    Params_ConjuredFromThinAirTimeline__Camera_Shaker_Trigger__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::Timeline_0__NewTrack_1__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Timeline_0__NewTrack_1__EventFunc"));
    struct Params_Timeline_0__NewTrack_1__EventFunc {
    }; // Size: 0x0
    Params_Timeline_0__NewTrack_1__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::InitializeVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.InitializeVisibility"));
    struct Params_InitializeVisibility {
    }; // Size: 0x0
    Params_InitializeVisibility params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ReinitializeVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ReinitializeVisibility"));
    struct Params_ReinitializeVisibility {
    }; // Size: 0x0
    Params_ReinitializeVisibility params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::CancelHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CancelHoldTransforming"));
    struct Params_CancelHoldTransforming {
    }; // Size: 0x0
    Params_CancelHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::FinishHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.FinishHoldTransforming"));
    struct Params_FinishHoldTransforming {
    }; // Size: 0x0
    Params_FinishHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ConjuredFromThinAir() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ConjuredFromThinAir"));
    struct Params_ConjuredFromThinAir {
    }; // Size: 0x0
    Params_ConjuredFromThinAir params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::CancelledIntoThinAir() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CancelledIntoThinAir"));
    struct Params_CancelledIntoThinAir {
    }; // Size: 0x0
    Params_CancelledIntoThinAir params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ObjectDeselected(AActor* InNewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ObjectDeselected"));
    struct Params_ObjectDeselected {
        AActor* InNewActor; // 0x0
    }; // Size: 0x8
    Params_ObjectDeselected params{};
    params.InNewActor = (AActor*)InNewActor;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ObjectConfirmed(TArray<AActor*>& InNewActors) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ObjectConfirmed"));
    struct Params_ObjectConfirmed {
        TArray<AActor*> InNewActors; // 0x0
    }; // Size: 0x10
    Params_ObjectConfirmed params{};
    params.InNewActors = (TArray<AActor*>)InNewActors;
    ProcessEvent(func, &params);
    InNewActors = params.InNewActors;
}
void ABP_TransfigurationPreviewActor_C::BlueprintInitialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.BlueprintInitialize"));
    struct Params_BlueprintInitialize {
    }; // Size: 0x0
    Params_BlueprintInitialize params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnTransformStart(ATransfigurationPreviewActor* InNewPreview) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnTransformStart"));
    struct Params_OnTransformStart {
        ATransfigurationPreviewActor* InNewPreview; // 0x0
    }; // Size: 0x8
    Params_OnTransformStart params{};
    params.InNewPreview = (ATransfigurationPreviewActor*)InNewPreview;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::StartHoldVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.StartHoldVanishing"));
    struct Params_StartHoldVanishing {
    }; // Size: 0x0
    Params_StartHoldVanishing params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnTransformationDone(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnTransformationDone"));
    struct Params_OnTransformationDone {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnTransformationDone params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ObjectSelected() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.ObjectSelected"));
    struct Params_ObjectSelected {
    }; // Size: 0x0
    Params_ObjectSelected params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnVanishStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnVanishStart"));
    struct Params_OnVanishStart {
    }; // Size: 0x0
    Params_OnVanishStart params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnPreviewMeshLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnPreviewMeshLoaded"));
    struct Params_OnPreviewMeshLoaded {
    }; // Size: 0x0
    Params_OnPreviewMeshLoaded params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::TransformedFromOtherPreview(ATransfigurationPreviewActor* InPreviousPreview) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.TransformedFromOtherPreview"));
    struct Params_TransformedFromOtherPreview {
        ATransfigurationPreviewActor* InPreviousPreview; // 0x0
    }; // Size: 0x8
    Params_TransformedFromOtherPreview params{};
    params.InPreviousPreview = (ATransfigurationPreviewActor*)InPreviousPreview;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnSizeChange(float StartScale, float EndScale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnSizeChange"));
    struct Params_OnSizeChange {
        float StartScale; // 0x0
        float EndScale; // 0x4
    }; // Size: 0x8
    Params_OnSizeChange params{};
    params.StartScale = (float)StartScale;
    params.EndScale = (float)EndScale;
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::Vanish() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.Vanish"));
    struct Params_Vanish {
    }; // Size: 0x0
    Params_Vanish params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::BP_OnTransformationLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.BP_OnTransformationLoaded"));
    struct Params_BP_OnTransformationLoaded {
    }; // Size: 0x0
    Params_BP_OnTransformationLoaded params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnTransformWithoutStyle() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnTransformWithoutStyle"));
    struct Params_OnTransformWithoutStyle {
    }; // Size: 0x0
    Params_OnTransformWithoutStyle params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::OnReturnedToSwirl() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.OnReturnedToSwirl"));
    struct Params_OnReturnedToSwirl {
    }; // Size: 0x0
    Params_OnReturnedToSwirl params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::AppearFromSwirl() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.AppearFromSwirl"));
    struct Params_AppearFromSwirl {
    }; // Size: 0x0
    Params_AppearFromSwirl params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::StartHoldConjuring(float TotalConjurationDuration, TArray<FTransfigurationResource>& Resources, FVector WandPos) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.StartHoldConjuring"));
    struct Params_StartHoldConjuring {
        float TotalConjurationDuration; // 0x0
        char pad_4[0x4];
        TArray<FTransfigurationResource> Resources; // 0x8
        FVector WandPos; // 0x18
    }; // Size: 0x24
    Params_StartHoldConjuring params{};
    params.TotalConjurationDuration = (float)TotalConjurationDuration;
    params.Resources = (TArray<FTransfigurationResource>)Resources;
    params.WandPos = (FVector)WandPos;
    ProcessEvent(func, &params);
    Resources = params.Resources;
}
void ABP_TransfigurationPreviewActor_C::CannotHoldConjuring() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CannotHoldConjuring"));
    struct Params_CannotHoldConjuring {
    }; // Size: 0x0
    Params_CannotHoldConjuring params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::CancelHoldVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.CancelHoldVanishing"));
    struct Params_CancelHoldVanishing {
    }; // Size: 0x0
    Params_CancelHoldVanishing params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::StartHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Transformation/BP_TransfigurationPreviewActor.BP_TransfigurationPreviewActor_C.StartHoldTransforming"));
    struct Params_StartHoldTransforming {
    }; // Size: 0x0
    Params_StartHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ABP_TransfigurationPreviewActor_C::ExecuteUbergraph_BP_TransfigurationPreviewActor(int32_t EntryPoint) {}
