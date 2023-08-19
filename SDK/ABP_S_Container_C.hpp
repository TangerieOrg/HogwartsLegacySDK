#pragma once
#include <cstdint>
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
class ULootDropComponent;
class UStaticMeshComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class UTimelineComponent;
class USceneComponent;
class AActor;
#pragma pack(push, 1)
class ABP_S_Container_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    ULootDropComponent* LootDrop; // 0x2b8
    UStaticMeshComponent* lid; // 0x2c0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8
    UStaticMeshComponent* StaticMesh; // 0x2d0
    float Timeline_Doors_Rotate_Close_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2d8
    float Timeline_Doors_Slide_Close_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2dc
    float Timeline_Doors_Slide_Open_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2e0
    float Timeline_Doors_Rotation_Open_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2e4
    ETimelineDirection::Type Timeline_Doors__Direction_18FA3C1C4D5F5539586D4A9768CD2271; // 0x2e8
    char pad_2e9[0x7];
    UTimelineComponent* Timeline_Doors; // 0x2f0
    bool Searching; // 0x2f8
    bool Open; // 0x2f9
    EEnvironment::Type Environment; // 0x2fa
    char pad_2fb[0x1];
    int32_t PropIndex; // 0x2fc
    FTransform Lid_Transform; // 0x300
    float Lid_RotationX; // 0x330
    float RandomZRotation; // 0x334
    char pad_338[0x50];
    int32_t EnvInt; // 0x388
    bool AutoSelectLoot; // 0x38c
    bool NotEmpty; // 0x38d
    char pad_38e[0x32];
    FRandomStream Random_Seed; // 0x3c0
    bool Empty; // 0x3c8
    bool Opening; // 0x3c9
    char pad_3ca[0x6];
    static ABP_S_Container_C* StaticClass();
    void RefreshList();
    void UserConstructionScript(FPropList Props_Lids, FPropList Props, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FPropList K2Node_MakeStruct_PropList, FPropList K2Node_MakeStruct_PropList_1, FVector CallFunc_GetSocketLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, USceneComponent* CallFunc_AddComponent_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue_1, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
    void Timeline_Doors__FinishedFunc();
    void Timeline_Doors__UpdateFunc();
    void ReceiveBeginPlay();
    void InteractionInitiated(UObject* Caller);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void CloseContainer(UObject* Caller);
    void SetWwiseSwitchAndPlayOpenSFX();
    void BndEvt__LootDrop_K2Node_ComponentBoundEvent_1_OnInventoryUpdated__DelegateSignature(UObject* i_caller);
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void CheckLoot();
    void ExecuteUbergraph_BP_S_Container(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, FRotator Temp_struct_Variable, bool Temp_bool_Variable_1, EEnvironment::Type Temp_byte_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, ETimelineDirection::Type Temp_byte_Variable_1, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, FRotator Temp_struct_Variable_1, bool Temp_bool_Variable_17, FCalloutInformation K2Node_MakeStruct_CalloutInformation, TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2);
    void ContainerEmpty__DelegateSignature();
    void ContainerClosed__DelegateSignature();
    void ContainerOpened__DelegateSignature();
}; // Size: 0x3d0
#pragma pack(pop)
