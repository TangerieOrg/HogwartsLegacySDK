#pragma once
#include <cstdint>
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
class UTimelineComponent;
class UChildActorComponent;
class UPhysicsConstraintComponent;
class ULootDropComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class UStaticMeshComponent;
class ABP_OL_Chest_VP_Marker_C;
class UStaticMesh;
class UExpiryManager;
class UClass;
class UMeshComponent;
class AActor;
class USceneComponent;
#pragma pack(push, 1)
class ABP_M_Container_C : public AContainer {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3c0
    UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x3c8
    ULootDropComponent* LootDrop; // 0x3d0
    UStaticMeshComponent* lid; // 0x3d8
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x3e0
    UStaticMeshComponent* ContainerMesh; // 0x3e8
    float OpenLidTimeline_Rotation_Close_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3f0
    float OpenLidTimeline_Slide_Close_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3f4
    float OpenLidTimeline_Slide_Open_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3f8
    float OpenLidTimeline_Rotation_Open_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x3fc
    ETimelineDirection::Type OpenLidTimeline__Direction_B16ACF6F42EA8B6B211107B97EA47C4B; // 0x400
    char pad_401[0x7];
    UTimelineComponent* OpenLidTimeline; // 0x408
    EEnvironment::Type Environment; // 0x410
    char pad_411[0x7];
    TArray<UStaticMesh*> LockArray; // 0x418
    TArray<UStaticMesh*> LockUnlockedArray; // 0x428
    UPhysicsConstraintComponent* LockMeshConstraint; // 0x438
    UStaticMeshComponent* LockMesh; // 0x440
    char pad_448[0x20];
    bool MultipleProps; // 0x468
    char pad_469[0x7];
    ABP_OL_Chest_VP_Marker_C* Beacon; // 0x470
    bool ForceEmpty; // 0x478
    char pad_479[0x7];
    static ABP_M_Container_C* StaticClass();
    FVector GetSoundPos(FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius);
    void SetWwiseSwitchAndPlayOpenSFX(int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void AddExpiry(UExpiryManager* CallFunc_Get_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, FString CallFunc_GetCurrentLevelName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_AddExpiry_ReturnValue);
    UMeshComponent* GetAttachToMesh();
    bool NeedsKey(FName CallFunc_GetLockName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void RefreshList();
    void UserConstructionScript(FPropList Props_Lids, FPropList Props, ELockDifficulty Temp_byte_Variable, ELockDifficulty Temp_byte_Variable_1, ELockDifficulty Temp_byte_Variable_2, int32_t Temp_int_Variable, FString CallFunc_GetPathName_ReturnValue, UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, AActor* CallFunc_GetParentActor_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_NeedsKey_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Clamp_ReturnValue, ELockDifficulty K2Node_Select_Default, FPropList K2Node_MakeStruct_PropList, FPropList K2Node_MakeStruct_PropList_1, FTransform CallFunc_MakeTransform_ReturnValue, USceneComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
    void OpenLidTimeline__FinishedFunc();
    void OpenLidTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void InteractionInitiated(UObject* Caller);
    void CloseContainer(UObject* Caller);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller);
    void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame);
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void CheckLoot();
    void Unlock();
    void ExecuteUbergraph_BP_M_Container(int32_t EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FRotator Temp_struct_Variable, int32_t Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, ETimelineDirection::Type Temp_byte_Variable, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EEnvironment::Type Temp_byte_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, FRotator Temp_struct_Variable_1, bool K2Node_Select_Default, UObject* K2Node_CustomEvent_Caller_3, bool CallFunc_Not_PreBool_ReturnValue, UObject* K2Node_CustomEvent_Caller_2, FTransform CallFunc_GetRelativeTransform_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, AActor* CallFunc_Array_Get_Item);
    void GenericOpenChest__DelegateSignature();
    void ButterflyChestOpen__DelegateSignature();
}; // Size: 0x480
#pragma pack(pop)
