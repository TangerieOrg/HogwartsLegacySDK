#include "AActor.hpp"
#include "ABP_HM_HW_MappedItems_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
void ABP_HM_HW_MappedItems_Marker_C::UserConstructionScript(FColor Marker_Color, bool CallFunc_Contains_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, FColor K2Node_MakeStruct_Color, FString CallFunc_Concat_StrStr_ReturnValue_2, FColor K2Node_MakeStruct_Color_1, FString CallFunc_Concat_StrStr_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_Contains_ReturnValue_9, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Contains_ReturnValue_10, bool CallFunc_Contains_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_7, FColor K2Node_MakeStruct_Color_2, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_11, FString CallFunc_Concat_StrStr_ReturnValue_5, FColor K2Node_MakeStruct_Color_3, bool CallFunc_Contains_ReturnValue_15, bool CallFunc_Contains_ReturnValue_16, bool CallFunc_Contains_ReturnValue_17, bool CallFunc_Contains_ReturnValue_18, bool CallFunc_Contains_ReturnValue_19, bool CallFunc_Contains_ReturnValue_20, bool CallFunc_Contains_ReturnValue_21, bool CallFunc_Contains_ReturnValue_22, bool CallFunc_Contains_ReturnValue_23, bool CallFunc_Contains_ReturnValue_24, bool CallFunc_Contains_ReturnValue_25, bool CallFunc_Contains_ReturnValue_26, bool CallFunc_Contains_ReturnValue_27, bool CallFunc_Contains_ReturnValue_28, bool CallFunc_Contains_ReturnValue_29, bool CallFunc_Contains_ReturnValue_30, bool CallFunc_Contains_ReturnValue_31, bool CallFunc_Contains_ReturnValue_32, bool CallFunc_Contains_ReturnValue_33, bool CallFunc_Contains_ReturnValue_34, bool CallFunc_Contains_ReturnValue_35, bool CallFunc_Contains_ReturnValue_36, bool CallFunc_Contains_ReturnValue_37, bool CallFunc_Contains_ReturnValue_38, bool CallFunc_Contains_ReturnValue_39, bool CallFunc_Contains_ReturnValue_40, bool CallFunc_Contains_ReturnValue_41, bool CallFunc_Contains_ReturnValue_42, bool CallFunc_Contains_ReturnValue_43, bool CallFunc_Contains_ReturnValue_44, bool CallFunc_Contains_ReturnValue_45, bool CallFunc_Contains_ReturnValue_46, FString CallFunc_Concat_StrStr_ReturnValue_6, FString CallFunc_Concat_StrStr_ReturnValue_7, ULevel* CallFunc_GetLevelFromActor_ReturnValue, FString CallFunc_GetPathName_ReturnValue, ULevel* CallFunc_GetLevelFromActor_ReturnValue_1, bool CallFunc_Contains_ReturnValue_47, FString CallFunc_GetPathName_ReturnValue_1, bool CallFunc_Contains_ReturnValue_48, bool CallFunc_Contains_ReturnValue_49, bool CallFunc_BooleanOR_ReturnValue_12, FColor K2Node_MakeStruct_Color_4, FString CallFunc_Concat_StrStr_ReturnValue_8, FString CallFunc_Concat_StrStr_ReturnValue_9, FString CallFunc_Concat_StrStr_ReturnValue_10, FColor K2Node_MakeStruct_Color_5, FString CallFunc_Concat_StrStr_ReturnValue_11, FColor K2Node_MakeStruct_Color_6, FString CallFunc_Concat_StrStr_ReturnValue_12, FString CallFunc_Concat_StrStr_ReturnValue_13, FString CallFunc_Concat_StrStr_ReturnValue_14, FColor K2Node_MakeStruct_Color_7, FString CallFunc_Concat_StrStr_ReturnValue_15, FColor K2Node_MakeStruct_Color_8, FString CallFunc_Concat_StrStr_ReturnValue_16, FString CallFunc_Concat_StrStr_ReturnValue_17, FString CallFunc_Concat_StrStr_ReturnValue_18, FColor K2Node_MakeStruct_Color_9, FString CallFunc_Concat_StrStr_ReturnValue_19, FColor K2Node_MakeStruct_Color_10, FString CallFunc_Concat_StrStr_ReturnValue_20, FString CallFunc_Concat_StrStr_ReturnValue_21, FString CallFunc_Concat_StrStr_ReturnValue_22, FString CallFunc_Concat_StrStr_ReturnValue_23, FString CallFunc_Concat_StrStr_ReturnValue_24, FString CallFunc_Concat_StrStr_ReturnValue_25, FColor K2Node_MakeStruct_Color_11, bool CallFunc_InitMarker_Valid, AActor* CallFunc_GetParentActor_ReturnValue, ULevel* CallFunc_GetLevelFromActor_ReturnValue_2, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_GetLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue_50, bool CallFunc_Contains_ReturnValue_51, bool CallFunc_Contains_ReturnValue_52, bool CallFunc_Contains_ReturnValue_53, bool CallFunc_Contains_ReturnValue_54, bool CallFunc_Contains_ReturnValue_55, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_Contains_ReturnValue_56, bool CallFunc_Contains_ReturnValue_57, bool CallFunc_Contains_ReturnValue_58, bool CallFunc_Contains_ReturnValue_59, bool CallFunc_Contains_ReturnValue_60, bool CallFunc_Contains_ReturnValue_61, bool CallFunc_Contains_ReturnValue_62, bool CallFunc_Contains_ReturnValue_63, bool CallFunc_Contains_ReturnValue_64, bool CallFunc_Contains_ReturnValue_65, bool CallFunc_Contains_ReturnValue_66, bool CallFunc_Contains_ReturnValue_67, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FColor K2Node_MakeStruct_Color_12, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FColor Marker_Color; // 0x0
        bool CallFunc_Contains_ReturnValue; // 0x4
        char pad_5[0x3];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        bool CallFunc_Contains_ReturnValue_1; // 0x11
        bool CallFunc_BooleanOR_ReturnValue; // 0x12
        char pad_13[0x1];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x14
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x20
        float CallFunc_BreakRotator_Roll; // 0x2c
        float CallFunc_BreakRotator_Pitch; // 0x30
        float CallFunc_BreakRotator_Yaw; // 0x34
        bool CallFunc_Contains_ReturnValue_2; // 0x38
        bool CallFunc_Contains_ReturnValue_3; // 0x39
        bool CallFunc_Contains_ReturnValue_4; // 0x3a
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x3b
        char pad_3c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x40
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x50
        char pad_51[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x58
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x68
        char pad_69[0x3];
        FColor K2Node_MakeStruct_Color; // 0x6c
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x70
        FColor K2Node_MakeStruct_Color_1; // 0x80
        char pad_84[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x88
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_1; // 0x98
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0xa4
        float CallFunc_BreakRotator_Roll_1; // 0xb0
        float CallFunc_BreakRotator_Pitch_1; // 0xb4
        float CallFunc_BreakRotator_Yaw_1; // 0xb8
        bool CallFunc_Contains_ReturnValue_5; // 0xbc
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0xbd
        bool CallFunc_Contains_ReturnValue_6; // 0xbe
        bool CallFunc_Contains_ReturnValue_7; // 0xbf
        bool CallFunc_Contains_ReturnValue_8; // 0xc0
        bool CallFunc_BooleanOR_ReturnValue_4; // 0xc1
        bool CallFunc_BooleanOR_ReturnValue_5; // 0xc2
        char pad_c3[0x5];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location_1; // 0xc8
        bool K2Node_DynamicCast_bSuccess_1; // 0xd0
        bool CallFunc_BooleanOR_ReturnValue_6; // 0xd1
        bool CallFunc_Contains_ReturnValue_9; // 0xd2
        char pad_d3[0x5];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location_2; // 0xd8
        bool K2Node_DynamicCast_bSuccess_2; // 0xe0
        bool CallFunc_Contains_ReturnValue_10; // 0xe1
        bool CallFunc_Contains_ReturnValue_11; // 0xe2
        bool CallFunc_Contains_ReturnValue_12; // 0xe3
        bool CallFunc_Contains_ReturnValue_13; // 0xe4
        bool CallFunc_Contains_ReturnValue_14; // 0xe5
        bool CallFunc_BooleanOR_ReturnValue_7; // 0xe6
        char pad_e7[0x1];
        FColor K2Node_MakeStruct_Color_2; // 0xe8
        bool CallFunc_BooleanOR_ReturnValue_8; // 0xec
        bool CallFunc_BooleanOR_ReturnValue_9; // 0xed
        bool CallFunc_BooleanOR_ReturnValue_10; // 0xee
        char pad_ef[0x1];
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0xf0
        bool CallFunc_BooleanOR_ReturnValue_11; // 0x100
        char pad_101[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_5; // 0x108
        FColor K2Node_MakeStruct_Color_3; // 0x118
        bool CallFunc_Contains_ReturnValue_15; // 0x11c
        bool CallFunc_Contains_ReturnValue_16; // 0x11d
        bool CallFunc_Contains_ReturnValue_17; // 0x11e
        bool CallFunc_Contains_ReturnValue_18; // 0x11f
        bool CallFunc_Contains_ReturnValue_19; // 0x120
        bool CallFunc_Contains_ReturnValue_20; // 0x121
        bool CallFunc_Contains_ReturnValue_21; // 0x122
        bool CallFunc_Contains_ReturnValue_22; // 0x123
        bool CallFunc_Contains_ReturnValue_23; // 0x124
        bool CallFunc_Contains_ReturnValue_24; // 0x125
        bool CallFunc_Contains_ReturnValue_25; // 0x126
        bool CallFunc_Contains_ReturnValue_26; // 0x127
        bool CallFunc_Contains_ReturnValue_27; // 0x128
        bool CallFunc_Contains_ReturnValue_28; // 0x129
        bool CallFunc_Contains_ReturnValue_29; // 0x12a
        bool CallFunc_Contains_ReturnValue_30; // 0x12b
        bool CallFunc_Contains_ReturnValue_31; // 0x12c
        bool CallFunc_Contains_ReturnValue_32; // 0x12d
        bool CallFunc_Contains_ReturnValue_33; // 0x12e
        bool CallFunc_Contains_ReturnValue_34; // 0x12f
        bool CallFunc_Contains_ReturnValue_35; // 0x130
        bool CallFunc_Contains_ReturnValue_36; // 0x131
        bool CallFunc_Contains_ReturnValue_37; // 0x132
        bool CallFunc_Contains_ReturnValue_38; // 0x133
        bool CallFunc_Contains_ReturnValue_39; // 0x134
        bool CallFunc_Contains_ReturnValue_40; // 0x135
        bool CallFunc_Contains_ReturnValue_41; // 0x136
        bool CallFunc_Contains_ReturnValue_42; // 0x137
        bool CallFunc_Contains_ReturnValue_43; // 0x138
        bool CallFunc_Contains_ReturnValue_44; // 0x139
        bool CallFunc_Contains_ReturnValue_45; // 0x13a
        bool CallFunc_Contains_ReturnValue_46; // 0x13b
        char pad_13c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_6; // 0x140
        FString CallFunc_Concat_StrStr_ReturnValue_7; // 0x150
        ULevel* CallFunc_GetLevelFromActor_ReturnValue; // 0x160
        FString CallFunc_GetPathName_ReturnValue; // 0x168
        ULevel* CallFunc_GetLevelFromActor_ReturnValue_1; // 0x178
        bool CallFunc_Contains_ReturnValue_47; // 0x180
        char pad_181[0x7];
        FString CallFunc_GetPathName_ReturnValue_1; // 0x188
        bool CallFunc_Contains_ReturnValue_48; // 0x198
        bool CallFunc_Contains_ReturnValue_49; // 0x199
        bool CallFunc_BooleanOR_ReturnValue_12; // 0x19a
        char pad_19b[0x1];
        FColor K2Node_MakeStruct_Color_4; // 0x19c
        FString CallFunc_Concat_StrStr_ReturnValue_8; // 0x1a0
        FString CallFunc_Concat_StrStr_ReturnValue_9; // 0x1b0
        FString CallFunc_Concat_StrStr_ReturnValue_10; // 0x1c0
        FColor K2Node_MakeStruct_Color_5; // 0x1d0
        char pad_1d4[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_11; // 0x1d8
        FColor K2Node_MakeStruct_Color_6; // 0x1e8
        char pad_1ec[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_12; // 0x1f0
        FString CallFunc_Concat_StrStr_ReturnValue_13; // 0x200
        FString CallFunc_Concat_StrStr_ReturnValue_14; // 0x210
        FColor K2Node_MakeStruct_Color_7; // 0x220
        char pad_224[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_15; // 0x228
        FColor K2Node_MakeStruct_Color_8; // 0x238
        char pad_23c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_16; // 0x240
        FString CallFunc_Concat_StrStr_ReturnValue_17; // 0x250
        FString CallFunc_Concat_StrStr_ReturnValue_18; // 0x260
        FColor K2Node_MakeStruct_Color_9; // 0x270
        char pad_274[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_19; // 0x278
        FColor K2Node_MakeStruct_Color_10; // 0x288
        char pad_28c[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_20; // 0x290
        FString CallFunc_Concat_StrStr_ReturnValue_21; // 0x2a0
        FString CallFunc_Concat_StrStr_ReturnValue_22; // 0x2b0
        FString CallFunc_Concat_StrStr_ReturnValue_23; // 0x2c0
        FString CallFunc_Concat_StrStr_ReturnValue_24; // 0x2d0
        FString CallFunc_Concat_StrStr_ReturnValue_25; // 0x2e0
        FColor K2Node_MakeStruct_Color_11; // 0x2f0
        bool CallFunc_InitMarker_Valid; // 0x2f4
        char pad_2f5[0x3];
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x2f8
        ULevel* CallFunc_GetLevelFromActor_ReturnValue_2; // 0x300
        FString CallFunc_GetDisplayName_ReturnValue; // 0x308
        FString CallFunc_GetLevelName_ReturnValue; // 0x318
        bool CallFunc_Contains_ReturnValue_50; // 0x328
        bool CallFunc_Contains_ReturnValue_51; // 0x329
        bool CallFunc_Contains_ReturnValue_52; // 0x32a
        bool CallFunc_Contains_ReturnValue_53; // 0x32b
        bool CallFunc_Contains_ReturnValue_54; // 0x32c
        bool CallFunc_Contains_ReturnValue_55; // 0x32d
        bool CallFunc_BooleanOR_ReturnValue_13; // 0x32e
        bool CallFunc_BooleanOR_ReturnValue_14; // 0x32f
        bool CallFunc_BooleanOR_ReturnValue_15; // 0x330
        bool CallFunc_BooleanOR_ReturnValue_16; // 0x331
        bool CallFunc_BooleanOR_ReturnValue_17; // 0x332
        bool CallFunc_Contains_ReturnValue_56; // 0x333
        bool CallFunc_Contains_ReturnValue_57; // 0x334
        bool CallFunc_Contains_ReturnValue_58; // 0x335
        bool CallFunc_Contains_ReturnValue_59; // 0x336
        bool CallFunc_Contains_ReturnValue_60; // 0x337
        bool CallFunc_Contains_ReturnValue_61; // 0x338
        bool CallFunc_Contains_ReturnValue_62; // 0x339
        bool CallFunc_Contains_ReturnValue_63; // 0x33a
        bool CallFunc_Contains_ReturnValue_64; // 0x33b
        bool CallFunc_Contains_ReturnValue_65; // 0x33c
        bool CallFunc_Contains_ReturnValue_66; // 0x33d
        bool CallFunc_Contains_ReturnValue_67; // 0x33e
        char pad_33f[0x1];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue_2; // 0x340
        FVector CallFunc_K2_GetActorLocation_ReturnValue_2; // 0x34c
        float CallFunc_BreakRotator_Roll_2; // 0x358
        float CallFunc_BreakRotator_Pitch_2; // 0x35c
        float CallFunc_BreakRotator_Yaw_2; // 0x360
        float CallFunc_BreakVector_X; // 0x364
        float CallFunc_BreakVector_Y; // 0x368
        float CallFunc_BreakVector_Z; // 0x36c
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x370
        char pad_371[0x3];
        FColor K2Node_MakeStruct_Color_12; // 0x374
        bool CallFunc_BooleanAND_ReturnValue; // 0x378
    }; // Size: 0x379
    Params_UserConstructionScript params{};
    params.Marker_Color = (FColor)Marker_Color;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.K2Node_MakeStruct_Color_1 = (FColor)K2Node_MakeStruct_Color_1;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_K2_GetActorRotation_ReturnValue_1 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_1;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_BreakRotator_Roll_1 = (float)CallFunc_BreakRotator_Roll_1;
    params.CallFunc_BreakRotator_Pitch_1 = (float)CallFunc_BreakRotator_Pitch_1;
    params.CallFunc_BreakRotator_Yaw_1 = (float)CallFunc_BreakRotator_Yaw_1;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Contains_ReturnValue_6 = (bool)CallFunc_Contains_ReturnValue_6;
    params.CallFunc_Contains_ReturnValue_7 = (bool)CallFunc_Contains_ReturnValue_7;
    params.CallFunc_Contains_ReturnValue_8 = (bool)CallFunc_Contains_ReturnValue_8;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.K2Node_DynamicCast_AsBeacon_Location_1 = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    params.CallFunc_Contains_ReturnValue_9 = (bool)CallFunc_Contains_ReturnValue_9;
    params.K2Node_DynamicCast_AsBeacon_Location_2 = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location_2;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_Contains_ReturnValue_10 = (bool)CallFunc_Contains_ReturnValue_10;
    params.CallFunc_Contains_ReturnValue_11 = (bool)CallFunc_Contains_ReturnValue_11;
    params.CallFunc_Contains_ReturnValue_12 = (bool)CallFunc_Contains_ReturnValue_12;
    params.CallFunc_Contains_ReturnValue_13 = (bool)CallFunc_Contains_ReturnValue_13;
    params.CallFunc_Contains_ReturnValue_14 = (bool)CallFunc_Contains_ReturnValue_14;
    params.CallFunc_BooleanOR_ReturnValue_7 = (bool)CallFunc_BooleanOR_ReturnValue_7;
    params.K2Node_MakeStruct_Color_2 = (FColor)K2Node_MakeStruct_Color_2;
    params.CallFunc_BooleanOR_ReturnValue_8 = (bool)CallFunc_BooleanOR_ReturnValue_8;
    params.CallFunc_BooleanOR_ReturnValue_9 = (bool)CallFunc_BooleanOR_ReturnValue_9;
    params.CallFunc_BooleanOR_ReturnValue_10 = (bool)CallFunc_BooleanOR_ReturnValue_10;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_11 = (bool)CallFunc_BooleanOR_ReturnValue_11;
    params.CallFunc_Concat_StrStr_ReturnValue_5 = (FString)CallFunc_Concat_StrStr_ReturnValue_5;
    params.K2Node_MakeStruct_Color_3 = (FColor)K2Node_MakeStruct_Color_3;
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
    params.CallFunc_Contains_ReturnValue_25 = (bool)CallFunc_Contains_ReturnValue_25;
    params.CallFunc_Contains_ReturnValue_26 = (bool)CallFunc_Contains_ReturnValue_26;
    params.CallFunc_Contains_ReturnValue_27 = (bool)CallFunc_Contains_ReturnValue_27;
    params.CallFunc_Contains_ReturnValue_28 = (bool)CallFunc_Contains_ReturnValue_28;
    params.CallFunc_Contains_ReturnValue_29 = (bool)CallFunc_Contains_ReturnValue_29;
    params.CallFunc_Contains_ReturnValue_30 = (bool)CallFunc_Contains_ReturnValue_30;
    params.CallFunc_Contains_ReturnValue_31 = (bool)CallFunc_Contains_ReturnValue_31;
    params.CallFunc_Contains_ReturnValue_32 = (bool)CallFunc_Contains_ReturnValue_32;
    params.CallFunc_Contains_ReturnValue_33 = (bool)CallFunc_Contains_ReturnValue_33;
    params.CallFunc_Contains_ReturnValue_34 = (bool)CallFunc_Contains_ReturnValue_34;
    params.CallFunc_Contains_ReturnValue_35 = (bool)CallFunc_Contains_ReturnValue_35;
    params.CallFunc_Contains_ReturnValue_36 = (bool)CallFunc_Contains_ReturnValue_36;
    params.CallFunc_Contains_ReturnValue_37 = (bool)CallFunc_Contains_ReturnValue_37;
    params.CallFunc_Contains_ReturnValue_38 = (bool)CallFunc_Contains_ReturnValue_38;
    params.CallFunc_Contains_ReturnValue_39 = (bool)CallFunc_Contains_ReturnValue_39;
    params.CallFunc_Contains_ReturnValue_40 = (bool)CallFunc_Contains_ReturnValue_40;
    params.CallFunc_Contains_ReturnValue_41 = (bool)CallFunc_Contains_ReturnValue_41;
    params.CallFunc_Contains_ReturnValue_42 = (bool)CallFunc_Contains_ReturnValue_42;
    params.CallFunc_Contains_ReturnValue_43 = (bool)CallFunc_Contains_ReturnValue_43;
    params.CallFunc_Contains_ReturnValue_44 = (bool)CallFunc_Contains_ReturnValue_44;
    params.CallFunc_Contains_ReturnValue_45 = (bool)CallFunc_Contains_ReturnValue_45;
    params.CallFunc_Contains_ReturnValue_46 = (bool)CallFunc_Contains_ReturnValue_46;
    params.CallFunc_Concat_StrStr_ReturnValue_6 = (FString)CallFunc_Concat_StrStr_ReturnValue_6;
    params.CallFunc_Concat_StrStr_ReturnValue_7 = (FString)CallFunc_Concat_StrStr_ReturnValue_7;
    params.CallFunc_GetLevelFromActor_ReturnValue = (ULevel*)CallFunc_GetLevelFromActor_ReturnValue;
    params.CallFunc_GetPathName_ReturnValue = (FString)CallFunc_GetPathName_ReturnValue;
    params.CallFunc_GetLevelFromActor_ReturnValue_1 = (ULevel*)CallFunc_GetLevelFromActor_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_47 = (bool)CallFunc_Contains_ReturnValue_47;
    params.CallFunc_GetPathName_ReturnValue_1 = (FString)CallFunc_GetPathName_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_48 = (bool)CallFunc_Contains_ReturnValue_48;
    params.CallFunc_Contains_ReturnValue_49 = (bool)CallFunc_Contains_ReturnValue_49;
    params.CallFunc_BooleanOR_ReturnValue_12 = (bool)CallFunc_BooleanOR_ReturnValue_12;
    params.K2Node_MakeStruct_Color_4 = (FColor)K2Node_MakeStruct_Color_4;
    params.CallFunc_Concat_StrStr_ReturnValue_8 = (FString)CallFunc_Concat_StrStr_ReturnValue_8;
    params.CallFunc_Concat_StrStr_ReturnValue_9 = (FString)CallFunc_Concat_StrStr_ReturnValue_9;
    params.CallFunc_Concat_StrStr_ReturnValue_10 = (FString)CallFunc_Concat_StrStr_ReturnValue_10;
    params.K2Node_MakeStruct_Color_5 = (FColor)K2Node_MakeStruct_Color_5;
    params.CallFunc_Concat_StrStr_ReturnValue_11 = (FString)CallFunc_Concat_StrStr_ReturnValue_11;
    params.K2Node_MakeStruct_Color_6 = (FColor)K2Node_MakeStruct_Color_6;
    params.CallFunc_Concat_StrStr_ReturnValue_12 = (FString)CallFunc_Concat_StrStr_ReturnValue_12;
    params.CallFunc_Concat_StrStr_ReturnValue_13 = (FString)CallFunc_Concat_StrStr_ReturnValue_13;
    params.CallFunc_Concat_StrStr_ReturnValue_14 = (FString)CallFunc_Concat_StrStr_ReturnValue_14;
    params.K2Node_MakeStruct_Color_7 = (FColor)K2Node_MakeStruct_Color_7;
    params.CallFunc_Concat_StrStr_ReturnValue_15 = (FString)CallFunc_Concat_StrStr_ReturnValue_15;
    params.K2Node_MakeStruct_Color_8 = (FColor)K2Node_MakeStruct_Color_8;
    params.CallFunc_Concat_StrStr_ReturnValue_16 = (FString)CallFunc_Concat_StrStr_ReturnValue_16;
    params.CallFunc_Concat_StrStr_ReturnValue_17 = (FString)CallFunc_Concat_StrStr_ReturnValue_17;
    params.CallFunc_Concat_StrStr_ReturnValue_18 = (FString)CallFunc_Concat_StrStr_ReturnValue_18;
    params.K2Node_MakeStruct_Color_9 = (FColor)K2Node_MakeStruct_Color_9;
    params.CallFunc_Concat_StrStr_ReturnValue_19 = (FString)CallFunc_Concat_StrStr_ReturnValue_19;
    params.K2Node_MakeStruct_Color_10 = (FColor)K2Node_MakeStruct_Color_10;
    params.CallFunc_Concat_StrStr_ReturnValue_20 = (FString)CallFunc_Concat_StrStr_ReturnValue_20;
    params.CallFunc_Concat_StrStr_ReturnValue_21 = (FString)CallFunc_Concat_StrStr_ReturnValue_21;
    params.CallFunc_Concat_StrStr_ReturnValue_22 = (FString)CallFunc_Concat_StrStr_ReturnValue_22;
    params.CallFunc_Concat_StrStr_ReturnValue_23 = (FString)CallFunc_Concat_StrStr_ReturnValue_23;
    params.CallFunc_Concat_StrStr_ReturnValue_24 = (FString)CallFunc_Concat_StrStr_ReturnValue_24;
    params.CallFunc_Concat_StrStr_ReturnValue_25 = (FString)CallFunc_Concat_StrStr_ReturnValue_25;
    params.K2Node_MakeStruct_Color_11 = (FColor)K2Node_MakeStruct_Color_11;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.CallFunc_GetLevelFromActor_ReturnValue_2 = (ULevel*)CallFunc_GetLevelFromActor_ReturnValue_2;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_GetLevelName_ReturnValue = (FString)CallFunc_GetLevelName_ReturnValue;
    params.CallFunc_Contains_ReturnValue_50 = (bool)CallFunc_Contains_ReturnValue_50;
    params.CallFunc_Contains_ReturnValue_51 = (bool)CallFunc_Contains_ReturnValue_51;
    params.CallFunc_Contains_ReturnValue_52 = (bool)CallFunc_Contains_ReturnValue_52;
    params.CallFunc_Contains_ReturnValue_53 = (bool)CallFunc_Contains_ReturnValue_53;
    params.CallFunc_Contains_ReturnValue_54 = (bool)CallFunc_Contains_ReturnValue_54;
    params.CallFunc_Contains_ReturnValue_55 = (bool)CallFunc_Contains_ReturnValue_55;
    params.CallFunc_BooleanOR_ReturnValue_13 = (bool)CallFunc_BooleanOR_ReturnValue_13;
    params.CallFunc_BooleanOR_ReturnValue_14 = (bool)CallFunc_BooleanOR_ReturnValue_14;
    params.CallFunc_BooleanOR_ReturnValue_15 = (bool)CallFunc_BooleanOR_ReturnValue_15;
    params.CallFunc_BooleanOR_ReturnValue_16 = (bool)CallFunc_BooleanOR_ReturnValue_16;
    params.CallFunc_BooleanOR_ReturnValue_17 = (bool)CallFunc_BooleanOR_ReturnValue_17;
    params.CallFunc_Contains_ReturnValue_56 = (bool)CallFunc_Contains_ReturnValue_56;
    params.CallFunc_Contains_ReturnValue_57 = (bool)CallFunc_Contains_ReturnValue_57;
    params.CallFunc_Contains_ReturnValue_58 = (bool)CallFunc_Contains_ReturnValue_58;
    params.CallFunc_Contains_ReturnValue_59 = (bool)CallFunc_Contains_ReturnValue_59;
    params.CallFunc_Contains_ReturnValue_60 = (bool)CallFunc_Contains_ReturnValue_60;
    params.CallFunc_Contains_ReturnValue_61 = (bool)CallFunc_Contains_ReturnValue_61;
    params.CallFunc_Contains_ReturnValue_62 = (bool)CallFunc_Contains_ReturnValue_62;
    params.CallFunc_Contains_ReturnValue_63 = (bool)CallFunc_Contains_ReturnValue_63;
    params.CallFunc_Contains_ReturnValue_64 = (bool)CallFunc_Contains_ReturnValue_64;
    params.CallFunc_Contains_ReturnValue_65 = (bool)CallFunc_Contains_ReturnValue_65;
    params.CallFunc_Contains_ReturnValue_66 = (bool)CallFunc_Contains_ReturnValue_66;
    params.CallFunc_Contains_ReturnValue_67 = (bool)CallFunc_Contains_ReturnValue_67;
    params.CallFunc_K2_GetActorRotation_ReturnValue_2 = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue_2;
    params.CallFunc_K2_GetActorLocation_ReturnValue_2 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_2;
    params.CallFunc_BreakRotator_Roll_2 = (float)CallFunc_BreakRotator_Roll_2;
    params.CallFunc_BreakRotator_Pitch_2 = (float)CallFunc_BreakRotator_Pitch_2;
    params.CallFunc_BreakRotator_Yaw_2 = (float)CallFunc_BreakRotator_Yaw_2;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Color_12 = (FColor)K2Node_MakeStruct_Color_12;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
ABP_HM_HW_MappedItems_Marker_C* ABP_HM_HW_MappedItems_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C");
    return (ABP_HM_HW_MappedItems_Marker_C*)res;
}
void ABP_HM_HW_MappedItems_Marker_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_HM_HW_MappedItems_Marker_C::ExecuteUbergraph_BP_HM_HW_MappedItems_Marker(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_HM_HW_MappedItems_Marker.BP_HM_HW_MappedItems_Marker_C.ExecuteUbergraph_BP_HM_HW_MappedItems_Marker"));
    struct Params_ExecuteUbergraph_BP_HM_HW_MappedItems_Marker {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_HM_HW_MappedItems_Marker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
