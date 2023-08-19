#include "ABP_Marker_Base_C.hpp"
#include "AMarker.hpp"
#include "FColor.hpp"
#include "FIntVector.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Marker_Base_C::SetUniqueIdentity(TArray<FString> IDtoName, TArray<FString> UniqueNames, TArray<FString>& K2Node_MakeArray_Array, FString CallFunc_Concat_StrStr_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FIntVector CallFunc_FTruncVector_ReturnValue, FString CallFunc_Conv_IntVectorToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.SetUniqueIdentity"));
    struct Params_SetUniqueIdentity {
        TArray<FString> IDtoName; // 0x0
        TArray<FString> UniqueNames; // 0x10
        TArray<FString> K2Node_MakeArray_Array; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x30
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x40
        FIntVector CallFunc_FTruncVector_ReturnValue; // 0x4c
        FString CallFunc_Conv_IntVectorToString_ReturnValue; // 0x58
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x68
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x78
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x88
    }; // Size: 0x98
    Params_SetUniqueIdentity params{};
    params.IDtoName = (TArray<FString>)IDtoName;
    params.UniqueNames = (TArray<FString>)UniqueNames;
    params.K2Node_MakeArray_Array = (TArray<FString>)K2Node_MakeArray_Array;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_FTruncVector_ReturnValue = (FIntVector)CallFunc_FTruncVector_ReturnValue;
    params.CallFunc_Conv_IntVectorToString_ReturnValue = (FString)CallFunc_Conv_IntVectorToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
ABP_Marker_Base_C* ABP_Marker_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C");
    return (ABP_Marker_Base_C*)res;
}
void ABP_Marker_Base_C::CreateBar(float Height, FColor Color, float CallFunc_Multiply_FloatFloat_ReturnValue, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.CreateBar"));
    struct Params_CreateBar {
        float Height; // 0x0
        FColor Color; // 0x4
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x8
        FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue; // 0xc
        FVector CallFunc_MakeVector_ReturnValue; // 0x1c
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x28
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x2c
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x38
        char pad_44[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x50
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x80
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x88
        char pad_89[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x90
        bool CallFunc_IsValid_ReturnValue; // 0x98
    }; // Size: 0x99
    Params_CreateBar params{};
    params.Height = (float)Height;
    params.Color = (FColor)Color;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Conv_ColorToLinearColor_ReturnValue = (FLinearColor)CallFunc_Conv_ColorToLinearColor_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Marker_Base_C::AddTextMarker(FString Text, float Height, float Size, FColor Color, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FTransform CallFunc_MakeTransform_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue_1) {}
void ABP_Marker_Base_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Marker_Base_C::CheckForTechLevel(bool& InTechLevel, bool& In_Mission, bool& In_Other, bool& Hogsmeade, bool& Feature, bool& VFX, ULevel* CallFunc_GetLevelFromActor_ReturnValue, FString CallFunc_GetPathName_ReturnValue, FString CallFunc_GetLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Contains_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Contains_ReturnValue_9) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.CheckForTechLevel"));
    struct Params_CheckForTechLevel {
        bool InTechLevel; // 0x0
        bool In_Mission; // 0x1
        bool In_Other; // 0x2
        bool Hogsmeade; // 0x3
        bool Feature; // 0x4
        bool VFX; // 0x5
        char pad_6[0x2];
        ULevel* CallFunc_GetLevelFromActor_ReturnValue; // 0x8
        FString CallFunc_GetPathName_ReturnValue; // 0x10
        FString CallFunc_GetLevelName_ReturnValue; // 0x20
        bool CallFunc_Contains_ReturnValue; // 0x30
        bool CallFunc_Contains_ReturnValue_1; // 0x31
        bool CallFunc_Contains_ReturnValue_2; // 0x32
        bool CallFunc_Contains_ReturnValue_3; // 0x33
        bool CallFunc_BooleanOR_ReturnValue; // 0x34
        bool CallFunc_Contains_ReturnValue_4; // 0x35
        bool CallFunc_Contains_ReturnValue_5; // 0x36
        bool CallFunc_Contains_ReturnValue_6; // 0x37
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x38
        bool CallFunc_Contains_ReturnValue_7; // 0x39
        bool CallFunc_Contains_ReturnValue_8; // 0x3a
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x3b
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x3c
        bool CallFunc_Contains_ReturnValue_9; // 0x3d
    }; // Size: 0x3e
    Params_CheckForTechLevel params{};
    params.InTechLevel = (bool)InTechLevel;
    params.In_Mission = (bool)In_Mission;
    params.In_Other = (bool)In_Other;
    params.Hogsmeade = (bool)Hogsmeade;
    params.Feature = (bool)Feature;
    params.VFX = (bool)VFX;
    params.CallFunc_GetLevelFromActor_ReturnValue = (ULevel*)CallFunc_GetLevelFromActor_ReturnValue;
    params.CallFunc_GetPathName_ReturnValue = (FString)CallFunc_GetPathName_ReturnValue;
    params.CallFunc_GetLevelName_ReturnValue = (FString)CallFunc_GetLevelName_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_Contains_ReturnValue_6 = (bool)CallFunc_Contains_ReturnValue_6;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_7 = (bool)CallFunc_Contains_ReturnValue_7;
    params.CallFunc_Contains_ReturnValue_8 = (bool)CallFunc_Contains_ReturnValue_8;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_9 = (bool)CallFunc_Contains_ReturnValue_9;
    ProcessEvent(func, &params);
    InTechLevel = params.InTechLevel;
    VFX = params.VFX;
    In_Mission = params.In_Mission;
    In_Other = params.In_Other;
    Hogsmeade = params.Hogsmeade;
    Feature = params.Feature;
}
void ABP_Marker_Base_C::InitMarker(float Height, float Size, FColor Color, FString MarkerRootName, int32_t SkipLeft, int32_t SkipRight, FString OverrideMarker_Name, FString Arithmancy__, bool Bar_Off, bool Tile_Name_Off, bool Text_Off, bool Rotate_Text_180, bool& Valid, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, FColor K2Node_MakeStruct_Color, bool CallFunc_CheckForTechLevel_InTechLevel, bool CallFunc_CheckForTechLevel_In_Mission, bool CallFunc_CheckForTechLevel_In_Other, bool CallFunc_CheckForTechLevel_Hogsmeade, bool CallFunc_CheckForTechLevel_Feature, bool CallFunc_CheckForTechLevel_VFX) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.InitMarker"));
    struct Params_InitMarker {
        float Height; // 0x0
        float Size; // 0x4
        FColor Color; // 0x8
        char pad_c[0x4];
        FString MarkerRootName; // 0x10
        int32_t SkipLeft; // 0x20
        int32_t SkipRight; // 0x24
        FString OverrideMarker_Name; // 0x28
        FString Arithmancy__; // 0x38
        bool Bar_Off; // 0x48
        bool Tile_Name_Off; // 0x49
        bool Text_Off; // 0x4a
        bool Rotate_Text_180; // 0x4b
        bool Valid; // 0x4c
        bool CallFunc_Contains_ReturnValue; // 0x4d
        bool CallFunc_Contains_ReturnValue_1; // 0x4e
        bool CallFunc_BooleanOR_ReturnValue; // 0x4f
        bool CallFunc_Contains_ReturnValue_2; // 0x50
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x51
        bool CallFunc_Contains_ReturnValue_3; // 0x52
        bool CallFunc_Contains_ReturnValue_4; // 0x53
        bool CallFunc_Contains_ReturnValue_5; // 0x54
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x55
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x56
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x57
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x58
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x59
        bool CallFunc_Contains_ReturnValue_6; // 0x5a
        bool CallFunc_Contains_ReturnValue_7; // 0x5b
        bool CallFunc_Contains_ReturnValue_8; // 0x5c
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x5d
        bool CallFunc_BooleanOR_ReturnValue_5; // 0x5e
        bool CallFunc_BooleanOR_ReturnValue_6; // 0x5f
        FColor K2Node_MakeStruct_Color; // 0x60
        bool CallFunc_CheckForTechLevel_InTechLevel; // 0x64
        bool CallFunc_CheckForTechLevel_In_Mission; // 0x65
        bool CallFunc_CheckForTechLevel_In_Other; // 0x66
        bool CallFunc_CheckForTechLevel_Hogsmeade; // 0x67
        bool CallFunc_CheckForTechLevel_Feature; // 0x68
        bool CallFunc_CheckForTechLevel_VFX; // 0x69
    }; // Size: 0x6a
    Params_InitMarker params{};
    params.Height = (float)Height;
    params.Size = (float)Size;
    params.Color = (FColor)Color;
    params.MarkerRootName = (FString)MarkerRootName;
    params.SkipLeft = (int32_t)SkipLeft;
    params.SkipRight = (int32_t)SkipRight;
    params.OverrideMarker_Name = (FString)OverrideMarker_Name;
    params.Arithmancy__ = (FString)Arithmancy__;
    params.Bar_Off = (bool)Bar_Off;
    params.Tile_Name_Off = (bool)Tile_Name_Off;
    params.Text_Off = (bool)Text_Off;
    params.Rotate_Text_180 = (bool)Rotate_Text_180;
    params.Valid = (bool)Valid;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_6 = (bool)CallFunc_Contains_ReturnValue_6;
    params.CallFunc_Contains_ReturnValue_7 = (bool)CallFunc_Contains_ReturnValue_7;
    params.CallFunc_Contains_ReturnValue_8 = (bool)CallFunc_Contains_ReturnValue_8;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_CheckForTechLevel_InTechLevel = (bool)CallFunc_CheckForTechLevel_InTechLevel;
    params.CallFunc_CheckForTechLevel_In_Mission = (bool)CallFunc_CheckForTechLevel_In_Mission;
    params.CallFunc_CheckForTechLevel_In_Other = (bool)CallFunc_CheckForTechLevel_In_Other;
    params.CallFunc_CheckForTechLevel_Hogsmeade = (bool)CallFunc_CheckForTechLevel_Hogsmeade;
    params.CallFunc_CheckForTechLevel_Feature = (bool)CallFunc_CheckForTechLevel_Feature;
    params.CallFunc_CheckForTechLevel_VFX = (bool)CallFunc_CheckForTechLevel_VFX;
    ProcessEvent(func, &params);
    Valid = params.Valid;
}
void ABP_Marker_Base_C::SetBaseName(int32_t SkipLeft, int32_t SkipRight, bool CallFunc_Contains_ReturnValue, FString CallFunc_RightChop_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Contains_ReturnValue_1, FString CallFunc_RightChop_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, FString CallFunc_RightChop_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, FString CallFunc_RightChop_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_3, FString CallFunc_RightChop_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, FString CallFunc_RightChop_ReturnValue_5, bool CallFunc_Contains_ReturnValue_6, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_RightChop_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, FString CallFunc_Concat_StrStr_ReturnValue_6, FString CallFunc_RightChop_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, FString CallFunc_Concat_StrStr_ReturnValue_7, FString CallFunc_RightChop_ReturnValue_8, bool CallFunc_Contains_ReturnValue_9, FString CallFunc_Concat_StrStr_ReturnValue_8, bool CallFunc_Contains_ReturnValue_10, FString CallFunc_RightChop_ReturnValue_9, FString CallFunc_Concat_StrStr_ReturnValue_9, FString CallFunc_RightChop_ReturnValue_10, FString CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_Contains_ReturnValue_11, FString CallFunc_RightChop_ReturnValue_11, FString CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, FString CallFunc_RightChop_ReturnValue_12, FString CallFunc_Concat_StrStr_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, FString CallFunc_RightChop_ReturnValue_13, FString CallFunc_Concat_StrStr_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, FString CallFunc_RightChop_ReturnValue_14, FString CallFunc_Concat_StrStr_ReturnValue_14, bool CallFunc_Contains_ReturnValue_15, FString CallFunc_RightChop_ReturnValue_15, FString CallFunc_Concat_StrStr_ReturnValue_15, bool CallFunc_Contains_ReturnValue_16, FString CallFunc_RightChop_ReturnValue_16, FString CallFunc_Concat_StrStr_ReturnValue_16, bool CallFunc_Contains_ReturnValue_17, FString CallFunc_RightChop_ReturnValue_17, FString CallFunc_Concat_StrStr_ReturnValue_17, bool CallFunc_Contains_ReturnValue_18, bool CallFunc_Contains_ReturnValue_19, FString CallFunc_RightChop_ReturnValue_18, FString CallFunc_Concat_StrStr_ReturnValue_18, FString CallFunc_RightChop_ReturnValue_19, FString CallFunc_Concat_StrStr_ReturnValue_19, bool CallFunc_Contains_ReturnValue_20, FString CallFunc_RightChop_ReturnValue_20, FString CallFunc_Concat_StrStr_ReturnValue_20, bool CallFunc_Contains_ReturnValue_21, FString CallFunc_RightChop_ReturnValue_21, FString CallFunc_Concat_StrStr_ReturnValue_21, FString CallFunc_Concat_StrStr_ReturnValue_22, FString CallFunc_RightChop_ReturnValue_22, bool CallFunc_Contains_ReturnValue_22, FString CallFunc_Concat_StrStr_ReturnValue_23, FString CallFunc_Concat_StrStr_ReturnValue_24, FString CallFunc_GetPathName_ReturnValue, bool CallFunc_Contains_ReturnValue_23, bool CallFunc_Contains_ReturnValue_24, FString CallFunc_Concat_StrStr_ReturnValue_25, FString CallFunc_RightChop_ReturnValue_23, FString CallFunc_RightChop_ReturnValue_24, FString CallFunc_Concat_StrStr_ReturnValue_26, bool CallFunc_Contains_ReturnValue_25, FString CallFunc_Concat_StrStr_ReturnValue_27, FString CallFunc_LeftChop_ReturnValue, FString CallFunc_RightChop_ReturnValue_25, bool CallFunc_Contains_ReturnValue_26, FString CallFunc_Concat_StrStr_ReturnValue_28, FString CallFunc_Concat_StrStr_ReturnValue_29, bool CallFunc_Contains_ReturnValue_27, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Contains_ReturnValue_28, FString CallFunc_RightChop_ReturnValue_26, FString CallFunc_Concat_StrStr_ReturnValue_30, bool CallFunc_Contains_ReturnValue_29, FString CallFunc_RightChop_ReturnValue_27, FString CallFunc_Concat_StrStr_ReturnValue_31, bool CallFunc_Contains_ReturnValue_30, FString CallFunc_RightChop_ReturnValue_28, FString CallFunc_Concat_StrStr_ReturnValue_32, bool CallFunc_Contains_ReturnValue_31, FString CallFunc_RightChop_ReturnValue_29, FString CallFunc_Concat_StrStr_ReturnValue_33, bool CallFunc_Contains_ReturnValue_32, FString CallFunc_RightChop_ReturnValue_30, FString CallFunc_Concat_StrStr_ReturnValue_34, FString CallFunc_Replace_ReturnValue, bool CallFunc_Contains_ReturnValue_33, FString CallFunc_Concat_StrStr_ReturnValue_35, bool CallFunc_Contains_ReturnValue_34, bool CallFunc_Contains_ReturnValue_35, bool CallFunc_Contains_ReturnValue_36, FString CallFunc_RightChop_ReturnValue_31, bool CallFunc_Contains_ReturnValue_37, FString CallFunc_Concat_StrStr_ReturnValue_36, FString CallFunc_LeftChop_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_37, bool CallFunc_Contains_ReturnValue_38, bool CallFunc_Contains_ReturnValue_39, FString CallFunc_RightChop_ReturnValue_32, bool CallFunc_BooleanAND_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_38, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Contains_ReturnValue_40, bool CallFunc_Contains_ReturnValue_41, bool CallFunc_Contains_ReturnValue_42, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Contains_ReturnValue_43, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, FString CallFunc_Left_ReturnValue, bool CallFunc_Contains_ReturnValue_44, FString CallFunc_Concat_StrStr_ReturnValue_39, bool CallFunc_Contains_ReturnValue_45, FString CallFunc_Concat_StrStr_ReturnValue_40, bool CallFunc_Contains_ReturnValue_46, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_Contains_ReturnValue_47, bool CallFunc_Contains_ReturnValue_48, bool CallFunc_Contains_ReturnValue_49, bool CallFunc_Contains_ReturnValue_50, bool CallFunc_Contains_ReturnValue_51, bool CallFunc_Contains_ReturnValue_52, bool CallFunc_Contains_ReturnValue_53, bool CallFunc_Contains_ReturnValue_54, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_Contains_ReturnValue_55, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_Contains_ReturnValue_56, FString CallFunc_LeftChop_ReturnValue_2, FString CallFunc_RightChop_ReturnValue_33, bool CallFunc_Contains_ReturnValue_57, bool CallFunc_Contains_ReturnValue_58, FString CallFunc_RightChop_ReturnValue_34, FString CallFunc_LeftChop_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_41, FString CallFunc_RightChop_ReturnValue_35, FString CallFunc_LeftChop_ReturnValue_4, FString CallFunc_LeftChop_ReturnValue_5, FString CallFunc_RightChop_ReturnValue_36, FString CallFunc_RightChop_ReturnValue_37, FString CallFunc_LeftChop_ReturnValue_6, FString CallFunc_LeftChop_ReturnValue_7, FString CallFunc_RightChop_ReturnValue_38, FString CallFunc_RightChop_ReturnValue_39, FString CallFunc_Left_ReturnValue_1, FString CallFunc_RightChop_ReturnValue_40, FString CallFunc_Concat_StrStr_ReturnValue_42, FString CallFunc_Concat_StrStr_ReturnValue_43, FString CallFunc_Concat_StrStr_ReturnValue_44, FString CallFunc_Concat_StrStr_ReturnValue_45, bool CallFunc_Contains_ReturnValue_59, FString CallFunc_LeftChop_ReturnValue_8, FString CallFunc_Concat_StrStr_ReturnValue_46, FString CallFunc_RightChop_ReturnValue_41, FString CallFunc_Concat_StrStr_ReturnValue_47, bool CallFunc_Contains_ReturnValue_60, FString CallFunc_Concat_StrStr_ReturnValue_48, bool CallFunc_Contains_ReturnValue_61, FString CallFunc_Concat_StrStr_ReturnValue_49, FString CallFunc_RightChop_ReturnValue_42, FString CallFunc_Concat_StrStr_ReturnValue_50, FString CallFunc_Concat_StrStr_ReturnValue_51, FString CallFunc_Concat_StrStr_ReturnValue_52, FString CallFunc_Concat_StrStr_ReturnValue_53, FString CallFunc_LeftChop_ReturnValue_9, FString CallFunc_Concat_StrStr_ReturnValue_54, FString CallFunc_Concat_StrStr_ReturnValue_55, FString CallFunc_Concat_StrStr_ReturnValue_56, bool CallFunc_Contains_ReturnValue_62, FString CallFunc_Concat_StrStr_ReturnValue_57, FString CallFunc_Concat_StrStr_ReturnValue_58, FString CallFunc_Concat_StrStr_ReturnValue_59, FString CallFunc_Concat_StrStr_ReturnValue_60, FString CallFunc_Concat_StrStr_ReturnValue_61, bool CallFunc_Contains_ReturnValue_63, FString CallFunc_Concat_StrStr_ReturnValue_62, bool CallFunc_Contains_ReturnValue_64, bool CallFunc_Contains_ReturnValue_65, bool CallFunc_BooleanOR_ReturnValue_16, FString CallFunc_Concat_StrStr_ReturnValue_63, bool CallFunc_BooleanOR_ReturnValue_17, FString CallFunc_Concat_StrStr_ReturnValue_64, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_65, ULevel* CallFunc_GetLevelFromActor_ReturnValue, FString CallFunc_GetLevelName_ReturnValue, bool CallFunc_Contains_ReturnValue_66) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.SetBaseName"));
    struct Params_SetBaseName {
        int32_t SkipLeft; // 0x0
        int32_t SkipRight; // 0x4
        bool CallFunc_Contains_ReturnValue; // 0x8
        char pad_9[0x7];
        FString CallFunc_RightChop_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
        bool CallFunc_Contains_ReturnValue_1; // 0x30
        char pad_31[0x7];
        FString CallFunc_RightChop_ReturnValue_1; // 0x38
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x48
        bool CallFunc_Contains_ReturnValue_2; // 0x58
        char pad_59[0x7];
        FString CallFunc_RightChop_ReturnValue_2; // 0x60
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x70
        bool CallFunc_Contains_ReturnValue_3; // 0x80
        bool CallFunc_Contains_ReturnValue_4; // 0x81
        char pad_82[0x6];
        FString CallFunc_RightChop_ReturnValue_3; // 0x88
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0x98
        FString CallFunc_RightChop_ReturnValue_4; // 0xa8
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0xb8
        bool CallFunc_Contains_ReturnValue_5; // 0xc8
        char pad_c9[0x7];
        FString CallFunc_RightChop_ReturnValue_5; // 0xd0
        bool CallFunc_Contains_ReturnValue_6; // 0xe0
        char pad_e1[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_5; // 0xe8
        FString CallFunc_RightChop_ReturnValue_6; // 0xf8
        bool CallFunc_Contains_ReturnValue_7; // 0x108
        char pad_109[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_6; // 0x110
        FString CallFunc_RightChop_ReturnValue_7; // 0x120
        bool CallFunc_Contains_ReturnValue_8; // 0x130
        char pad_131[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_7; // 0x138
        FString CallFunc_RightChop_ReturnValue_8; // 0x148
        bool CallFunc_Contains_ReturnValue_9; // 0x158
        char pad_159[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_8; // 0x160
        bool CallFunc_Contains_ReturnValue_10; // 0x170
        char pad_171[0x7];
        FString CallFunc_RightChop_ReturnValue_9; // 0x178
        FString CallFunc_Concat_StrStr_ReturnValue_9; // 0x188
        FString CallFunc_RightChop_ReturnValue_10; // 0x198
        FString CallFunc_Concat_StrStr_ReturnValue_10; // 0x1a8
        bool CallFunc_Contains_ReturnValue_11; // 0x1b8
        char pad_1b9[0x7];
        FString CallFunc_RightChop_ReturnValue_11; // 0x1c0
        FString CallFunc_Concat_StrStr_ReturnValue_11; // 0x1d0
        bool CallFunc_Contains_ReturnValue_12; // 0x1e0
        char pad_1e1[0x7];
        FString CallFunc_RightChop_ReturnValue_12; // 0x1e8
        FString CallFunc_Concat_StrStr_ReturnValue_12; // 0x1f8
        bool CallFunc_Contains_ReturnValue_13; // 0x208
        char pad_209[0x7];
        FString CallFunc_RightChop_ReturnValue_13; // 0x210
        FString CallFunc_Concat_StrStr_ReturnValue_13; // 0x220
        bool CallFunc_Contains_ReturnValue_14; // 0x230
        char pad_231[0x7];
        FString CallFunc_RightChop_ReturnValue_14; // 0x238
        FString CallFunc_Concat_StrStr_ReturnValue_14; // 0x248
        bool CallFunc_Contains_ReturnValue_15; // 0x258
        char pad_259[0x7];
        FString CallFunc_RightChop_ReturnValue_15; // 0x260
        FString CallFunc_Concat_StrStr_ReturnValue_15; // 0x270
        bool CallFunc_Contains_ReturnValue_16; // 0x280
        char pad_281[0x7];
        FString CallFunc_RightChop_ReturnValue_16; // 0x288
        FString CallFunc_Concat_StrStr_ReturnValue_16; // 0x298
        bool CallFunc_Contains_ReturnValue_17; // 0x2a8
        char pad_2a9[0x7];
        FString CallFunc_RightChop_ReturnValue_17; // 0x2b0
        FString CallFunc_Concat_StrStr_ReturnValue_17; // 0x2c0
        bool CallFunc_Contains_ReturnValue_18; // 0x2d0
        bool CallFunc_Contains_ReturnValue_19; // 0x2d1
        char pad_2d2[0x6];
        FString CallFunc_RightChop_ReturnValue_18; // 0x2d8
        FString CallFunc_Concat_StrStr_ReturnValue_18; // 0x2e8
        FString CallFunc_RightChop_ReturnValue_19; // 0x2f8
        FString CallFunc_Concat_StrStr_ReturnValue_19; // 0x308
        bool CallFunc_Contains_ReturnValue_20; // 0x318
        char pad_319[0x7];
        FString CallFunc_RightChop_ReturnValue_20; // 0x320
        FString CallFunc_Concat_StrStr_ReturnValue_20; // 0x330
        bool CallFunc_Contains_ReturnValue_21; // 0x340
        char pad_341[0x7];
        FString CallFunc_RightChop_ReturnValue_21; // 0x348
        FString CallFunc_Concat_StrStr_ReturnValue_21; // 0x358
        FString CallFunc_Concat_StrStr_ReturnValue_22; // 0x368
        FString CallFunc_RightChop_ReturnValue_22; // 0x378
        bool CallFunc_Contains_ReturnValue_22; // 0x388
        char pad_389[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_23; // 0x390
        FString CallFunc_Concat_StrStr_ReturnValue_24; // 0x3a0
        FString CallFunc_GetPathName_ReturnValue; // 0x3b0
        bool CallFunc_Contains_ReturnValue_23; // 0x3c0
        bool CallFunc_Contains_ReturnValue_24; // 0x3c1
        char pad_3c2[0x6];
        FString CallFunc_Concat_StrStr_ReturnValue_25; // 0x3c8
        FString CallFunc_RightChop_ReturnValue_23; // 0x3d8
        FString CallFunc_RightChop_ReturnValue_24; // 0x3e8
        FString CallFunc_Concat_StrStr_ReturnValue_26; // 0x3f8
        bool CallFunc_Contains_ReturnValue_25; // 0x408
        char pad_409[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_27; // 0x410
        FString CallFunc_LeftChop_ReturnValue; // 0x420
        FString CallFunc_RightChop_ReturnValue_25; // 0x430
        bool CallFunc_Contains_ReturnValue_26; // 0x440
        char pad_441[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_28; // 0x448
        FString CallFunc_Concat_StrStr_ReturnValue_29; // 0x458
        bool CallFunc_Contains_ReturnValue_27; // 0x468
        bool CallFunc_BooleanAND_ReturnValue; // 0x469
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x46a
        bool CallFunc_Contains_ReturnValue_28; // 0x46b
        char pad_46c[0x4];
        FString CallFunc_RightChop_ReturnValue_26; // 0x470
        FString CallFunc_Concat_StrStr_ReturnValue_30; // 0x480
        bool CallFunc_Contains_ReturnValue_29; // 0x490
        char pad_491[0x7];
        FString CallFunc_RightChop_ReturnValue_27; // 0x498
        FString CallFunc_Concat_StrStr_ReturnValue_31; // 0x4a8
        bool CallFunc_Contains_ReturnValue_30; // 0x4b8
        char pad_4b9[0x7];
        FString CallFunc_RightChop_ReturnValue_28; // 0x4c0
        FString CallFunc_Concat_StrStr_ReturnValue_32; // 0x4d0
        bool CallFunc_Contains_ReturnValue_31; // 0x4e0
        char pad_4e1[0x7];
        FString CallFunc_RightChop_ReturnValue_29; // 0x4e8
        FString CallFunc_Concat_StrStr_ReturnValue_33; // 0x4f8
        bool CallFunc_Contains_ReturnValue_32; // 0x508
        char pad_509[0x7];
        FString CallFunc_RightChop_ReturnValue_30; // 0x510
        FString CallFunc_Concat_StrStr_ReturnValue_34; // 0x520
        FString CallFunc_Replace_ReturnValue; // 0x530
        bool CallFunc_Contains_ReturnValue_33; // 0x540
        char pad_541[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_35; // 0x548
        bool CallFunc_Contains_ReturnValue_34; // 0x558
        bool CallFunc_Contains_ReturnValue_35; // 0x559
        bool CallFunc_Contains_ReturnValue_36; // 0x55a
        char pad_55b[0x5];
        FString CallFunc_RightChop_ReturnValue_31; // 0x560
        bool CallFunc_Contains_ReturnValue_37; // 0x570
        char pad_571[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_36; // 0x578
        FString CallFunc_LeftChop_ReturnValue_1; // 0x588
        FString CallFunc_Concat_StrStr_ReturnValue_37; // 0x598
        bool CallFunc_Contains_ReturnValue_38; // 0x5a8
        bool CallFunc_Contains_ReturnValue_39; // 0x5a9
        char pad_5aa[0x6];
        FString CallFunc_RightChop_ReturnValue_32; // 0x5b0
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x5c0
        char pad_5c1[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_38; // 0x5c8
        bool CallFunc_BooleanOR_ReturnValue; // 0x5d8
        bool CallFunc_Contains_ReturnValue_40; // 0x5d9
        bool CallFunc_Contains_ReturnValue_41; // 0x5da
        bool CallFunc_Contains_ReturnValue_42; // 0x5db
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x5dc
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x5dd
        bool CallFunc_Contains_ReturnValue_43; // 0x5de
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x5df
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x5e0
        bool CallFunc_BooleanOR_ReturnValue_5; // 0x5e1
        char pad_5e2[0x6];
        FString CallFunc_Left_ReturnValue; // 0x5e8
        bool CallFunc_Contains_ReturnValue_44; // 0x5f8
        char pad_5f9[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_39; // 0x600
        bool CallFunc_Contains_ReturnValue_45; // 0x610
        char pad_611[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_40; // 0x618
        bool CallFunc_Contains_ReturnValue_46; // 0x628
        bool CallFunc_BooleanOR_ReturnValue_6; // 0x629
        bool CallFunc_BooleanOR_ReturnValue_7; // 0x62a
        bool CallFunc_Contains_ReturnValue_47; // 0x62b
        bool CallFunc_Contains_ReturnValue_48; // 0x62c
        bool CallFunc_Contains_ReturnValue_49; // 0x62d
        bool CallFunc_Contains_ReturnValue_50; // 0x62e
        bool CallFunc_Contains_ReturnValue_51; // 0x62f
        bool CallFunc_Contains_ReturnValue_52; // 0x630
        bool CallFunc_Contains_ReturnValue_53; // 0x631
        bool CallFunc_Contains_ReturnValue_54; // 0x632
        bool CallFunc_BooleanOR_ReturnValue_8; // 0x633
        bool CallFunc_Contains_ReturnValue_55; // 0x634
        bool CallFunc_BooleanOR_ReturnValue_9; // 0x635
        bool CallFunc_BooleanOR_ReturnValue_10; // 0x636
        bool CallFunc_BooleanOR_ReturnValue_11; // 0x637
        bool CallFunc_BooleanOR_ReturnValue_12; // 0x638
        bool CallFunc_BooleanOR_ReturnValue_13; // 0x639
        bool CallFunc_BooleanOR_ReturnValue_14; // 0x63a
        bool CallFunc_BooleanOR_ReturnValue_15; // 0x63b
        bool CallFunc_Contains_ReturnValue_56; // 0x63c
        char pad_63d[0x3];
        FString CallFunc_LeftChop_ReturnValue_2; // 0x640
        FString CallFunc_RightChop_ReturnValue_33; // 0x650
        bool CallFunc_Contains_ReturnValue_57; // 0x660
        bool CallFunc_Contains_ReturnValue_58; // 0x661
        char pad_662[0x6];
        FString CallFunc_RightChop_ReturnValue_34; // 0x668
        FString CallFunc_LeftChop_ReturnValue_3; // 0x678
        FString CallFunc_Concat_StrStr_ReturnValue_41; // 0x688
        FString CallFunc_RightChop_ReturnValue_35; // 0x698
        FString CallFunc_LeftChop_ReturnValue_4; // 0x6a8
        FString CallFunc_LeftChop_ReturnValue_5; // 0x6b8
        FString CallFunc_RightChop_ReturnValue_36; // 0x6c8
        FString CallFunc_RightChop_ReturnValue_37; // 0x6d8
        FString CallFunc_LeftChop_ReturnValue_6; // 0x6e8
        FString CallFunc_LeftChop_ReturnValue_7; // 0x6f8
        FString CallFunc_RightChop_ReturnValue_38; // 0x708
        FString CallFunc_RightChop_ReturnValue_39; // 0x718
        FString CallFunc_Left_ReturnValue_1; // 0x728
        FString CallFunc_RightChop_ReturnValue_40; // 0x738
        FString CallFunc_Concat_StrStr_ReturnValue_42; // 0x748
        FString CallFunc_Concat_StrStr_ReturnValue_43; // 0x758
        FString CallFunc_Concat_StrStr_ReturnValue_44; // 0x768
        FString CallFunc_Concat_StrStr_ReturnValue_45; // 0x778
        bool CallFunc_Contains_ReturnValue_59; // 0x788
        char pad_789[0x7];
        FString CallFunc_LeftChop_ReturnValue_8; // 0x790
        FString CallFunc_Concat_StrStr_ReturnValue_46; // 0x7a0
        FString CallFunc_RightChop_ReturnValue_41; // 0x7b0
        FString CallFunc_Concat_StrStr_ReturnValue_47; // 0x7c0
        bool CallFunc_Contains_ReturnValue_60; // 0x7d0
        char pad_7d1[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_48; // 0x7d8
        bool CallFunc_Contains_ReturnValue_61; // 0x7e8
        char pad_7e9[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_49; // 0x7f0
        FString CallFunc_RightChop_ReturnValue_42; // 0x800
        FString CallFunc_Concat_StrStr_ReturnValue_50; // 0x810
        FString CallFunc_Concat_StrStr_ReturnValue_51; // 0x820
        FString CallFunc_Concat_StrStr_ReturnValue_52; // 0x830
        FString CallFunc_Concat_StrStr_ReturnValue_53; // 0x840
        FString CallFunc_LeftChop_ReturnValue_9; // 0x850
        FString CallFunc_Concat_StrStr_ReturnValue_54; // 0x860
        FString CallFunc_Concat_StrStr_ReturnValue_55; // 0x870
        FString CallFunc_Concat_StrStr_ReturnValue_56; // 0x880
        bool CallFunc_Contains_ReturnValue_62; // 0x890
        char pad_891[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_57; // 0x898
        FString CallFunc_Concat_StrStr_ReturnValue_58; // 0x8a8
        FString CallFunc_Concat_StrStr_ReturnValue_59; // 0x8b8
        FString CallFunc_Concat_StrStr_ReturnValue_60; // 0x8c8
        FString CallFunc_Concat_StrStr_ReturnValue_61; // 0x8d8
        bool CallFunc_Contains_ReturnValue_63; // 0x8e8
        char pad_8e9[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_62; // 0x8f0
        bool CallFunc_Contains_ReturnValue_64; // 0x900
        bool CallFunc_Contains_ReturnValue_65; // 0x901
        bool CallFunc_BooleanOR_ReturnValue_16; // 0x902
        char pad_903[0x5];
        FString CallFunc_Concat_StrStr_ReturnValue_63; // 0x908
        bool CallFunc_BooleanOR_ReturnValue_17; // 0x918
        char pad_919[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_64; // 0x920
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x930
        char pad_931[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_65; // 0x938
        ULevel* CallFunc_GetLevelFromActor_ReturnValue; // 0x948
        FString CallFunc_GetLevelName_ReturnValue; // 0x950
        bool CallFunc_Contains_ReturnValue_66; // 0x960
    }; // Size: 0x961
    Params_SetBaseName params{};
    params.SkipLeft = (int32_t)SkipLeft;
    params.SkipRight = (int32_t)SkipRight;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_RightChop_ReturnValue = (FString)CallFunc_RightChop_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_RightChop_ReturnValue_1 = (FString)CallFunc_RightChop_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_RightChop_ReturnValue_2 = (FString)CallFunc_RightChop_ReturnValue_2;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_RightChop_ReturnValue_3 = (FString)CallFunc_RightChop_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_RightChop_ReturnValue_4 = (FString)CallFunc_RightChop_ReturnValue_4;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    params.CallFunc_Contains_ReturnValue_5 = (bool)CallFunc_Contains_ReturnValue_5;
    params.CallFunc_RightChop_ReturnValue_5 = (FString)CallFunc_RightChop_ReturnValue_5;
    params.CallFunc_Contains_ReturnValue_6 = (bool)CallFunc_Contains_ReturnValue_6;
    params.CallFunc_Concat_StrStr_ReturnValue_5 = (FString)CallFunc_Concat_StrStr_ReturnValue_5;
    params.CallFunc_RightChop_ReturnValue_6 = (FString)CallFunc_RightChop_ReturnValue_6;
    params.CallFunc_Contains_ReturnValue_7 = (bool)CallFunc_Contains_ReturnValue_7;
    params.CallFunc_Concat_StrStr_ReturnValue_6 = (FString)CallFunc_Concat_StrStr_ReturnValue_6;
    params.CallFunc_RightChop_ReturnValue_7 = (FString)CallFunc_RightChop_ReturnValue_7;
    params.CallFunc_Contains_ReturnValue_8 = (bool)CallFunc_Contains_ReturnValue_8;
    params.CallFunc_Concat_StrStr_ReturnValue_7 = (FString)CallFunc_Concat_StrStr_ReturnValue_7;
    params.CallFunc_RightChop_ReturnValue_8 = (FString)CallFunc_RightChop_ReturnValue_8;
    params.CallFunc_Contains_ReturnValue_9 = (bool)CallFunc_Contains_ReturnValue_9;
    params.CallFunc_Concat_StrStr_ReturnValue_8 = (FString)CallFunc_Concat_StrStr_ReturnValue_8;
    params.CallFunc_Contains_ReturnValue_10 = (bool)CallFunc_Contains_ReturnValue_10;
    params.CallFunc_RightChop_ReturnValue_9 = (FString)CallFunc_RightChop_ReturnValue_9;
    params.CallFunc_Concat_StrStr_ReturnValue_9 = (FString)CallFunc_Concat_StrStr_ReturnValue_9;
    params.CallFunc_RightChop_ReturnValue_10 = (FString)CallFunc_RightChop_ReturnValue_10;
    params.CallFunc_Concat_StrStr_ReturnValue_10 = (FString)CallFunc_Concat_StrStr_ReturnValue_10;
    params.CallFunc_Contains_ReturnValue_11 = (bool)CallFunc_Contains_ReturnValue_11;
    params.CallFunc_RightChop_ReturnValue_11 = (FString)CallFunc_RightChop_ReturnValue_11;
    params.CallFunc_Concat_StrStr_ReturnValue_11 = (FString)CallFunc_Concat_StrStr_ReturnValue_11;
    params.CallFunc_Contains_ReturnValue_12 = (bool)CallFunc_Contains_ReturnValue_12;
    params.CallFunc_RightChop_ReturnValue_12 = (FString)CallFunc_RightChop_ReturnValue_12;
    params.CallFunc_Concat_StrStr_ReturnValue_12 = (FString)CallFunc_Concat_StrStr_ReturnValue_12;
    params.CallFunc_Contains_ReturnValue_13 = (bool)CallFunc_Contains_ReturnValue_13;
    params.CallFunc_RightChop_ReturnValue_13 = (FString)CallFunc_RightChop_ReturnValue_13;
    params.CallFunc_Concat_StrStr_ReturnValue_13 = (FString)CallFunc_Concat_StrStr_ReturnValue_13;
    params.CallFunc_Contains_ReturnValue_14 = (bool)CallFunc_Contains_ReturnValue_14;
    params.CallFunc_RightChop_ReturnValue_14 = (FString)CallFunc_RightChop_ReturnValue_14;
    params.CallFunc_Concat_StrStr_ReturnValue_14 = (FString)CallFunc_Concat_StrStr_ReturnValue_14;
    params.CallFunc_Contains_ReturnValue_15 = (bool)CallFunc_Contains_ReturnValue_15;
    params.CallFunc_RightChop_ReturnValue_15 = (FString)CallFunc_RightChop_ReturnValue_15;
    params.CallFunc_Concat_StrStr_ReturnValue_15 = (FString)CallFunc_Concat_StrStr_ReturnValue_15;
    params.CallFunc_Contains_ReturnValue_16 = (bool)CallFunc_Contains_ReturnValue_16;
    params.CallFunc_RightChop_ReturnValue_16 = (FString)CallFunc_RightChop_ReturnValue_16;
    params.CallFunc_Concat_StrStr_ReturnValue_16 = (FString)CallFunc_Concat_StrStr_ReturnValue_16;
    params.CallFunc_Contains_ReturnValue_17 = (bool)CallFunc_Contains_ReturnValue_17;
    params.CallFunc_RightChop_ReturnValue_17 = (FString)CallFunc_RightChop_ReturnValue_17;
    params.CallFunc_Concat_StrStr_ReturnValue_17 = (FString)CallFunc_Concat_StrStr_ReturnValue_17;
    params.CallFunc_Contains_ReturnValue_18 = (bool)CallFunc_Contains_ReturnValue_18;
    params.CallFunc_Contains_ReturnValue_19 = (bool)CallFunc_Contains_ReturnValue_19;
    params.CallFunc_RightChop_ReturnValue_18 = (FString)CallFunc_RightChop_ReturnValue_18;
    params.CallFunc_Concat_StrStr_ReturnValue_18 = (FString)CallFunc_Concat_StrStr_ReturnValue_18;
    params.CallFunc_RightChop_ReturnValue_19 = (FString)CallFunc_RightChop_ReturnValue_19;
    params.CallFunc_Concat_StrStr_ReturnValue_19 = (FString)CallFunc_Concat_StrStr_ReturnValue_19;
    params.CallFunc_Contains_ReturnValue_20 = (bool)CallFunc_Contains_ReturnValue_20;
    params.CallFunc_RightChop_ReturnValue_20 = (FString)CallFunc_RightChop_ReturnValue_20;
    params.CallFunc_Concat_StrStr_ReturnValue_20 = (FString)CallFunc_Concat_StrStr_ReturnValue_20;
    params.CallFunc_Contains_ReturnValue_21 = (bool)CallFunc_Contains_ReturnValue_21;
    params.CallFunc_RightChop_ReturnValue_21 = (FString)CallFunc_RightChop_ReturnValue_21;
    params.CallFunc_Concat_StrStr_ReturnValue_21 = (FString)CallFunc_Concat_StrStr_ReturnValue_21;
    params.CallFunc_Concat_StrStr_ReturnValue_22 = (FString)CallFunc_Concat_StrStr_ReturnValue_22;
    params.CallFunc_RightChop_ReturnValue_22 = (FString)CallFunc_RightChop_ReturnValue_22;
    params.CallFunc_Contains_ReturnValue_22 = (bool)CallFunc_Contains_ReturnValue_22;
    params.CallFunc_Concat_StrStr_ReturnValue_23 = (FString)CallFunc_Concat_StrStr_ReturnValue_23;
    params.CallFunc_Concat_StrStr_ReturnValue_24 = (FString)CallFunc_Concat_StrStr_ReturnValue_24;
    params.CallFunc_GetPathName_ReturnValue = (FString)CallFunc_GetPathName_ReturnValue;
    params.CallFunc_Contains_ReturnValue_23 = (bool)CallFunc_Contains_ReturnValue_23;
    params.CallFunc_Contains_ReturnValue_24 = (bool)CallFunc_Contains_ReturnValue_24;
    params.CallFunc_Concat_StrStr_ReturnValue_25 = (FString)CallFunc_Concat_StrStr_ReturnValue_25;
    params.CallFunc_RightChop_ReturnValue_23 = (FString)CallFunc_RightChop_ReturnValue_23;
    params.CallFunc_RightChop_ReturnValue_24 = (FString)CallFunc_RightChop_ReturnValue_24;
    params.CallFunc_Concat_StrStr_ReturnValue_26 = (FString)CallFunc_Concat_StrStr_ReturnValue_26;
    params.CallFunc_Contains_ReturnValue_25 = (bool)CallFunc_Contains_ReturnValue_25;
    params.CallFunc_Concat_StrStr_ReturnValue_27 = (FString)CallFunc_Concat_StrStr_ReturnValue_27;
    params.CallFunc_LeftChop_ReturnValue = (FString)CallFunc_LeftChop_ReturnValue;
    params.CallFunc_RightChop_ReturnValue_25 = (FString)CallFunc_RightChop_ReturnValue_25;
    params.CallFunc_Contains_ReturnValue_26 = (bool)CallFunc_Contains_ReturnValue_26;
    params.CallFunc_Concat_StrStr_ReturnValue_28 = (FString)CallFunc_Concat_StrStr_ReturnValue_28;
    params.CallFunc_Concat_StrStr_ReturnValue_29 = (FString)CallFunc_Concat_StrStr_ReturnValue_29;
    params.CallFunc_Contains_ReturnValue_27 = (bool)CallFunc_Contains_ReturnValue_27;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Contains_ReturnValue_28 = (bool)CallFunc_Contains_ReturnValue_28;
    params.CallFunc_RightChop_ReturnValue_26 = (FString)CallFunc_RightChop_ReturnValue_26;
    params.CallFunc_Concat_StrStr_ReturnValue_30 = (FString)CallFunc_Concat_StrStr_ReturnValue_30;
    params.CallFunc_Contains_ReturnValue_29 = (bool)CallFunc_Contains_ReturnValue_29;
    params.CallFunc_RightChop_ReturnValue_27 = (FString)CallFunc_RightChop_ReturnValue_27;
    params.CallFunc_Concat_StrStr_ReturnValue_31 = (FString)CallFunc_Concat_StrStr_ReturnValue_31;
    params.CallFunc_Contains_ReturnValue_30 = (bool)CallFunc_Contains_ReturnValue_30;
    params.CallFunc_RightChop_ReturnValue_28 = (FString)CallFunc_RightChop_ReturnValue_28;
    params.CallFunc_Concat_StrStr_ReturnValue_32 = (FString)CallFunc_Concat_StrStr_ReturnValue_32;
    params.CallFunc_Contains_ReturnValue_31 = (bool)CallFunc_Contains_ReturnValue_31;
    params.CallFunc_RightChop_ReturnValue_29 = (FString)CallFunc_RightChop_ReturnValue_29;
    params.CallFunc_Concat_StrStr_ReturnValue_33 = (FString)CallFunc_Concat_StrStr_ReturnValue_33;
    params.CallFunc_Contains_ReturnValue_32 = (bool)CallFunc_Contains_ReturnValue_32;
    params.CallFunc_RightChop_ReturnValue_30 = (FString)CallFunc_RightChop_ReturnValue_30;
    params.CallFunc_Concat_StrStr_ReturnValue_34 = (FString)CallFunc_Concat_StrStr_ReturnValue_34;
    params.CallFunc_Replace_ReturnValue = (FString)CallFunc_Replace_ReturnValue;
    params.CallFunc_Contains_ReturnValue_33 = (bool)CallFunc_Contains_ReturnValue_33;
    params.CallFunc_Concat_StrStr_ReturnValue_35 = (FString)CallFunc_Concat_StrStr_ReturnValue_35;
    params.CallFunc_Contains_ReturnValue_34 = (bool)CallFunc_Contains_ReturnValue_34;
    params.CallFunc_Contains_ReturnValue_35 = (bool)CallFunc_Contains_ReturnValue_35;
    params.CallFunc_Contains_ReturnValue_36 = (bool)CallFunc_Contains_ReturnValue_36;
    params.CallFunc_RightChop_ReturnValue_31 = (FString)CallFunc_RightChop_ReturnValue_31;
    params.CallFunc_Contains_ReturnValue_37 = (bool)CallFunc_Contains_ReturnValue_37;
    params.CallFunc_Concat_StrStr_ReturnValue_36 = (FString)CallFunc_Concat_StrStr_ReturnValue_36;
    params.CallFunc_LeftChop_ReturnValue_1 = (FString)CallFunc_LeftChop_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_37 = (FString)CallFunc_Concat_StrStr_ReturnValue_37;
    params.CallFunc_Contains_ReturnValue_38 = (bool)CallFunc_Contains_ReturnValue_38;
    params.CallFunc_Contains_ReturnValue_39 = (bool)CallFunc_Contains_ReturnValue_39;
    params.CallFunc_RightChop_ReturnValue_32 = (FString)CallFunc_RightChop_ReturnValue_32;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_38 = (FString)CallFunc_Concat_StrStr_ReturnValue_38;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Contains_ReturnValue_40 = (bool)CallFunc_Contains_ReturnValue_40;
    params.CallFunc_Contains_ReturnValue_41 = (bool)CallFunc_Contains_ReturnValue_41;
    params.CallFunc_Contains_ReturnValue_42 = (bool)CallFunc_Contains_ReturnValue_42;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_43 = (bool)CallFunc_Contains_ReturnValue_43;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_5 = (bool)CallFunc_BooleanOR_ReturnValue_5;
    params.CallFunc_Left_ReturnValue = (FString)CallFunc_Left_ReturnValue;
    params.CallFunc_Contains_ReturnValue_44 = (bool)CallFunc_Contains_ReturnValue_44;
    params.CallFunc_Concat_StrStr_ReturnValue_39 = (FString)CallFunc_Concat_StrStr_ReturnValue_39;
    params.CallFunc_Contains_ReturnValue_45 = (bool)CallFunc_Contains_ReturnValue_45;
    params.CallFunc_Concat_StrStr_ReturnValue_40 = (FString)CallFunc_Concat_StrStr_ReturnValue_40;
    params.CallFunc_Contains_ReturnValue_46 = (bool)CallFunc_Contains_ReturnValue_46;
    params.CallFunc_BooleanOR_ReturnValue_6 = (bool)CallFunc_BooleanOR_ReturnValue_6;
    params.CallFunc_BooleanOR_ReturnValue_7 = (bool)CallFunc_BooleanOR_ReturnValue_7;
    params.CallFunc_Contains_ReturnValue_47 = (bool)CallFunc_Contains_ReturnValue_47;
    params.CallFunc_Contains_ReturnValue_48 = (bool)CallFunc_Contains_ReturnValue_48;
    params.CallFunc_Contains_ReturnValue_49 = (bool)CallFunc_Contains_ReturnValue_49;
    params.CallFunc_Contains_ReturnValue_50 = (bool)CallFunc_Contains_ReturnValue_50;
    params.CallFunc_Contains_ReturnValue_51 = (bool)CallFunc_Contains_ReturnValue_51;
    params.CallFunc_Contains_ReturnValue_52 = (bool)CallFunc_Contains_ReturnValue_52;
    params.CallFunc_Contains_ReturnValue_53 = (bool)CallFunc_Contains_ReturnValue_53;
    params.CallFunc_Contains_ReturnValue_54 = (bool)CallFunc_Contains_ReturnValue_54;
    params.CallFunc_BooleanOR_ReturnValue_8 = (bool)CallFunc_BooleanOR_ReturnValue_8;
    params.CallFunc_Contains_ReturnValue_55 = (bool)CallFunc_Contains_ReturnValue_55;
    params.CallFunc_BooleanOR_ReturnValue_9 = (bool)CallFunc_BooleanOR_ReturnValue_9;
    params.CallFunc_BooleanOR_ReturnValue_10 = (bool)CallFunc_BooleanOR_ReturnValue_10;
    params.CallFunc_BooleanOR_ReturnValue_11 = (bool)CallFunc_BooleanOR_ReturnValue_11;
    params.CallFunc_BooleanOR_ReturnValue_12 = (bool)CallFunc_BooleanOR_ReturnValue_12;
    params.CallFunc_BooleanOR_ReturnValue_13 = (bool)CallFunc_BooleanOR_ReturnValue_13;
    params.CallFunc_BooleanOR_ReturnValue_14 = (bool)CallFunc_BooleanOR_ReturnValue_14;
    params.CallFunc_BooleanOR_ReturnValue_15 = (bool)CallFunc_BooleanOR_ReturnValue_15;
    params.CallFunc_Contains_ReturnValue_56 = (bool)CallFunc_Contains_ReturnValue_56;
    params.CallFunc_LeftChop_ReturnValue_2 = (FString)CallFunc_LeftChop_ReturnValue_2;
    params.CallFunc_RightChop_ReturnValue_33 = (FString)CallFunc_RightChop_ReturnValue_33;
    params.CallFunc_Contains_ReturnValue_57 = (bool)CallFunc_Contains_ReturnValue_57;
    params.CallFunc_Contains_ReturnValue_58 = (bool)CallFunc_Contains_ReturnValue_58;
    params.CallFunc_RightChop_ReturnValue_34 = (FString)CallFunc_RightChop_ReturnValue_34;
    params.CallFunc_LeftChop_ReturnValue_3 = (FString)CallFunc_LeftChop_ReturnValue_3;
    params.CallFunc_Concat_StrStr_ReturnValue_41 = (FString)CallFunc_Concat_StrStr_ReturnValue_41;
    params.CallFunc_RightChop_ReturnValue_35 = (FString)CallFunc_RightChop_ReturnValue_35;
    params.CallFunc_LeftChop_ReturnValue_4 = (FString)CallFunc_LeftChop_ReturnValue_4;
    params.CallFunc_LeftChop_ReturnValue_5 = (FString)CallFunc_LeftChop_ReturnValue_5;
    params.CallFunc_RightChop_ReturnValue_36 = (FString)CallFunc_RightChop_ReturnValue_36;
    params.CallFunc_RightChop_ReturnValue_37 = (FString)CallFunc_RightChop_ReturnValue_37;
    params.CallFunc_LeftChop_ReturnValue_6 = (FString)CallFunc_LeftChop_ReturnValue_6;
    params.CallFunc_LeftChop_ReturnValue_7 = (FString)CallFunc_LeftChop_ReturnValue_7;
    params.CallFunc_RightChop_ReturnValue_38 = (FString)CallFunc_RightChop_ReturnValue_38;
    params.CallFunc_RightChop_ReturnValue_39 = (FString)CallFunc_RightChop_ReturnValue_39;
    params.CallFunc_Left_ReturnValue_1 = (FString)CallFunc_Left_ReturnValue_1;
    params.CallFunc_RightChop_ReturnValue_40 = (FString)CallFunc_RightChop_ReturnValue_40;
    params.CallFunc_Concat_StrStr_ReturnValue_42 = (FString)CallFunc_Concat_StrStr_ReturnValue_42;
    params.CallFunc_Concat_StrStr_ReturnValue_43 = (FString)CallFunc_Concat_StrStr_ReturnValue_43;
    params.CallFunc_Concat_StrStr_ReturnValue_44 = (FString)CallFunc_Concat_StrStr_ReturnValue_44;
    params.CallFunc_Concat_StrStr_ReturnValue_45 = (FString)CallFunc_Concat_StrStr_ReturnValue_45;
    params.CallFunc_Contains_ReturnValue_59 = (bool)CallFunc_Contains_ReturnValue_59;
    params.CallFunc_LeftChop_ReturnValue_8 = (FString)CallFunc_LeftChop_ReturnValue_8;
    params.CallFunc_Concat_StrStr_ReturnValue_46 = (FString)CallFunc_Concat_StrStr_ReturnValue_46;
    params.CallFunc_RightChop_ReturnValue_41 = (FString)CallFunc_RightChop_ReturnValue_41;
    params.CallFunc_Concat_StrStr_ReturnValue_47 = (FString)CallFunc_Concat_StrStr_ReturnValue_47;
    params.CallFunc_Contains_ReturnValue_60 = (bool)CallFunc_Contains_ReturnValue_60;
    params.CallFunc_Concat_StrStr_ReturnValue_48 = (FString)CallFunc_Concat_StrStr_ReturnValue_48;
    params.CallFunc_Contains_ReturnValue_61 = (bool)CallFunc_Contains_ReturnValue_61;
    params.CallFunc_Concat_StrStr_ReturnValue_49 = (FString)CallFunc_Concat_StrStr_ReturnValue_49;
    params.CallFunc_RightChop_ReturnValue_42 = (FString)CallFunc_RightChop_ReturnValue_42;
    params.CallFunc_Concat_StrStr_ReturnValue_50 = (FString)CallFunc_Concat_StrStr_ReturnValue_50;
    params.CallFunc_Concat_StrStr_ReturnValue_51 = (FString)CallFunc_Concat_StrStr_ReturnValue_51;
    params.CallFunc_Concat_StrStr_ReturnValue_52 = (FString)CallFunc_Concat_StrStr_ReturnValue_52;
    params.CallFunc_Concat_StrStr_ReturnValue_53 = (FString)CallFunc_Concat_StrStr_ReturnValue_53;
    params.CallFunc_LeftChop_ReturnValue_9 = (FString)CallFunc_LeftChop_ReturnValue_9;
    params.CallFunc_Concat_StrStr_ReturnValue_54 = (FString)CallFunc_Concat_StrStr_ReturnValue_54;
    params.CallFunc_Concat_StrStr_ReturnValue_55 = (FString)CallFunc_Concat_StrStr_ReturnValue_55;
    params.CallFunc_Concat_StrStr_ReturnValue_56 = (FString)CallFunc_Concat_StrStr_ReturnValue_56;
    params.CallFunc_Contains_ReturnValue_62 = (bool)CallFunc_Contains_ReturnValue_62;
    params.CallFunc_Concat_StrStr_ReturnValue_57 = (FString)CallFunc_Concat_StrStr_ReturnValue_57;
    params.CallFunc_Concat_StrStr_ReturnValue_58 = (FString)CallFunc_Concat_StrStr_ReturnValue_58;
    params.CallFunc_Concat_StrStr_ReturnValue_59 = (FString)CallFunc_Concat_StrStr_ReturnValue_59;
    params.CallFunc_Concat_StrStr_ReturnValue_60 = (FString)CallFunc_Concat_StrStr_ReturnValue_60;
    params.CallFunc_Concat_StrStr_ReturnValue_61 = (FString)CallFunc_Concat_StrStr_ReturnValue_61;
    params.CallFunc_Contains_ReturnValue_63 = (bool)CallFunc_Contains_ReturnValue_63;
    params.CallFunc_Concat_StrStr_ReturnValue_62 = (FString)CallFunc_Concat_StrStr_ReturnValue_62;
    params.CallFunc_Contains_ReturnValue_64 = (bool)CallFunc_Contains_ReturnValue_64;
    params.CallFunc_Contains_ReturnValue_65 = (bool)CallFunc_Contains_ReturnValue_65;
    params.CallFunc_BooleanOR_ReturnValue_16 = (bool)CallFunc_BooleanOR_ReturnValue_16;
    params.CallFunc_Concat_StrStr_ReturnValue_63 = (FString)CallFunc_Concat_StrStr_ReturnValue_63;
    params.CallFunc_BooleanOR_ReturnValue_17 = (bool)CallFunc_BooleanOR_ReturnValue_17;
    params.CallFunc_Concat_StrStr_ReturnValue_64 = (FString)CallFunc_Concat_StrStr_ReturnValue_64;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_65 = (FString)CallFunc_Concat_StrStr_ReturnValue_65;
    params.CallFunc_GetLevelFromActor_ReturnValue = (ULevel*)CallFunc_GetLevelFromActor_ReturnValue;
    params.CallFunc_GetLevelName_ReturnValue = (FString)CallFunc_GetLevelName_ReturnValue;
    params.CallFunc_Contains_ReturnValue_66 = (bool)CallFunc_Contains_ReturnValue_66;
    ProcessEvent(func, &params);
}
void ABP_Marker_Base_C::ExecuteUbergraph_BP_Marker_Base(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Markers/BP_Marker_Base.BP_Marker_Base_C.ExecuteUbergraph_BP_Marker_Base"));
    struct Params_ExecuteUbergraph_BP_Marker_Base {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Marker_Base params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
