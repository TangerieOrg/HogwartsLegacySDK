#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ABP_OL_Vault_C;
class ABP_OL_Chest_VP_Marker_C;
class AActor;
class ABP_OL_Chest_C;
class UStaticMeshComponent;
class ABP_OL_Chest_Marker_C;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_VaultRuin_Marker_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x308
    UChildActorComponent* BeaconLocation; // 0x310
    FString DoorName; // 0x318
    TArray<FString> Out_Actors; // 0x328
    FString MetricsName; // 0x338
    FString PuzzleVault_ChestType; // 0x348
    FName SaveStatName; // 0x358
    FString Underwater_for_KIO; // 0x360
    FString Vault_Name; // 0x370
    float Chest_Radius_Check; // 0x380
    char pad_384[0x4];
    FString PuzzleVaultChestName; // 0x388
    bool Use_New_Marker; // 0x398
    bool Bar_Off; // 0x399
    bool Text_Off; // 0x39a
    bool Show_Debug_Chest_Owner_Radius; // 0x39b
    char pad_39c[0x4];
    static ABP_VaultRuin_Marker_C* StaticClass();
    void AddBeaconToPuzzleVaultChests(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ABP_OL_Chest_VP_Marker_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32_t CallFunc_Array_Length_ReturnValue, ABP_OL_Chest_VP_Marker_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    void UpdateVaultChestOwnerData(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, AActor* CallFunc_GetParentActor_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ABP_OL_Chest_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32_t CallFunc_Array_Length_ReturnValue, ABP_OL_Chest_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, ABP_OL_Chest_Marker_C* K2Node_DynamicCast_AsBP_OL_Chest_Marker, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void UserConstructionScript(FString DoorNameLocal, TArray<UChildActorComponent*> HamletSet1, TArray<UChildActorComponent*> HamletSet2, TArray<bool> DisabledHamletBuildingList, UStaticMeshComponent* TempStaticMesh, UChildActorComponent* TempChildActor, TArray<UChildActorComponent*> TentObjectList, TArray<UStaticMeshComponent*> PropsList, TArray<bool> DisabledList, TArray<UStaticMeshComponent*> HamletSet1_StaticMeshList, TArray<UChildActorComponent*> ChildActorList, TArray<FTransform> TransformList, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult_1, AActor* CallFunc_GetParentActor_ReturnValue, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FString CallFunc_Replace_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_Contains_ReturnValue_9, bool CallFunc_Contains_ReturnValue_10, FString CallFunc_Replace_ReturnValue_1, bool CallFunc_Contains_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, bool CallFunc_Contains_ReturnValue_15, bool CallFunc_Contains_ReturnValue_16, bool CallFunc_Contains_ReturnValue_17, bool CallFunc_Contains_ReturnValue_18, bool CallFunc_Contains_ReturnValue_19, bool CallFunc_Contains_ReturnValue_20, bool CallFunc_Contains_ReturnValue_21, bool CallFunc_Contains_ReturnValue_22, bool CallFunc_Contains_ReturnValue_23, bool CallFunc_Contains_ReturnValue_24, FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, FColor K2Node_MakeStruct_Color_1, bool CallFunc_InitMarker_Valid_1, FName CallFunc_Conv_StringToName_ReturnValue, FColor K2Node_MakeStruct_Color_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, AActor* CallFunc_GetParentActor_ReturnValue_1, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_3, FColor K2Node_MakeStruct_Color_3, bool CallFunc_InitMarker_Valid_3);
    void ReceiveBeginPlay();
    void Report_PuzzleVaultChestName();
    void ExecuteUbergraph_BP_VaultRuin_Marker(int32_t EntryPoint, FColor K2Node_MakeStruct_Color, AActor* CallFunc_GetParentActor_ReturnValue, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid);
}; // Size: 0x3a0
#pragma pack(pop)
