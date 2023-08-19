#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "E_AVA_OL_VaultList\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class AEncounterCreator;
class UAvaStreamingVolumeComponent;
class UChildActorComponent;
class ABP_VaultRuin_Marker_C;
class UBoxComponent;
class USceneComponent;
class UClass;
class ABP_Vault_Door_C;
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class ABP_OL_Vault_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* New_Marker_SOLO; // 0x250
    UChildActorComponent* BP_OL_Vault_AvatarApproaching; // 0x258
    UChildActorComponent* BP_OL_Vault_MetricsTriggerVolume; // 0x260
    UAvaStreamingVolumeComponent* AvaStreamingVolume; // 0x268
    UBoxComponent* Trigger; // 0x270
    UChildActorComponent* BP_VaultRuin_Marker; // 0x278
    USceneComponent* DefaultSceneRoot; // 0x280
    AEncounterCreator* InstancedEncounterCreator; // 0x288
    E_AVA_OL_VaultList::Type Vault_List; // 0x290
    char pad_291[0xa7];
    UChildActorComponent* Proxy; // 0x338
    FTransform Cairn_Crawl_Door; // 0x340
    FTransform Cairn_Spinner_Beam; // 0x370
    FTransform Bombarda; // 0x3a0
    FTransform Magic_Plate; // 0x3d0
    FTransform Magic_Plate_Door; // 0x400
    FTransform Alohamora; // 0x430
    FTransform WindSpinnerA; // 0x460
    FTransform WindSpinnerB; // 0x490
    FTransform Controller; // 0x4c0
    FTransform DepulsoBars; // 0x4f0
    FTransform Zero; // 0x520
    FTransform Controller_TargetLocationA; // 0x550
    FTransform Controller_TargetLocationB; // 0x580
    bool PlateIncendio; // 0x5b0
    bool PlateLevioso; // 0x5b1
    bool PlateGlacius; // 0x5b2
    char pad_5b3[0xd];
    FTransform SpiderWebs; // 0x5c0
    FTransform AccioDoor; // 0x5f0
    FTransform AccioSswitch; // 0x620
    FTransform DevilsSnare; // 0x650
    FTransform WindSpinnerTrigger; // 0x680
    TArray<FName> VaultSpinnerTag; // 0x6b0
    UClass* Cube; // 0x6c0
    char pad_6c8[0x8];
    FTransform SwimTeleportEntrance; // 0x6d0
    FTransform SwimTeleportExit; // 0x700
    FTransform SwimTeleport_Exit_Destination; // 0x730
    FTransform SwimTeleport_Entrance_Destination; // 0x760
    TArray<AActor*> AttachedActors; // 0x790
    FString DoorName; // 0x7a0
    FName String; // 0x7b0
    FString Metrics_Name; // 0x7b8
    AActor* Spawned_Cube; // 0x7c8
    ABP_Vault_Door_C* BP_VaultDoor_Root; // 0x7d0
    FString TMP_Stat_Name; // 0x7d8
    TArray<FString> TMP_Stat_String_Array_A; // 0x7e8
    FString TMP_Name_Prefix; // 0x7f8
    FString TMP_Stat_Name_Inside_Macro; // 0x808
    TArray<AActor*> NewVar_0; // 0x818
    TArray<FString> Letters; // 0x828
    ULevelStreamingDynamic* LightingSubLevel; // 0x838
    bool Use_New_Marker; // 0x840
    bool Use_Offest_Beacon; // 0x841
    bool Beacon_Offset___Hallway_Left; // 0x842
    bool Beacon_Offset___Hallway_Right; // 0x843
    bool Beacon_Offset___Use_Manual; // 0x844
    char pad_845[0x2b];
    FTransform Beacon_Offset_Manual; // 0x870
    bool Chest_Owner___Show_Debug_Radius; // 0x8a0
    char pad_8a1[0x3];
    float Chest_Owner_Custom_Radius; // 0x8a4
    char pad_8a8[0x3e8];
    static ABP_OL_Vault_C* StaticClass();
    void UserConstructionScript0(FTransform Temp_struct_Variable, UChildActorComponent* CallFunc_AddComponent_ReturnValue, ABP_VaultRuin_Marker_C* K2Node_DynamicCast_AsBP_Vault_Ruin_Marker, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, ABP_VaultRuin_Marker_C* K2Node_DynamicCast_AsBP_Vault_Ruin_Marker_1, bool K2Node_DynamicCast_bSuccess_1, ABP_VaultRuin_Marker_C* K2Node_DynamicCast_AsBP_Vault_Ruin_Marker_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess);
    void ReceiveBeginPlay0();
    void Cairn___Crawl();
    void Cairn___Depulso_Door();
    void Goblin___Disillusionment__eye_door_();
    void Goblin__Crawl();
    void Cave___Bombarda__rock_pile_();
    void Goblin___Bombarda__rock_pile_();
    void Cave___Lumos__Devil___s_snare_();
    void Castle___Leviosa__magic_plate_();
    void Castle___Alohamora__Level_1_();
    void Cairn___Depulso_Spinner();
    void Castle___Incendio__magic_plate_();
    void Castle___Glacius__magic_plate_();
    void Cairn___Leviosa__magic_plate_();
    void Cairn___Glacius__magic_plate_();
    void Cairn___Incendio__magic_plate_();
    void Cave___Stupefy__boards_();
    void Cave___Incendio__Spider_webs_();
    void Cairn___Accio();
    void Goblin___Alohamora__any_level_();
    void Castle___Alohamora__Level_2_();
    void Castle___Alohamora__Level_3_();
    void Cave_Door_Crawl();
    void Underwater_A_Mission();
    void Underwater_B_HS1_HS2_HN1();
    void Underwater_B_HN2_F1();
    void Underwater_B_F1_F3_F4_CO_ALL();
    void __Load_Lighting();
    void __Unload_Lighting();
    void zzz_Report_VP_Chest_Name();
    void ExecuteUbergraph_BP_OL_Vault(int32_t EntryPoint, UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_4, FTransform CallFunc_MakeTransform_ReturnValue_5, FTransform CallFunc_MakeTransform_ReturnValue_6, FTransform CallFunc_MakeTransform_ReturnValue_7, FTransform CallFunc_MakeTransform_ReturnValue_8, FTransform CallFunc_MakeTransform_ReturnValue_9, FTransform CallFunc_MakeTransform_ReturnValue_10, FTransform CallFunc_MakeTransform_ReturnValue_11, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_12, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FTransform CallFunc_MakeTransform_ReturnValue_13, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FHitResult CallFunc_K2_AddActorLocalOffset_SweepHitResult, FHitResult CallFunc_K2_AddActorLocalRotation_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, FVector CallFunc_BreakTransform_Location_2, FRotator CallFunc_BreakTransform_Rotation_2, FVector CallFunc_BreakTransform_Scale_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FVector CallFunc_Add_VectorVector_ReturnValue_2, FTransform CallFunc_MakeTransform_ReturnValue_14, FVector CallFunc_BreakTransform_Location_3, FRotator CallFunc_BreakTransform_Rotation_3, FVector CallFunc_BreakTransform_Scale_3, FVector CallFunc_Add_VectorVector_ReturnValue_3, FTransform CallFunc_MakeTransform_ReturnValue_15, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, FVector CallFunc_BreakTransform_Location_4, FRotator CallFunc_BreakTransform_Rotation_4, FVector CallFunc_BreakTransform_Scale_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_11, FVector CallFunc_K2_GetActorLocation_ReturnValue_12, FVector CallFunc_K2_GetActorLocation_ReturnValue_13, FVector CallFunc_K2_GetActorLocation_ReturnValue_14, FVector CallFunc_BreakTransform_Location_5, FRotator CallFunc_BreakTransform_Rotation_5, FVector CallFunc_BreakTransform_Scale_5, FVector CallFunc_BreakTransform_Location_6, FRotator CallFunc_BreakTransform_Rotation_6, FVector CallFunc_BreakTransform_Scale_6, FVector CallFunc_Add_VectorVector_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue_5, FTransform CallFunc_MakeTransform_ReturnValue_16, FTransform CallFunc_MakeTransform_ReturnValue_17, FVector CallFunc_BreakTransform_Location_7, FRotator CallFunc_BreakTransform_Rotation_7, FVector CallFunc_BreakTransform_Scale_7, FVector CallFunc_BreakTransform_Location_8, FRotator CallFunc_BreakTransform_Rotation_8, FVector CallFunc_BreakTransform_Scale_8, FVector CallFunc_Add_VectorVector_ReturnValue_6, FVector CallFunc_Add_VectorVector_ReturnValue_7, FTransform CallFunc_MakeTransform_ReturnValue_18, FTransform CallFunc_MakeTransform_ReturnValue_19, FVector CallFunc_BreakTransform_Location_9, FRotator CallFunc_BreakTransform_Rotation_9, FVector CallFunc_BreakTransform_Scale_9, FVector CallFunc_BreakTransform_Location_10, FRotator CallFunc_BreakTransform_Rotation_10, FVector CallFunc_BreakTransform_Scale_10, FVector CallFunc_Add_VectorVector_ReturnValue_8, FVector CallFunc_Add_VectorVector_ReturnValue_9, FTransform CallFunc_MakeTransform_ReturnValue_20, FTransform CallFunc_MakeTransform_ReturnValue_21, FVector CallFunc_K2_GetActorLocation_ReturnValue_15, FVector CallFunc_BreakTransform_Location_11, FRotator CallFunc_BreakTransform_Rotation_11, FVector CallFunc_BreakTransform_Scale_11, FVector CallFunc_Add_VectorVector_ReturnValue_10, FTransform CallFunc_MakeTransform_ReturnValue_22, FVector CallFunc_K2_GetActorLocation_ReturnValue_16, FVector CallFunc_K2_GetActorLocation_ReturnValue_17, FVector CallFunc_BreakTransform_Location_12, FRotator CallFunc_BreakTransform_Rotation_12, FVector CallFunc_BreakTransform_Scale_12, FVector CallFunc_Add_VectorVector_ReturnValue_11, FTransform CallFunc_MakeTransform_ReturnValue_23, FVector CallFunc_K2_GetActorLocation_ReturnValue_18, FVector CallFunc_K2_GetActorLocation_ReturnValue_19, FVector CallFunc_K2_GetActorLocation_ReturnValue_20, FVector CallFunc_BreakTransform_Location_13, FRotator CallFunc_BreakTransform_Rotation_13, FVector CallFunc_BreakTransform_Scale_13, FVector CallFunc_Add_VectorVector_ReturnValue_12, FVector CallFunc_BreakTransform_Location_14, FRotator CallFunc_BreakTransform_Rotation_14, FVector CallFunc_BreakTransform_Scale_14, FTransform CallFunc_MakeTransform_ReturnValue_24, FVector CallFunc_Add_VectorVector_ReturnValue_13, FTransform CallFunc_MakeTransform_ReturnValue_25, FVector CallFunc_BreakTransform_Location_15, FRotator CallFunc_BreakTransform_Rotation_15, FVector CallFunc_BreakTransform_Scale_15, FVector CallFunc_Add_VectorVector_ReturnValue_14, FTransform CallFunc_MakeTransform_ReturnValue_26, FVector CallFunc_K2_GetActorLocation_ReturnValue_21, FVector CallFunc_BreakTransform_Location_16, FRotator CallFunc_BreakTransform_Rotation_16, FVector CallFunc_BreakTransform_Scale_16, FVector CallFunc_Add_VectorVector_ReturnValue_15, FVector CallFunc_BreakTransform_Location_17, FRotator CallFunc_BreakTransform_Rotation_17, FVector CallFunc_BreakTransform_Scale_17, FTransform CallFunc_MakeTransform_ReturnValue_27, FVector CallFunc_Add_VectorVector_ReturnValue_16, FTransform CallFunc_MakeTransform_ReturnValue_28, FVector CallFunc_K2_GetActorLocation_ReturnValue_22, FVector CallFunc_K2_GetActorLocation_ReturnValue_23, FVector CallFunc_K2_GetActorLocation_ReturnValue_24, FVector CallFunc_BreakTransform_Location_18, FRotator CallFunc_BreakTransform_Rotation_18, FVector CallFunc_BreakTransform_Scale_18, FVector CallFunc_BreakTransform_Location_19, FRotator CallFunc_BreakTransform_Rotation_19, FVector CallFunc_BreakTransform_Scale_19, FVector CallFunc_Add_VectorVector_ReturnValue_17, FTransform CallFunc_MakeTransform_ReturnValue_29, FVector CallFunc_K2_GetActorLocation_ReturnValue_25, FVector CallFunc_BreakTransform_Location_20, FRotator CallFunc_BreakTransform_Rotation_20, FVector CallFunc_BreakTransform_Scale_20, FVector CallFunc_Add_VectorVector_ReturnValue_18, FVector CallFunc_Add_VectorVector_ReturnValue_19, FTransform CallFunc_MakeTransform_ReturnValue_30, FTransform CallFunc_MakeTransform_ReturnValue_31, FVector CallFunc_BreakTransform_Location_21, FRotator CallFunc_BreakTransform_Rotation_21, FVector CallFunc_BreakTransform_Scale_21, FVector CallFunc_Add_VectorVector_ReturnValue_20, FTransform CallFunc_MakeTransform_ReturnValue_32, FVector CallFunc_BreakTransform_Location_22, FRotator CallFunc_BreakTransform_Rotation_22, FVector CallFunc_BreakTransform_Scale_22, FVector CallFunc_BreakTransform_Location_23, FRotator CallFunc_BreakTransform_Rotation_23, FVector CallFunc_BreakTransform_Scale_23, FVector CallFunc_Add_VectorVector_ReturnValue_21, FVector CallFunc_BreakTransform_Location_24, FRotator CallFunc_BreakTransform_Rotation_24, FVector CallFunc_BreakTransform_Scale_24, FTransform CallFunc_MakeTransform_ReturnValue_33, FVector CallFunc_Add_VectorVector_ReturnValue_22, FTransform CallFunc_MakeTransform_ReturnValue_34, FVector CallFunc_BreakTransform_Location_25, FRotator CallFunc_BreakTransform_Rotation_25, FVector CallFunc_BreakTransform_Scale_25, FVector CallFunc_Add_VectorVector_ReturnValue_23, FTransform CallFunc_MakeTransform_ReturnValue_35, FVector CallFunc_BreakTransform_Location_26, FRotator CallFunc_BreakTransform_Rotation_26, FVector CallFunc_BreakTransform_Scale_26, FVector CallFunc_Add_VectorVector_ReturnValue_24, FTransform CallFunc_MakeTransform_ReturnValue_36, FVector CallFunc_K2_GetActorLocation_ReturnValue_26, FVector CallFunc_BreakTransform_Location_27, FRotator CallFunc_BreakTransform_Rotation_27, FVector CallFunc_BreakTransform_Scale_27, FVector CallFunc_K2_GetActorLocation_ReturnValue_27, FVector CallFunc_Add_VectorVector_ReturnValue_25, FTransform CallFunc_MakeTransform_ReturnValue_37, FVector CallFunc_BreakTransform_Location_28, FRotator CallFunc_BreakTransform_Rotation_28, FVector CallFunc_BreakTransform_Scale_28, FVector CallFunc_Add_VectorVector_ReturnValue_26, FTransform CallFunc_MakeTransform_ReturnValue_38, FVector CallFunc_K2_GetActorLocation_ReturnValue_28, FVector CallFunc_BreakTransform_Location_29, FRotator CallFunc_BreakTransform_Rotation_29, FVector CallFunc_BreakTransform_Scale_29, FVector CallFunc_K2_GetActorLocation_ReturnValue_29, FVector CallFunc_Add_VectorVector_ReturnValue_27, FVector CallFunc_BreakTransform_Location_30, FRotator CallFunc_BreakTransform_Rotation_30, FVector CallFunc_BreakTransform_Scale_30, FTransform CallFunc_MakeTransform_ReturnValue_39, FVector CallFunc_Add_VectorVector_ReturnValue_28, FTransform CallFunc_MakeTransform_ReturnValue_40, FVector CallFunc_BreakTransform_Location_31, FRotator CallFunc_BreakTransform_Rotation_31, FVector CallFunc_BreakTransform_Scale_31, FVector CallFunc_Add_VectorVector_ReturnValue_29, FTransform CallFunc_MakeTransform_ReturnValue_41, FVector CallFunc_K2_GetActorLocation_ReturnValue_30, FVector CallFunc_Add_VectorVector_ReturnValue_30, FTransform CallFunc_MakeTransform_ReturnValue_42, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, AActor* CallFunc_FinishSpawningActor_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_31, FVector CallFunc_Add_VectorVector_ReturnValue_31, FTransform CallFunc_MakeTransform_ReturnValue_43, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, ABP_Vault_Door_C* CallFunc_FinishSpawningActor_ReturnValue_2);
}; // Size: 0xc90
#pragma pack(pop)
