#include "ABP_GuideSpline_C.hpp"
#include "AGuideSpline.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "USplineMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UTimelineComponent.hpp"
void ABP_GuideSpline_C::Timeline_1__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.Timeline_1__UpdateFunc"));
    struct Params_Timeline_1__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_1__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::ExecuteUbergraph_BP_GuideSpline(int32_t EntryPoint, int32_t Temp_int_Variable, bool Temp_bool_IsClosed_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FTransform Temp_struct_Variable, int32_t Temp_int_Variable_1, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, bool CallFunc_Less_FloatFloat_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_1) {}
ABP_GuideSpline_C* ABP_GuideSpline_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C");
    return (ABP_GuideSpline_C*)res;
}
void ABP_GuideSpline_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::ComputeMeshComponentTargetsFromPlayerPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.ComputeMeshComponentTargetsFromPlayerPosition"));
    struct Params_ComputeMeshComponentTargetsFromPlayerPosition {
    }; // Size: 0x0
    Params_ComputeMeshComponentTargetsFromPlayerPosition params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::Timeline_1__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.Timeline_1__FinishedFunc"));
    struct Params_Timeline_1__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_1__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::SpawnInitialBurstAndCheckIfPathCanStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.SpawnInitialBurstAndCheckIfPathCanStart"));
    struct Params_SpawnInitialBurstAndCheckIfPathCanStart {
    }; // Size: 0x0
    Params_SpawnInitialBurstAndCheckIfPathCanStart params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::PreparePathRemoval() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.PreparePathRemoval"));
    struct Params_PreparePathRemoval {
    }; // Size: 0x0
    Params_PreparePathRemoval params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::ReverseRibbon() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.ReverseRibbon"));
    struct Params_ReverseRibbon {
    }; // Size: 0x0
    Params_ReverseRibbon params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::StartGuidingMechanicVFX(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.StartGuidingMechanicVFX"));
    struct Params_StartGuidingMechanicVFX {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StartGuidingMechanicVFX params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_GuideSpline_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_GuideSpline.BP_GuideSpline_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
