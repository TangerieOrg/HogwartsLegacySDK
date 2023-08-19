#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_KnowledgeNamedEnemy_Marker_C : public ABP_Marker_Base_C {
public:
    UChildActorComponent* BeaconLocation; // 0x308
    FString Named_Enemy_Name; // 0x310
    FString New_Enemy_Name; // 0x320
    static ABP_KnowledgeNamedEnemy_Marker_C* StaticClass();
    void UserConstructionScript(bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, bool CallFunc_EqualEqual_StrStr_ReturnValue_9, bool CallFunc_EqualEqual_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_StrStr_ReturnValue_11, bool CallFunc_EqualEqual_StrStr_ReturnValue_12, bool CallFunc_EqualEqual_StrStr_ReturnValue_13, bool CallFunc_EqualEqual_StrStr_ReturnValue_14, bool CallFunc_EqualEqual_StrStr_ReturnValue_15, bool CallFunc_EqualEqual_StrStr_ReturnValue_16, bool CallFunc_EqualEqual_StrStr_ReturnValue_17, bool CallFunc_EqualEqual_StrStr_ReturnValue_18, bool CallFunc_EqualEqual_StrStr_ReturnValue_19, bool CallFunc_EqualEqual_StrStr_ReturnValue_20, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
}; // Size: 0x330
#pragma pack(pop)
