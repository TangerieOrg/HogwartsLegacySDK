#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "E_AVA_BanditCamp_List_AllTypes\Type.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ABeaconLocation;
class UClass;
class AActor;
#pragma pack(push, 1)
class ABP_BanditCamp_Marker_C : public ABP_Marker_Base_C {
public:
    UChildActorComponent* BeaconLocation; // 0x308
    FString DB_Name_0; // 0x310
    FString SetName; // 0x320
    bool Use_List; // 0x330
    E_AVA_BanditCamp_List_AllTypes::Type Camp_List_All_Types; // 0x331
    char pad_332[0x6];
    static ABP_BanditCamp_Marker_C* StaticClass();
    void UserConstructionScript(FString TempName2, FString TempName, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, FString CallFunc_SelectString_ReturnValue_1, bool CallFunc_Contains_ReturnValue_5, FString CallFunc_SelectString_ReturnValue_2, bool CallFunc_Contains_ReturnValue_6, FString CallFunc_SelectString_ReturnValue_3, bool CallFunc_Contains_ReturnValue_7, FString CallFunc_SelectString_ReturnValue_4, bool CallFunc_Contains_ReturnValue_8, FString CallFunc_SelectString_ReturnValue_5, FString CallFunc_SelectString_ReturnValue_6, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_SelectString_ReturnValue_7, FString CallFunc_SelectString_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, bool CallFunc_Contains_ReturnValue_9, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_Contains_ReturnValue_10, bool CallFunc_Contains_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, AActor* CallFunc_GetParentActor_ReturnValue, FColor K2Node_MakeStruct_Color, UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_InitMarker_Valid, FString CallFunc_GetClassDisplayName_ReturnValue);
}; // Size: 0x338
#pragma pack(pop)
