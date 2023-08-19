#include "AActor.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABP_Merlin_Gazebo_C.hpp"
#include "ABP_SphinxPuzzle_Marker_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FIntVector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_SphinxPuzzle_Marker_C* ABP_SphinxPuzzle_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C");
    return (ABP_SphinxPuzzle_Marker_C*)res;
}
void ABP_SphinxPuzzle_Marker_C::UserConstructionScript(int32_t Temp_int_Array_Index_Variable, AActor* CallFunc_GetParentActor_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FIntVector CallFunc_FTruncVector_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue_1, FString CallFunc_Conv_IntVectorToString_ReturnValue, TArray<AActor*>& CallFunc_GetAllChildActors_ChildActors, FString CallFunc_Concat_StrStr_ReturnValue_1, AActor* CallFunc_Array_Get_Item, ABP_Merlin_Gazebo_C* K2Node_DynamicCast_AsBP_Merlin_Gazebo, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Conv_ObjectToString_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Contains_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable, AActor* CallFunc_GetParentActor_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_RightChop_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x20
        FIntVector CallFunc_FTruncVector_ReturnValue; // 0x2c
        AActor* CallFunc_GetParentActor_ReturnValue_1; // 0x38
        FString CallFunc_Conv_IntVectorToString_ReturnValue; // 0x40
        TArray<AActor*> CallFunc_GetAllChildActors_ChildActors; // 0x50
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x60
        AActor* CallFunc_Array_Get_Item; // 0x70
        ABP_Merlin_Gazebo_C* K2Node_DynamicCast_AsBP_Merlin_Gazebo; // 0x78
        bool K2Node_DynamicCast_bSuccess; // 0x80
        char pad_81[0x7];
        FString CallFunc_Conv_ObjectToString_ReturnValue; // 0x88
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x98
        bool CallFunc_Contains_ReturnValue; // 0xa4
        char pad_a5[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0xa8
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0xac
        float CallFunc_BreakRotator_Roll; // 0xb8
        float CallFunc_BreakRotator_Pitch; // 0xbc
        float CallFunc_BreakRotator_Yaw; // 0xc0
        char pad_c4[0x4];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0xc8
        bool K2Node_DynamicCast_bSuccess_1; // 0xd0
        char pad_d1[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0xd4
        int32_t Temp_int_Loop_Counter_Variable; // 0xe0
        char pad_e4[0x4];
        AActor* CallFunc_GetParentActor_ReturnValue_2; // 0xe8
        bool CallFunc_Less_IntInt_ReturnValue; // 0xf0
        char pad_f1[0x7];
        FString CallFunc_GetDisplayName_ReturnValue; // 0xf8
        FString CallFunc_RightChop_ReturnValue; // 0x108
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x118
        char pad_11c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x120
        FColor K2Node_MakeStruct_Color; // 0x130
        bool CallFunc_InitMarker_Valid; // 0x134
    }; // Size: 0x135
    Params_UserConstructionScript params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_FTruncVector_ReturnValue = (FIntVector)CallFunc_FTruncVector_ReturnValue;
    params.CallFunc_GetParentActor_ReturnValue_1 = (AActor*)CallFunc_GetParentActor_ReturnValue_1;
    params.CallFunc_Conv_IntVectorToString_ReturnValue = (FString)CallFunc_Conv_IntVectorToString_ReturnValue;
    params.CallFunc_GetAllChildActors_ChildActors = (TArray<AActor*>)CallFunc_GetAllChildActors_ChildActors;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.K2Node_DynamicCast_AsBP_Merlin_Gazebo = (ABP_Merlin_Gazebo_C*)K2Node_DynamicCast_AsBP_Merlin_Gazebo;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Conv_ObjectToString_ReturnValue = (FString)CallFunc_Conv_ObjectToString_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_GetParentActor_ReturnValue_2 = (AActor*)CallFunc_GetParentActor_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_RightChop_ReturnValue = (FString)CallFunc_RightChop_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    ProcessEvent(func, &params);
    CallFunc_GetAllChildActors_ChildActors = params.CallFunc_GetAllChildActors_ChildActors;
}
void ABP_SphinxPuzzle_Marker_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SphinxPuzzle_Marker_C::ExecuteUbergraph_BP_SphinxPuzzle_Marker(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/SphinxPuzzles/Blueprints/BP_SphinxPuzzle_Marker.BP_SphinxPuzzle_Marker_C.ExecuteUbergraph_BP_SphinxPuzzle_Marker"));
    struct Params_ExecuteUbergraph_BP_SphinxPuzzle_Marker {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_SphinxPuzzle_Marker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
