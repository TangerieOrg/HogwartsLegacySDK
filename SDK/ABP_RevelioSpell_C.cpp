#include "AActor.hpp"
#include "ABP_RevelioSpell_C.hpp"
#include "ARevelioSpellTool.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraParameterCollectionInstance.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
ABP_RevelioSpell_C* ABP_RevelioSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C");
    return (ABP_RevelioSpell_C*)res;
}
void ABP_RevelioSpell_C::PostAtEventAtLocationNoOcclusion(FVector Location, UAkAudioEvent* Ak_Event, UAkComponent*& Ak_Component, UAkAudioEvent* AkEvent, UAkComponent* AkComponent, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue) {}
void ABP_RevelioSpell_C::Timeline_0__audio_off__EventFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.Timeline_0__audio_off__EventFunc"));
    struct Params_Timeline_0__audio_off__EventFunc {
    }; // Size: 0x0
    Params_Timeline_0__audio_off__EventFunc params{};
    ProcessEvent(func, &params);
}
void ABP_RevelioSpell_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_RevelioSpell_C::OnCastSpell(AActor* Target, FVector& Location, FVector& MuzzleLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.OnCastSpell"));
    struct Params_OnCastSpell {
        AActor* Target; // 0x0
        FVector Location; // 0x8
        FVector MuzzleLocation; // 0x14
    }; // Size: 0x20
    Params_OnCastSpell params{};
    params.Target = (AActor*)Target;
    params.Location = (FVector)Location;
    params.MuzzleLocation = (FVector)MuzzleLocation;
    ProcessEvent(func, &params);
    Location = params.Location;
    MuzzleLocation = params.MuzzleLocation;
}
void ABP_RevelioSpell_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_RevelioSpell_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_RevelioSpell_C::OnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.OnStart"));
    struct Params_OnStart {
    }; // Size: 0x0
    Params_OnStart params{};
    ProcessEvent(func, &params);
}
void ABP_RevelioSpell_C::OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.OnAffectTarget"));
    struct Params_OnAffectTarget {
        AActor* Target; // 0x0
        USceneComponent* Component; // 0x8
        bool bInTargetAffected; // 0x10
    }; // Size: 0x11
    Params_OnAffectTarget params{};
    params.Target = (AActor*)Target;
    params.Component = (USceneComponent*)Component;
    params.bInTargetAffected = (bool)bInTargetAffected;
    ProcessEvent(func, &params);
}
void ABP_RevelioSpell_C::ExecuteUbergraph_BP_RevelioSpell(int32_t EntryPoint, AActor* K2Node_Event_Target_1, FVector K2Node_Event_Location, FVector K2Node_Event_MuzzleLocation, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, FVector CallFunc_K2_GetActorLocation_ReturnValue, FLinearColor CallFunc_GetVectorParameterValue_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UAkComponent* CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component, UAkComponent* CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Revelio/BP_RevelioSpell.BP_RevelioSpell_C.ExecuteUbergraph_BP_RevelioSpell"));
    struct Params_ExecuteUbergraph_BP_RevelioSpell {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_Target_1; // 0x8
        FVector K2Node_Event_Location; // 0x10
        FVector K2Node_Event_MuzzleLocation; // 0x1c
        AActor* K2Node_Event_Target; // 0x28
        USceneComponent* K2Node_Event_Component; // 0x30
        bool K2Node_Event_bInTargetAffected; // 0x38
        char pad_39[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x3c
        FLinearColor CallFunc_GetVectorParameterValue_ReturnValue; // 0x48
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x58
        char pad_64[0x4];
        UAkComponent* CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component; // 0x68
        UAkComponent* CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component_1; // 0x70
        float CallFunc_GetGameTimeInSeconds_ReturnValue; // 0x78
        char pad_7c[0x4];
        UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue; // 0x80
    }; // Size: 0x88
    Params_ExecuteUbergraph_BP_RevelioSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Target_1 = (AActor*)K2Node_Event_Target_1;
    params.K2Node_Event_Location = (FVector)K2Node_Event_Location;
    params.K2Node_Event_MuzzleLocation = (FVector)K2Node_Event_MuzzleLocation;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_Component = (USceneComponent*)K2Node_Event_Component;
    params.K2Node_Event_bInTargetAffected = (bool)K2Node_Event_bInTargetAffected;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetVectorParameterValue_ReturnValue = (FLinearColor)CallFunc_GetVectorParameterValue_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component = (UAkComponent*)CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component;
    params.CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component_1 = (UAkComponent*)CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component_1;
    params.CallFunc_GetGameTimeInSeconds_ReturnValue = (float)CallFunc_GetGameTimeInSeconds_ReturnValue;
    params.CallFunc_GetNiagaraParameterCollection_ReturnValue = (UNiagaraParameterCollectionInstance*)CallFunc_GetNiagaraParameterCollection_ReturnValue;
    ProcessEvent(func, &params);
}
