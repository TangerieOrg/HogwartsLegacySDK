#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FIntVector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class AActor;
class ABP_Merlin_Gazebo_C;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_SphinxPuzzle_Marker_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x308
    UChildActorComponent* BeaconLocation; // 0x310
    FVector Gazebo_Location; // 0x318
    FVector Parent_0_0_0; // 0x324
    FString New_DB_Name; // 0x330
    static ABP_SphinxPuzzle_Marker_C* StaticClass();
    void UserConstructionScript(int32_t Temp_int_Array_Index_Variable, AActor* CallFunc_GetParentActor_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FIntVector CallFunc_FTruncVector_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue_1, FString CallFunc_Conv_IntVectorToString_ReturnValue, TArray<AActor*>& CallFunc_GetAllChildActors_ChildActors, FString CallFunc_Concat_StrStr_ReturnValue_1, AActor* CallFunc_Array_Get_Item, ABP_Merlin_Gazebo_C* K2Node_DynamicCast_AsBP_Merlin_Gazebo, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Conv_ObjectToString_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Contains_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable, AActor* CallFunc_GetParentActor_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_RightChop_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SphinxPuzzle_Marker(int32_t EntryPoint);
}; // Size: 0x340
#pragma pack(pop)
