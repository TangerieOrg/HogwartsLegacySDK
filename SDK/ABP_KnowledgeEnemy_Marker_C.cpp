#include "ABP_KnowledgeEnemy_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "E_OL_EnemyType\Type.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
ABP_KnowledgeEnemy_Marker_C* ABP_KnowledgeEnemy_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_KnowledgeEnemy_Marker.BP_KnowledgeEnemy_Marker_C");
    return (ABP_KnowledgeEnemy_Marker_C*)res;
}
void ABP_KnowledgeEnemy_Marker_C::UserConstructionScript(bool bar_4, bool Bar_3, bool Bar_2, bool Bar_1, FString Enemy_Type, FString Knowledge_Location_Enemy, FColor K2Node_MakeStruct_Color, FColor K2Node_MakeStruct_Color_1, FColor K2Node_MakeStruct_Color_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_InitMarker_Valid_1, FString CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_InitMarker_Valid_2, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_6, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_7, FColor K2Node_MakeStruct_Color_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_InitMarker_Valid_3, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_KnowledgeEnemy_Marker.BP_KnowledgeEnemy_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool bar_4; // 0x0
        bool Bar_3; // 0x1
        bool Bar_2; // 0x2
        bool Bar_1; // 0x3
        char pad_4[0x4];
        FString Enemy_Type; // 0x8
        FString Knowledge_Location_Enemy; // 0x18
        FColor K2Node_MakeStruct_Color; // 0x28
        FColor K2Node_MakeStruct_Color_1; // 0x2c
        FColor K2Node_MakeStruct_Color_2; // 0x30
        bool CallFunc_NotEqual_ByteByte_ReturnValue; // 0x34
        bool CallFunc_NotEqual_ByteByte_ReturnValue_1; // 0x35
        bool CallFunc_NotEqual_ByteByte_ReturnValue_2; // 0x36
        bool CallFunc_NotEqual_ByteByte_ReturnValue_3; // 0x37
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x38
        bool CallFunc_InitMarker_Valid; // 0x48
        char pad_49[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x50
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x60
        bool CallFunc_InitMarker_Valid_1; // 0x70
        char pad_71[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x78
        bool CallFunc_InitMarker_Valid_2; // 0x88
        char pad_89[0x7];
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x90
        bool CallFunc_NotEqual_ByteByte_ReturnValue_4; // 0xa0
        char pad_a1[0x7];
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0xa8
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0xb8
        bool CallFunc_NotEqual_ByteByte_ReturnValue_5; // 0xc8
        bool CallFunc_NotEqual_ByteByte_ReturnValue_6; // 0xc9
        char pad_ca[0x6];
        FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3; // 0xd0
        bool CallFunc_NotEqual_ByteByte_ReturnValue_7; // 0xe0
        char pad_e1[0x3];
        FColor K2Node_MakeStruct_Color_3; // 0xe4
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0xe8
        bool CallFunc_InitMarker_Valid_3; // 0xf4
        char pad_f5[0x3];
        float CallFunc_BreakRotator_Roll; // 0xf8
        float CallFunc_BreakRotator_Pitch; // 0xfc
        float CallFunc_BreakRotator_Yaw; // 0x100
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x104
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_1; // 0x110
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x11c
        float CallFunc_BreakRotator_Roll_1; // 0x128
        float CallFunc_BreakRotator_Pitch_1; // 0x12c
        float CallFunc_BreakRotator_Yaw_1; // 0x130
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_2; // 0x134
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0x140
        float CallFunc_BreakRotator_Roll_2; // 0x14c
        float CallFunc_BreakRotator_Pitch_2; // 0x150
        float CallFunc_BreakRotator_Yaw_2; // 0x154
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_3; // 0x158
        FVector CallFunc_K2_GetActorLocation_ReturnValue_3; // 0x164
        float CallFunc_BreakRotator_Roll_3; // 0x170
        float CallFunc_BreakRotator_Pitch_3; // 0x174
        float CallFunc_BreakRotator_Yaw_3; // 0x178
    }; // Size: 0x17c
    Params_UserConstructionScript params{};
    params.bar_4 = (bool)bar_4;
    params.Bar_3 = (bool)Bar_3;
    params.Bar_2 = (bool)Bar_2;
    params.Bar_1 = (bool)Bar_1;
    params.Enemy_Type = (FString)Enemy_Type;
    params.Knowledge_Location_Enemy = (FString)Knowledge_Location_Enemy;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.K2Node_MakeStruct_Color_1 = (FColor)K2Node_MakeStruct_Color_1;
    params.K2Node_MakeStruct_Color_2 = (FColor)K2Node_MakeStruct_Color_2;
    params.CallFunc_NotEqual_ByteByte_ReturnValue = (bool)CallFunc_NotEqual_ByteByte_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_1;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_2;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_InitMarker_Valid_1 = (bool)CallFunc_InitMarker_Valid_1;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_InitMarker_Valid_2 = (bool)CallFunc_InitMarker_Valid_2;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_4;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_5;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_6;
    params.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3 = (FString)CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3;
    params.CallFunc_NotEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_NotEqual_ByteByte_ReturnValue_7;
    params.K2Node_MakeStruct_Color_3 = (FColor)K2Node_MakeStruct_Color_3;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_InitMarker_Valid_3 = (bool)CallFunc_InitMarker_Valid_3;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue_1 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_K2_GetActorRotation_ReturnValue_2 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_BreakRotator_Roll_2 = (float)CallFunc_BreakRotator_Roll_2;
    params.CallFunc_BreakRotator_Pitch_2 = (float)CallFunc_BreakRotator_Pitch_2;
    params.CallFunc_BreakRotator_Yaw_2 = (float)CallFunc_BreakRotator_Yaw_2;
    params.CallFunc_K2_GetActorRotation_ReturnValue_3 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_3;
    params.CallFunc_K2_GetActorLocation_ReturnValue_3 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_3;
    params.CallFunc_BreakRotator_Roll_3 = (float)CallFunc_BreakRotator_Roll_3;
    params.CallFunc_BreakRotator_Pitch_3 = (float)CallFunc_BreakRotator_Pitch_3;
    params.CallFunc_BreakRotator_Yaw_3 = (float)CallFunc_BreakRotator_Yaw_3;
    ProcessEvent(func, &params);
}
