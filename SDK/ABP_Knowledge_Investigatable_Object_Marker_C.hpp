#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ABP_Knowledge_Investigatable_Object_C;
class AActor;
class ABP_Overland_Knowledge_Investigatable_C;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_Knowledge_Investigatable_Object_Marker_C : public ABP_Marker_Base_C {
public:
    UChildActorComponent* BeaconLocation; // 0x308
    FString IName; // 0x310
    static ABP_Knowledge_Investigatable_Object_Marker_C* StaticClass();
    void UserConstructionScript(bool Bar_and_Text_Off, FString Name, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_Contains_ReturnValue_1, ABP_Knowledge_Investigatable_Object_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetPathName_ReturnValue, bool CallFunc_Contains_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Contains_ReturnValue_3, ABP_Overland_Knowledge_Investigatable_C* K2Node_DynamicCast_AsBP_Overland_Knowledge_Investigatable, bool K2Node_DynamicCast_bSuccess_1, FString CallFunc_RightChop_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_2, FColor K2Node_MakeStruct_Color, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_InitMarker_Valid, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
}; // Size: 0x320
#pragma pack(pop)
