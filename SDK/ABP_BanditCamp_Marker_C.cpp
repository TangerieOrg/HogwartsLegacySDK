#include "AActor.hpp"
#include "ABP_BanditCamp_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABeaconLocation.hpp"
#include "E_AVA_BanditCamp_List_AllTypes\Type.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
ABP_BanditCamp_Marker_C* ABP_BanditCamp_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/BanditCamps/Blueprints/BP_BanditCamp_Marker.BP_BanditCamp_Marker_C");
    return (ABP_BanditCamp_Marker_C*)res;
}
void ABP_BanditCamp_Marker_C::UserConstructionScript(FString TempName2, FString TempName, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, FString CallFunc_SelectString_ReturnValue_1, bool CallFunc_Contains_ReturnValue_5, FString CallFunc_SelectString_ReturnValue_2, bool CallFunc_Contains_ReturnValue_6, FString CallFunc_SelectString_ReturnValue_3, bool CallFunc_Contains_ReturnValue_7, FString CallFunc_SelectString_ReturnValue_4, bool CallFunc_Contains_ReturnValue_8, FString CallFunc_SelectString_ReturnValue_5, FString CallFunc_SelectString_ReturnValue_6, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FString CallFunc_SelectString_ReturnValue_7, FString CallFunc_SelectString_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, bool CallFunc_Contains_ReturnValue_9, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_Contains_ReturnValue_10, bool CallFunc_Contains_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, AActor* CallFunc_GetParentActor_ReturnValue, FColor K2Node_MakeStruct_Color, UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_InitMarker_Valid, FString CallFunc_GetClassDisplayName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/BanditCamps/Blueprints/BP_BanditCamp_Marker.BP_BanditCamp_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FString TempName2; // 0x0
        FString TempName; // 0x10
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x20
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x2c
        float CallFunc_BreakRotator_Roll; // 0x38
        float CallFunc_BreakRotator_Pitch; // 0x3c
        float CallFunc_BreakRotator_Yaw; // 0x40
        bool CallFunc_Contains_ReturnValue; // 0x44
        bool CallFunc_IsEmpty_ReturnValue; // 0x45
        bool CallFunc_Contains_ReturnValue_1; // 0x46
        char pad_47[0x1];
        FString CallFunc_SelectString_ReturnValue; // 0x48
        bool CallFunc_Contains_ReturnValue_2; // 0x58
        bool CallFunc_Contains_ReturnValue_3; // 0x59
        bool CallFunc_Contains_ReturnValue_4; // 0x5a
        char pad_5b[0x5];
        FString CallFunc_SelectString_ReturnValue_1; // 0x60
        bool CallFunc_Contains_ReturnValue_5; // 0x70
        char pad_71[0x7];
        FString CallFunc_SelectString_ReturnValue_2; // 0x78
        bool CallFunc_Contains_ReturnValue_6; // 0x88
        char pad_89[0x7];
        FString CallFunc_SelectString_ReturnValue_3; // 0x90
        bool CallFunc_Contains_ReturnValue_7; // 0xa0
        char pad_a1[0x7];
        FString CallFunc_SelectString_ReturnValue_4; // 0xa8
        bool CallFunc_Contains_ReturnValue_8; // 0xb8
        char pad_b9[0x7];
        FString CallFunc_SelectString_ReturnValue_5; // 0xc0
        FString CallFunc_SelectString_ReturnValue_6; // 0xd0
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xe0
        FString CallFunc_SelectString_ReturnValue_7; // 0xf0
        FString CallFunc_SelectString_ReturnValue_8; // 0x100
        bool CallFunc_IsValid_ReturnValue; // 0x110
        char pad_111[0x7];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x118
        bool K2Node_DynamicCast_bSuccess; // 0x120
        char pad_121[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x128
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_1; // 0x138
        bool CallFunc_Contains_ReturnValue_9; // 0x144
        char pad_145[0x3];
        float CallFunc_BreakRotator_Roll_1; // 0x148
        float CallFunc_BreakRotator_Pitch_1; // 0x14c
        float CallFunc_BreakRotator_Yaw_1; // 0x150
        bool CallFunc_Contains_ReturnValue_10; // 0x154
        bool CallFunc_Contains_ReturnValue_11; // 0x155
        bool CallFunc_Contains_ReturnValue_12; // 0x156
        bool CallFunc_Contains_ReturnValue_13; // 0x157
        bool CallFunc_Contains_ReturnValue_14; // 0x158
        char pad_159[0x3];
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x15c
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x168
        FColor K2Node_MakeStruct_Color; // 0x170
        char pad_174[0x4];
        UClass* CallFunc_GetObjectClass_ReturnValue; // 0x178
        bool CallFunc_InitMarker_Valid; // 0x180
        char pad_181[0x7];
        FString CallFunc_GetClassDisplayName_ReturnValue; // 0x188
    }; // Size: 0x198
    Params_UserConstructionScript params{};
    params.TempName2 = (FString)TempName2;
    params.TempName = (FString)TempName;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_IsEmpty_ReturnValue = (bool)CallFunc_IsEmpty_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_SelectString_ReturnValue_1 = (FString)CallFunc_SelectString_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_SelectString_ReturnValue_2 = (FString)CallFunc_SelectString_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_6 = (bool)CallFunc_Contains_ReturnValue_6;
    params.CallFunc_SelectString_ReturnValue_3 = (FString)CallFunc_SelectString_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_7 = (bool)CallFunc_Contains_ReturnValue_7;
    params.CallFunc_SelectString_ReturnValue_4 = (FString)CallFunc_SelectString_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_8 = (bool)CallFunc_Contains_ReturnValue_8;
    params.CallFunc_SelectString_ReturnValue_5 = (FString)CallFunc_SelectString_ReturnValue_5;
    params.CallFunc_SelectString_ReturnValue_6 = (FString)CallFunc_SelectString_ReturnValue_6;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_SelectString_ReturnValue_7 = (FString)CallFunc_SelectString_ReturnValue_7;
    params.CallFunc_SelectString_ReturnValue_8 = (FString)CallFunc_SelectString_ReturnValue_8;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue_1 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_9 = (bool)CallFunc_Contains_ReturnValue_9;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_Contains_ReturnValue_10 = (bool)CallFunc_Contains_ReturnValue_10;
    params.CallFunc_Contains_ReturnValue_11 = (bool)CallFunc_Contains_ReturnValue_11;
    params.CallFunc_Contains_ReturnValue_12 = (bool)CallFunc_Contains_ReturnValue_12;
    params.CallFunc_Contains_ReturnValue_13 = (bool)CallFunc_Contains_ReturnValue_13;
    params.CallFunc_Contains_ReturnValue_14 = (bool)CallFunc_Contains_ReturnValue_14;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_GetObjectClass_ReturnValue = (UClass*)CallFunc_GetObjectClass_ReturnValue;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_GetClassDisplayName_ReturnValue = (FString)CallFunc_GetClassDisplayName_ReturnValue;
    ProcessEvent(func, &params);
}
