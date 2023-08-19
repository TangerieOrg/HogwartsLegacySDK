#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class UBeaconInfo;
class ABP_VaultRuin_Marker_C;
class ABeaconLocation;
class UBeaconManager;
#pragma pack(push, 1)
class ABP_OL_Chest_VP_Marker_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x308
    UChildActorComponent* BeaconLocation; // 0x310
    float Radius; // 0x318
    char pad_31c[0x4];
    FString Puzzle_Vault_Chest_Name; // 0x320
    int32_t beaconCount; // 0x330
    bool Show_Debug_Radius; // 0x334
    char pad_335[0x3];
    FString Vault_Name; // 0x338
    static ABP_OL_Chest_VP_Marker_C* StaticClass();
    void UserConstructionScript();
    void ReceiveBeginPlay0();
    void Gett_Beacon();
    void ExecuteUbergraph_BP_OL_Chest_VP_Marker(int32_t EntryPoint, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Array_Index_Variable, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetBeaconHandle_ReturnValue, UBeaconManager* CallFunc_Get_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UBeaconInfo* CallFunc_GetBeaconByHandleBP_ReturnValue, TArray<ABP_VaultRuin_Marker_C*>& CallFunc_GetAllActorsOfClass_OutActors, ABP_VaultRuin_Marker_C* CallFunc_Array_Get_Item, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
}; // Size: 0x348
#pragma pack(pop)
