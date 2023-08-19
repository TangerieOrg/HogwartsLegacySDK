#include "AActor.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABP_OL_Chest_C.hpp"
#include "ABP_OL_Chest_Marker_C.hpp"
#include "ABP_OL_Chest_VP_Marker_C.hpp"
#include "ABP_OL_Vault_C.hpp"
#include "ABP_VaultRuin_Marker_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
ABP_VaultRuin_Marker_C* ABP_VaultRuin_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C");
    return (ABP_VaultRuin_Marker_C*)res;
}
void ABP_VaultRuin_Marker_C::AddBeaconToPuzzleVaultChests(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ABP_OL_Chest_VP_Marker_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32_t CallFunc_Array_Length_ReturnValue, ABP_OL_Chest_VP_Marker_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.AddBeaconToPuzzleVaultChests"));
    struct Params_AddBeaconToPuzzleVaultChests {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        TArray<ABP_OL_Chest_VP_Marker_C*> CallFunc_GetAllActorsOfClass_OutActors; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        char pad_24[0x4];
        ABP_OL_Chest_VP_Marker_C* CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_Less_IntInt_ReturnValue; // 0x30
        char pad_31[0x3];
        float CallFunc_GetDistanceTo_ReturnValue; // 0x34
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_AddBeaconToPuzzleVaultChests params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetAllActorsOfClass_OutActors = (TArray<ABP_OL_Chest_VP_Marker_C*>)CallFunc_GetAllActorsOfClass_OutActors;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (ABP_OL_Chest_VP_Marker_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetDistanceTo_ReturnValue = (float)CallFunc_GetDistanceTo_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllActorsOfClass_OutActors = params.CallFunc_GetAllActorsOfClass_OutActors;
}
void ABP_VaultRuin_Marker_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_VaultRuin_Marker_C::UpdateVaultChestOwnerData(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, AActor* CallFunc_GetParentActor_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ABP_OL_Chest_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32_t CallFunc_Array_Length_ReturnValue, ABP_OL_Chest_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, ABP_OL_Chest_Marker_C* K2Node_DynamicCast_AsBP_OL_Chest_Marker, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.UpdateVaultChestOwnerData"));
    struct Params_UpdateVaultChestOwnerData {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        TArray<ABP_OL_Chest_C*> CallFunc_GetAllActorsOfClass_OutActors; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        char pad_2c[0x4];
        ABP_OL_Chest_C* CallFunc_Array_Get_Item; // 0x30
        bool CallFunc_Less_IntInt_ReturnValue; // 0x38
        char pad_39[0x7];
        ABP_OL_Chest_Marker_C* K2Node_DynamicCast_AsBP_OL_Chest_Marker; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x49
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4a
        char pad_4b[0x1];
        float CallFunc_GetDistanceTo_ReturnValue; // 0x4c
        bool CallFunc_BooleanAND_ReturnValue; // 0x50
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x51
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x52
    }; // Size: 0x53
    Params_UpdateVaultChestOwnerData params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetAllActorsOfClass_OutActors = (TArray<ABP_OL_Chest_C*>)CallFunc_GetAllActorsOfClass_OutActors;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (ABP_OL_Chest_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_DynamicCast_AsBP_OL_Chest_Marker = (ABP_OL_Chest_Marker_C*)K2Node_DynamicCast_AsBP_OL_Chest_Marker;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_GetDistanceTo_ReturnValue = (float)CallFunc_GetDistanceTo_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetAllActorsOfClass_OutActors = params.CallFunc_GetAllActorsOfClass_OutActors;
}
void ABP_VaultRuin_Marker_C::UserConstructionScript(FString DoorNameLocal, TArray<UChildActorComponent*> HamletSet1, TArray<UChildActorComponent*> HamletSet2, TArray<bool> DisabledHamletBuildingList, UStaticMeshComponent* TempStaticMesh, UChildActorComponent* TempChildActor, TArray<UChildActorComponent*> TentObjectList, TArray<UStaticMeshComponent*> PropsList, TArray<bool> DisabledList, TArray<UStaticMeshComponent*> HamletSet1_StaticMeshList, TArray<UChildActorComponent*> ChildActorList, TArray<FTransform> TransformList, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult_1, AActor* CallFunc_GetParentActor_ReturnValue, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FString CallFunc_Replace_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_Contains_ReturnValue_9, bool CallFunc_Contains_ReturnValue_10, FString CallFunc_Replace_ReturnValue_1, bool CallFunc_Contains_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, bool CallFunc_Contains_ReturnValue_15, bool CallFunc_Contains_ReturnValue_16, bool CallFunc_Contains_ReturnValue_17, bool CallFunc_Contains_ReturnValue_18, bool CallFunc_Contains_ReturnValue_19, bool CallFunc_Contains_ReturnValue_20, bool CallFunc_Contains_ReturnValue_21, bool CallFunc_Contains_ReturnValue_22, bool CallFunc_Contains_ReturnValue_23, bool CallFunc_Contains_ReturnValue_24, FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, FColor K2Node_MakeStruct_Color_1, bool CallFunc_InitMarker_Valid_1, FName CallFunc_Conv_StringToName_ReturnValue, FColor K2Node_MakeStruct_Color_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, AActor* CallFunc_GetParentActor_ReturnValue_1, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_3, FColor K2Node_MakeStruct_Color_3, bool CallFunc_InitMarker_Valid_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FString DoorNameLocal; // 0x0
        TArray<UChildActorComponent*> HamletSet1; // 0x10
        TArray<UChildActorComponent*> HamletSet2; // 0x20
        TArray<bool> DisabledHamletBuildingList; // 0x30
        UStaticMeshComponent* TempStaticMesh; // 0x40
        UChildActorComponent* TempChildActor; // 0x48
        TArray<UChildActorComponent*> TentObjectList; // 0x50
        TArray<UStaticMeshComponent*> PropsList; // 0x60
        TArray<bool> DisabledList; // 0x70
        TArray<UStaticMeshComponent*> HamletSet1_StaticMeshList; // 0x80
        TArray<UChildActorComponent*> ChildActorList; // 0x90
        TArray<FTransform> TransformList; // 0xa0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0xb0
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0xc0
        FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult; // 0xd0
        FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult_1; // 0x158
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x1e0
        ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault; // 0x1e8
        bool K2Node_DynamicCast_bSuccess; // 0x1f0
        char pad_1f1[0x3];
        FVector CallFunc_BreakTransform_Location; // 0x1f4
        FRotator CallFunc_BreakTransform_Rotation; // 0x200
        FVector CallFunc_BreakTransform_Scale; // 0x20c
        FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult_2; // 0x218
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x2a0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x2ac
        float CallFunc_BreakRotator_Roll; // 0x2b8
        float CallFunc_BreakRotator_Pitch; // 0x2bc
        float CallFunc_BreakRotator_Yaw; // 0x2c0
        char pad_2c4[0x4];
        FString CallFunc_Replace_ReturnValue; // 0x2c8
        bool CallFunc_Contains_ReturnValue; // 0x2d8
        bool CallFunc_Contains_ReturnValue_1; // 0x2d9
        bool CallFunc_Contains_ReturnValue_2; // 0x2da
        bool CallFunc_Contains_ReturnValue_3; // 0x2db
        bool CallFunc_Contains_ReturnValue_4; // 0x2dc
        bool CallFunc_Contains_ReturnValue_5; // 0x2dd
        bool CallFunc_Contains_ReturnValue_6; // 0x2de
        bool CallFunc_Contains_ReturnValue_7; // 0x2df
        bool CallFunc_Contains_ReturnValue_8; // 0x2e0
        bool CallFunc_Contains_ReturnValue_9; // 0x2e1
        bool CallFunc_Contains_ReturnValue_10; // 0x2e2
        char pad_2e3[0x5];
        FString CallFunc_Replace_ReturnValue_1; // 0x2e8
        bool CallFunc_Contains_ReturnValue_11; // 0x2f8
        bool CallFunc_Contains_ReturnValue_12; // 0x2f9
        bool CallFunc_Contains_ReturnValue_13; // 0x2fa
        bool CallFunc_Contains_ReturnValue_14; // 0x2fb
        bool CallFunc_Contains_ReturnValue_15; // 0x2fc
        bool CallFunc_Contains_ReturnValue_16; // 0x2fd
        bool CallFunc_Contains_ReturnValue_17; // 0x2fe
        bool CallFunc_Contains_ReturnValue_18; // 0x2ff
        bool CallFunc_Contains_ReturnValue_19; // 0x300
        bool CallFunc_Contains_ReturnValue_20; // 0x301
        bool CallFunc_Contains_ReturnValue_21; // 0x302
        bool CallFunc_Contains_ReturnValue_22; // 0x303
        bool CallFunc_Contains_ReturnValue_23; // 0x304
        bool CallFunc_Contains_ReturnValue_24; // 0x305
        char pad_306[0x2];
        FColor K2Node_MakeStruct_Color; // 0x308
        bool CallFunc_InitMarker_Valid; // 0x30c
        char pad_30d[0x3];
        FColor K2Node_MakeStruct_Color_1; // 0x310
        bool CallFunc_InitMarker_Valid_1; // 0x314
        char pad_315[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x318
        FColor K2Node_MakeStruct_Color_2; // 0x320
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_1; // 0x324
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x330
        float CallFunc_BreakRotator_Roll_1; // 0x33c
        float CallFunc_BreakRotator_Pitch_1; // 0x340
        float CallFunc_BreakRotator_Yaw_1; // 0x344
        AActor* CallFunc_GetParentActor_ReturnValue_1; // 0x348
        ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault_1; // 0x350
        bool K2Node_DynamicCast_bSuccess_1; // 0x358
        char pad_359[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0x35c
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x368
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x378
        bool CallFunc_InitMarker_Valid_2; // 0x379
        char pad_37a[0x2];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_2; // 0x37c
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x388
        bool K2Node_DynamicCast_bSuccess_2; // 0x390
        char pad_391[0x3];
        float CallFunc_BreakRotator_Roll_2; // 0x394
        float CallFunc_BreakRotator_Pitch_2; // 0x398
        float CallFunc_BreakRotator_Yaw_2; // 0x39c
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x3a0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x3b0
        char pad_3b1[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x3b8
        FColor K2Node_MakeStruct_Color_3; // 0x3c8
        bool CallFunc_InitMarker_Valid_3; // 0x3cc
    }; // Size: 0x3cd
    Params_UserConstructionScript params{};
    params.DoorNameLocal = (FString)DoorNameLocal;
    params.HamletSet1 = (TArray<UChildActorComponent*>)HamletSet1;
    params.HamletSet2 = (TArray<UChildActorComponent*>)HamletSet2;
    params.DisabledHamletBuildingList = (TArray<bool>)DisabledHamletBuildingList;
    params.TempStaticMesh = (UStaticMeshComponent*)TempStaticMesh;
    params.TempChildActor = (UChildActorComponent*)TempChildActor;
    params.TentObjectList = (TArray<UChildActorComponent*>)TentObjectList;
    params.PropsList = (TArray<UStaticMeshComponent*>)PropsList;
    params.DisabledList = (TArray<bool>)DisabledList;
    params.HamletSet1_StaticMeshList = (TArray<UStaticMeshComponent*>)HamletSet1_StaticMeshList;
    params.ChildActorList = (TArray<UChildActorComponent*>)ChildActorList;
    params.TransformList = (TArray<FTransform>)TransformList;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_K2_AddLocalOffset_SweepHitResult = (FHitResult)CallFunc_K2_AddLocalOffset_SweepHitResult;
    params.CallFunc_K2_AddLocalOffset_SweepHitResult_1 = (FHitResult)CallFunc_K2_AddLocalOffset_SweepHitResult_1;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.K2Node_DynamicCast_AsBP_OL_Vault = (ABP_OL_Vault_C*)K2Node_DynamicCast_AsBP_OL_Vault;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_K2_AddLocalOffset_SweepHitResult_2 = (FHitResult)CallFunc_K2_AddLocalOffset_SweepHitResult_2;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Replace_ReturnValue = (FString)CallFunc_Replace_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_Contains_ReturnValue_6 = (bool)CallFunc_Contains_ReturnValue_6;
    params.CallFunc_Contains_ReturnValue_7 = (bool)CallFunc_Contains_ReturnValue_7;
    params.CallFunc_Contains_ReturnValue_8 = (bool)CallFunc_Contains_ReturnValue_8;
    params.CallFunc_Contains_ReturnValue_9 = (bool)CallFunc_Contains_ReturnValue_9;
    params.CallFunc_Contains_ReturnValue_10 = (bool)CallFunc_Contains_ReturnValue_10;
    params.CallFunc_Replace_ReturnValue_1 = (FString)CallFunc_Replace_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_11 = (bool)CallFunc_Contains_ReturnValue_11;
    params.CallFunc_Contains_ReturnValue_12 = (bool)CallFunc_Contains_ReturnValue_12;
    params.CallFunc_Contains_ReturnValue_13 = (bool)CallFunc_Contains_ReturnValue_13;
    params.CallFunc_Contains_ReturnValue_14 = (bool)CallFunc_Contains_ReturnValue_14;
    params.CallFunc_Contains_ReturnValue_15 = (bool)CallFunc_Contains_ReturnValue_15;
    params.CallFunc_Contains_ReturnValue_16 = (bool)CallFunc_Contains_ReturnValue_16;
    params.CallFunc_Contains_ReturnValue_17 = (bool)CallFunc_Contains_ReturnValue_17;
    params.CallFunc_Contains_ReturnValue_18 = (bool)CallFunc_Contains_ReturnValue_18;
    params.CallFunc_Contains_ReturnValue_19 = (bool)CallFunc_Contains_ReturnValue_19;
    params.CallFunc_Contains_ReturnValue_20 = (bool)CallFunc_Contains_ReturnValue_20;
    params.CallFunc_Contains_ReturnValue_21 = (bool)CallFunc_Contains_ReturnValue_21;
    params.CallFunc_Contains_ReturnValue_22 = (bool)CallFunc_Contains_ReturnValue_22;
    params.CallFunc_Contains_ReturnValue_23 = (bool)CallFunc_Contains_ReturnValue_23;
    params.CallFunc_Contains_ReturnValue_24 = (bool)CallFunc_Contains_ReturnValue_24;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.K2Node_MakeStruct_Color_1 = (FColor)K2Node_MakeStruct_Color_1;
    params.CallFunc_InitMarker_Valid_1 = (bool)CallFunc_InitMarker_Valid_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.K2Node_MakeStruct_Color_2 = (FColor)K2Node_MakeStruct_Color_2;
    params.CallFunc_K2_GetActorRotation_ReturnValue_1 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_GetParentActor_ReturnValue_1 = (AActor*)CallFunc_GetParentActor_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_OL_Vault_1 = (ABP_OL_Vault_C*)K2Node_DynamicCast_AsBP_OL_Vault_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_InitMarker_Valid_2 = (bool)CallFunc_InitMarker_Valid_2;
    params.CallFunc_K2_GetActorRotation_ReturnValue_2 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_2;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_BreakRotator_Roll_2 = (float)CallFunc_BreakRotator_Roll_2;
    params.CallFunc_BreakRotator_Pitch_2 = (float)CallFunc_BreakRotator_Pitch_2;
    params.CallFunc_BreakRotator_Yaw_2 = (float)CallFunc_BreakRotator_Yaw_2;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.K2Node_MakeStruct_Color_3 = (FColor)K2Node_MakeStruct_Color_3;
    params.CallFunc_InitMarker_Valid_3 = (bool)CallFunc_InitMarker_Valid_3;
    ProcessEvent(func, &params);
}
void ABP_VaultRuin_Marker_C::Report_PuzzleVaultChestName() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.Report PuzzleVaultChestName"));
    struct Params_Report_PuzzleVaultChestName {
    }; // Size: 0x0
    Params_Report_PuzzleVaultChestName params{};
    ProcessEvent(func, &params);
}
void ABP_VaultRuin_Marker_C::ExecuteUbergraph_BP_VaultRuin_Marker(int32_t EntryPoint, FColor K2Node_MakeStruct_Color, AActor* CallFunc_GetParentActor_ReturnValue, ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Vaults/Blueprints/BP_VaultRuin_Marker.BP_VaultRuin_Marker_C.ExecuteUbergraph_BP_VaultRuin_Marker"));
    struct Params_ExecuteUbergraph_BP_VaultRuin_Marker {
        int32_t EntryPoint; // 0x0
        FColor K2Node_MakeStruct_Color; // 0x4
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x8
        ABP_OL_Vault_C* K2Node_DynamicCast_AsBP_OL_Vault; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x30
        bool CallFunc_InitMarker_Valid; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_BP_VaultRuin_Marker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.K2Node_DynamicCast_AsBP_OL_Vault = (ABP_OL_Vault_C*)K2Node_DynamicCast_AsBP_OL_Vault;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    ProcessEvent(func, &params);
}
