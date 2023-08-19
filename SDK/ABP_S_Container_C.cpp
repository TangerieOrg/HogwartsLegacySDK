#include "AActor.hpp"
#include "ABP_S_Container_C.hpp"
#include "AWorldObject.hpp"
#include "EEnvironment\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FCalloutInformation.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_S_Container_C::Timeline_Doors__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.Timeline_Doors__UpdateFunc"));
    struct Params_Timeline_Doors__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_Doors__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::ReceiveActorEndOverlap(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.ReceiveActorEndOverlap"));
    struct Params_ReceiveActorEndOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorEndOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
ABP_S_Container_C* ABP_S_Container_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C");
    return (ABP_S_Container_C*)res;
}
void ABP_S_Container_C::RefreshList() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.RefreshList"));
    struct Params_RefreshList {
    }; // Size: 0x0
    Params_RefreshList params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::UserConstructionScript(FPropList Props_Lids, FPropList Props, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FPropList K2Node_MakeStruct_PropList, FPropList K2Node_MakeStruct_PropList_1, FVector CallFunc_GetSocketLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, USceneComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue) {}
void ABP_S_Container_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::Timeline_Doors__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.Timeline_Doors__FinishedFunc"));
    struct Params_Timeline_Doors__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_Doors__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::ReceiveActorBeginOverlap(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.ReceiveActorBeginOverlap"));
    struct Params_ReceiveActorBeginOverlap {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActorBeginOverlap params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::CloseContainer(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.CloseContainer"));
    struct Params_CloseContainer {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CloseContainer params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::SetWwiseSwitchAndPlayOpenSFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.SetWwiseSwitchAndPlayOpenSFX"));
    struct Params_SetWwiseSwitchAndPlayOpenSFX {
    }; // Size: 0x0
    Params_SetWwiseSwitchAndPlayOpenSFX params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::ContainerOpened__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.ContainerOpened__DelegateSignature"));
    struct Params_ContainerOpened__DelegateSignature {
    }; // Size: 0x0
    Params_ContainerOpened__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature"));
    struct Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::CheckLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.CheckLoot"));
    struct Params_CheckLoot {
    }; // Size: 0x0
    Params_CheckLoot params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::ExecuteUbergraph_BP_S_Container(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, FRotator Temp_struct_Variable, bool Temp_bool_Variable_1, EEnvironment::Type Temp_byte_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, ETimelineDirection::Type Temp_byte_Variable_1, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, FRotator Temp_struct_Variable_1, bool Temp_bool_Variable_17, FCalloutInformation K2Node_MakeStruct_CalloutInformation, TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2) {}
void ABP_S_Container_C::ContainerEmpty__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.ContainerEmpty__DelegateSignature"));
    struct Params_ContainerEmpty__DelegateSignature {
    }; // Size: 0x0
    Params_ContainerEmpty__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_S_Container_C::ContainerClosed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_S_Container.BP_S_Container_C.ContainerClosed__DelegateSignature"));
    struct Params_ContainerClosed__DelegateSignature {
    }; // Size: 0x0
    Params_ContainerClosed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
