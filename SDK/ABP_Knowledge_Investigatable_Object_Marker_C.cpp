#include "AActor.hpp"
#include "ABP_Knowledge_Investigatable_Object_C.hpp"
#include "ABP_Knowledge_Investigatable_Object_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABP_Overland_Knowledge_Investigatable_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_Knowledge_Investigatable_Object_Marker_C* ABP_Knowledge_Investigatable_Object_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object_Marker.BP_Knowledge_Investigatable_Object_Marker_C");
    return (ABP_Knowledge_Investigatable_Object_Marker_C*)res;
}
void ABP_Knowledge_Investigatable_Object_Marker_C::UserConstructionScript(bool Bar_and_Text_Off, FString Name, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_Contains_ReturnValue_1, ABP_Knowledge_Investigatable_Object_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetPathName_ReturnValue, bool CallFunc_Contains_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Contains_ReturnValue_3, ABP_Overland_Knowledge_Investigatable_C* K2Node_DynamicCast_AsBP_Overland_Knowledge_Investigatable, bool K2Node_DynamicCast_bSuccess_1, FString CallFunc_RightChop_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_2, FColor K2Node_MakeStruct_Color, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_InitMarker_Valid, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object_Marker.BP_Knowledge_Investigatable_Object_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool Bar_and_Text_Off; // 0x0
        char pad_1[0x7];
        FString Name; // 0x8
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x18
        bool CallFunc_Contains_ReturnValue; // 0x24
        bool CallFunc_EqualEqual_VectorVector_ReturnValue; // 0x25
        char pad_26[0x2];
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x28
        bool CallFunc_Contains_ReturnValue_1; // 0x30
        char pad_31[0x7];
        ABP_Knowledge_Investigatable_Object_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x7];
        FString CallFunc_GetPathName_ReturnValue; // 0x48
        bool CallFunc_Contains_ReturnValue_2; // 0x58
        char pad_59[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x60
        AActor* CallFunc_GetParentActor_ReturnValue_1; // 0x70
        FString CallFunc_GetDisplayName_ReturnValue; // 0x78
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x88
        bool CallFunc_Contains_ReturnValue_3; // 0x98
        char pad_99[0x7];
        ABP_Overland_Knowledge_Investigatable_C* K2Node_DynamicCast_AsBP_Overland_Knowledge_Investigatable; // 0xa0
        bool K2Node_DynamicCast_bSuccess_1; // 0xa8
        char pad_a9[0x7];
        FString CallFunc_RightChop_ReturnValue; // 0xb0
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0xc0
        bool K2Node_DynamicCast_bSuccess_2; // 0xc8
        char pad_c9[0x3];
        FColor K2Node_MakeStruct_Color; // 0xcc
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0xd0
        bool CallFunc_InitMarker_Valid; // 0xdc
        char pad_dd[0x3];
        float CallFunc_BreakRotator_Roll; // 0xe0
        float CallFunc_BreakRotator_Pitch; // 0xe4
        float CallFunc_BreakRotator_Yaw; // 0xe8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0xec
    }; // Size: 0xf8
    Params_UserConstructionScript params{};
    params.Bar_and_Text_Off = (bool)Bar_and_Text_Off;
    params.Name = (FString)Name;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_EqualEqual_VectorVector_ReturnValue = (bool)CallFunc_EqualEqual_VectorVector_ReturnValue;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object = (ABP_Knowledge_Investigatable_Object_C*)K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetPathName_ReturnValue = (FString)CallFunc_GetPathName_ReturnValue;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_GetParentActor_ReturnValue_1 = (AActor*)CallFunc_GetParentActor_ReturnValue_1;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.K2Node_DynamicCast_AsBP_Overland_Knowledge_Investigatable = (ABP_Overland_Knowledge_Investigatable_C*)K2Node_DynamicCast_AsBP_Overland_Knowledge_Investigatable;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_RightChop_ReturnValue = (FString)CallFunc_RightChop_ReturnValue;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
