#include "AActor.hpp"
#include "ABP_M_Container_C.hpp"
#include "ABP_OL_Chest_VP_Marker_C.hpp"
#include "AContainer.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EEnvironment\Type.hpp"
#include "ELockDifficulty.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UClass.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UExpiryManager.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "UPhysicsConstraintComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
void ABP_M_Container_C::GenericOpenChest__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.GenericOpenChest__DelegateSignature"));
    struct Params_GenericOpenChest__DelegateSignature {
    }; // Size: 0x0
    Params_GenericOpenChest__DelegateSignature params{};
    ProcessEvent(func, &params);
}
UMeshComponent* ABP_M_Container_C::GetAttachToMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.GetAttachToMesh"));
    struct Params_GetAttachToMesh {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachToMesh params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
void ABP_M_Container_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ABP_M_Container_C* ABP_M_Container_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C");
    return (ABP_M_Container_C*)res;
}
FVector ABP_M_Container_C::GetSoundPos(FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.GetSoundPos"));
    struct Params_GetSoundPos {
        FVector ReturnValue; // 0x0
        FVector CallFunc_GetComponentBounds_Origin; // 0xc
        FVector CallFunc_GetComponentBounds_BoxExtent; // 0x18
        float CallFunc_GetComponentBounds_SphereRadius; // 0x24
    }; // Size: 0x28
    Params_GetSoundPos params{};
    params.CallFunc_GetComponentBounds_Origin = (FVector)CallFunc_GetComponentBounds_Origin;
    params.CallFunc_GetComponentBounds_BoxExtent = (FVector)CallFunc_GetComponentBounds_BoxExtent;
    params.CallFunc_GetComponentBounds_SphereRadius = (float)CallFunc_GetComponentBounds_SphereRadius;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ABP_M_Container_C::RefreshList() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.RefreshList"));
    struct Params_RefreshList {
    }; // Size: 0x0
    Params_RefreshList params{};
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::SetWwiseSwitchAndPlayOpenSFX(int32_t CallFunc_PostEventAtLocation_ReturnValue) {}
void ABP_M_Container_C::AddExpiry(UExpiryManager* CallFunc_Get_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, FString CallFunc_GetCurrentLevelName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_AddExpiry_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.AddExpiry"));
    struct Params_AddExpiry {
        UExpiryManager* CallFunc_Get_ReturnValue; // 0x0
        FString CallFunc_GetObjectName_ReturnValue; // 0x8
        FString CallFunc_GetCurrentLevelName_ReturnValue; // 0x18
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
        bool CallFunc_AddExpiry_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_AddExpiry params{};
    params.CallFunc_Get_ReturnValue = (UExpiryManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetObjectName_ReturnValue = (FString)CallFunc_GetObjectName_ReturnValue;
    params.CallFunc_GetCurrentLevelName_ReturnValue = (FString)CallFunc_GetCurrentLevelName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_AddExpiry_ReturnValue = (bool)CallFunc_AddExpiry_ReturnValue;
    ProcessEvent(func, &params);
}
bool ABP_M_Container_C::NeedsKey(FName CallFunc_GetLockName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.NeedsKey"));
    struct Params_NeedsKey {
        bool ReturnValue; // 0x0
        char pad_1[0x3];
        FName CallFunc_GetLockName_ReturnValue; // 0x4
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0xc
        bool CallFunc_NotEqual_NameName_ReturnValue_1; // 0xd
        bool CallFunc_BooleanOR_ReturnValue; // 0xe
    }; // Size: 0xf
    Params_NeedsKey params{};
    params.CallFunc_GetLockName_ReturnValue = (FName)CallFunc_GetLockName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue_1 = (bool)CallFunc_NotEqual_NameName_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_M_Container_C::CheckLoot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.CheckLoot"));
    struct Params_CheckLoot {
    }; // Size: 0x0
    Params_CheckLoot params{};
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::UserConstructionScript(FPropList Props_Lids, FPropList Props, ELockDifficulty Temp_byte_Variable, ELockDifficulty Temp_byte_Variable_1, ELockDifficulty Temp_byte_Variable_2, int32_t Temp_int_Variable, FString CallFunc_GetPathName_ReturnValue, UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, AActor* CallFunc_GetParentActor_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_NeedsKey_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Clamp_ReturnValue, ELockDifficulty K2Node_Select_Default, FPropList K2Node_MakeStruct_PropList, FPropList K2Node_MakeStruct_PropList_1, FTransform CallFunc_MakeTransform_ReturnValue, USceneComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue) {}
void ABP_M_Container_C::OpenLidTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.OpenLidTimeline__FinishedFunc"));
    struct Params_OpenLidTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_OpenLidTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::OpenLidTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.OpenLidTimeline__UpdateFunc"));
    struct Params_OpenLidTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_OpenLidTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::CloseContainer(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.CloseContainer"));
    struct Params_CloseContainer {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CloseContainer params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature"));
    struct Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.OnUnlocked"));
    struct Params_OnUnlocked {
        bool OpenLockable; // 0x0
        bool ThrowLock; // 0x1
        bool PlaySoundsAndEffects; // 0x2
        bool FromMinigame; // 0x3
    }; // Size: 0x4
    Params_OnUnlocked params{};
    params.OpenLockable = (bool)OpenLockable;
    params.ThrowLock = (bool)ThrowLock;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    params.FromMinigame = (bool)FromMinigame;
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::Perceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.Perceived_Interact"));
    struct Params_Perceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Perceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::NoLongerPerceived_Interact(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.NoLongerPerceived_Interact"));
    struct Params_NoLongerPerceived_Interact {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_NoLongerPerceived_Interact params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::Unlock() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.Unlock"));
    struct Params_Unlock {
    }; // Size: 0x0
    Params_Unlock params{};
    ProcessEvent(func, &params);
}
void ABP_M_Container_C::ExecuteUbergraph_BP_M_Container(int32_t EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FRotator Temp_struct_Variable, int32_t Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, ETimelineDirection::Type Temp_byte_Variable, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EEnvironment::Type Temp_byte_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, FRotator Temp_struct_Variable_1, bool K2Node_Select_Default, UObject* K2Node_CustomEvent_Caller_3, bool CallFunc_Not_PreBool_ReturnValue, UObject* K2Node_CustomEvent_Caller_2, FTransform CallFunc_GetRelativeTransform_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, AActor* CallFunc_Array_Get_Item) {}
void ABP_M_Container_C::ButterflyChestOpen__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_M_Container.BP_M_Container_C.ButterflyChestOpen__DelegateSignature"));
    struct Params_ButterflyChestOpen__DelegateSignature {
    }; // Size: 0x0
    Params_ButterflyChestOpen__DelegateSignature params{};
    ProcessEvent(func, &params);
}
