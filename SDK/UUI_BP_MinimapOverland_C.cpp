#include "ACharacter.hpp"
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMinimapOverland.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_MinimapOverland_C.hpp"
UUI_BP_MinimapOverland_C* UUI_BP_MinimapOverland_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C");
    return (UUI_BP_MinimapOverland_C*)res;
}
void UUI_BP_MinimapOverland_C::ValidateMapIndex(int32_t MapIndex, bool& IsValid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.ValidateMapIndex"));
    struct Params_ValidateMapIndex {
        int32_t MapIndex; // 0x0
        bool IsValid; // 0x4
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x5
        char pad_6[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x8
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc
        bool CallFunc_BooleanAND_ReturnValue; // 0xd
    }; // Size: 0xe
    Params_ValidateMapIndex params{};
    params.MapIndex = (int32_t)MapIndex;
    params.IsValid = (bool)IsValid;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    IsValid = params.IsValid;
}
void UUI_BP_MinimapOverland_C::DebugPrintPlayerTile(ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32_t CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32_t CallFunc_FFloor_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array) {}
void UUI_BP_MinimapOverland_C::MapTileLoaded_LowerRight(UTexture2D* Texture, UObject* Image) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_LowerRight"));
    struct Params_MapTileLoaded_LowerRight {
        UTexture2D* Texture; // 0x0
        UObject* Image; // 0x8
    }; // Size: 0x10
    Params_MapTileLoaded_LowerRight params{};
    params.Texture = (UTexture2D*)Texture;
    params.Image = (UObject*)Image;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::MapTileLoaded_UpperLeft(UTexture2D* TileTexture, UObject* TileImage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_UpperLeft"));
    struct Params_MapTileLoaded_UpperLeft {
        UTexture2D* TileTexture; // 0x0
        UObject* TileImage; // 0x8
    }; // Size: 0x10
    Params_MapTileLoaded_UpperLeft params{};
    params.TileTexture = (UTexture2D*)TileTexture;
    params.TileImage = (UObject*)TileImage;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::MapTileLoaded_LowerLeft(UTexture2D* Texture, UObject* Image) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_LowerLeft"));
    struct Params_MapTileLoaded_LowerLeft {
        UTexture2D* Texture; // 0x0
        UObject* Image; // 0x8
    }; // Size: 0x10
    Params_MapTileLoaded_LowerLeft params{};
    params.Texture = (UTexture2D*)Texture;
    params.Image = (UObject*)Image;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::MapTileLoaded_UpperRight(UTexture2D* Texture, UObject* Image) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.MapTileLoaded_UpperRight"));
    struct Params_MapTileLoaded_UpperRight {
        UTexture2D* Texture; // 0x0
        UObject* Image; // 0x8
    }; // Size: 0x10
    Params_MapTileLoaded_UpperRight params{};
    params.Texture = (UTexture2D*)Texture;
    params.Image = (UObject*)Image;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::UpdateTileIndicesFromImageNames(int32_t UpperLeftIndex, int32_t LowerRightIndex, int32_t LowerLeftIndex, int32_t UpperRightIndex, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue, int32_t Temp_int_Variable, bool CallFunc_ValidateMapIndex_IsValid, bool CallFunc_ValidateMapIndex_IsValid_1, bool CallFunc_ValidateMapIndex_IsValid_2, bool Temp_bool_Variable, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, int32_t CallFunc_Subtract_IntInt_ReturnValue_3, int32_t CallFunc_Percent_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_ValidateMapIndex_IsValid_3) {}
void UUI_BP_MinimapOverland_C::UpdateTileTextures(UTexture2D* CallFunc_Array_Get_Item, UTexture2D* CallFunc_Array_Get_Item_1, UTexture2D* CallFunc_Array_Get_Item_2, UTexture2D* CallFunc_Array_Get_Item_3, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.UpdateTileTextures"));
    struct Params_UpdateTileTextures {
        UTexture2D* CallFunc_Array_Get_Item; // 0x0
        UTexture2D* CallFunc_Array_Get_Item_1; // 0x8
        UTexture2D* CallFunc_Array_Get_Item_2; // 0x10
        UTexture2D* CallFunc_Array_Get_Item_3; // 0x18
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x20
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x28
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2; // 0x30
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3; // 0x38
    }; // Size: 0x40
    Params_UpdateTileTextures params{};
    params.CallFunc_Array_Get_Item = (UTexture2D*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UTexture2D*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (UTexture2D*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (UTexture2D*)CallFunc_Array_Get_Item_3;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.CallFunc_GetDynamicMaterial_ReturnValue_2 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_2;
    params.CallFunc_GetDynamicMaterial_ReturnValue_3 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_3;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::ExecuteUbergraph_UI_BP_MinimapOverland(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.ExecuteUbergraph_UI_BP_MinimapOverland"));
    struct Params_ExecuteUbergraph_UI_BP_MinimapOverland {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Opacity; // 0x4
        bool K2Node_Event_Visibile; // 0x8
    }; // Size: 0x9
    Params_ExecuteUbergraph_UI_BP_MinimapOverland params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Opacity = (float)K2Node_Event_Opacity;
    params.K2Node_Event_Visibile = (bool)K2Node_Event_Visibile;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::UpdateCurrentMapPosition(float PlayerY, float PlayerX, int32_t NewUpperLeftTileIndex, float NewMapY, float NewMapX, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue_1, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32_t CallFunc_FFloor_ReturnValue, int32_t CallFunc_FFloor_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Divide_VectorFloat_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Fraction_ReturnValue, float CallFunc_Fraction_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.UpdateCurrentMapPosition"));
    struct Params_UpdateCurrentMapPosition {
        float PlayerY; // 0x0
        float PlayerX; // 0x4
        int32_t NewUpperLeftTileIndex; // 0x8
        float NewMapY; // 0xc
        float NewMapX; // 0x10
        FVector CallFunc_MakeVector_ReturnValue; // 0x14
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x20
        FVector CallFunc_Divide_VectorFloat_ReturnValue; // 0x2c
        FVector CallFunc_Divide_VectorFloat_ReturnValue_1; // 0x38
        char pad_44[0x4];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x48
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x50
        FVector CallFunc_Subtract_VectorVector_ReturnValue; // 0x5c
        FVector CallFunc_Divide_VectorFloat_ReturnValue_2; // 0x68
        float CallFunc_BreakVector_X; // 0x74
        float CallFunc_BreakVector_Y; // 0x78
        float CallFunc_BreakVector_Z; // 0x7c
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x80
        char pad_81[0x3];
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x84
        int32_t CallFunc_FFloor_ReturnValue; // 0x88
        int32_t CallFunc_FFloor_ReturnValue_1; // 0x8c
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x90
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x94
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x98
        char pad_9c[0x4];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1; // 0xa0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xa8
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0xac
        FVector CallFunc_Subtract_VectorVector_ReturnValue_1; // 0xb8
        FVector CallFunc_Divide_VectorFloat_ReturnValue_3; // 0xc4
        float CallFunc_BreakVector_X_1; // 0xd0
        float CallFunc_BreakVector_Y_1; // 0xd4
        float CallFunc_BreakVector_Z_1; // 0xd8
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0xdc
        float CallFunc_Fraction_ReturnValue; // 0xe0
        float CallFunc_Fraction_ReturnValue_1; // 0xe4
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0xe8
    }; // Size: 0xec
    Params_UpdateCurrentMapPosition params{};
    params.PlayerY = (float)PlayerY;
    params.PlayerX = (float)PlayerX;
    params.NewUpperLeftTileIndex = (int32_t)NewUpperLeftTileIndex;
    params.NewMapY = (float)NewMapY;
    params.NewMapX = (float)NewMapX;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_Divide_VectorFloat_ReturnValue = (FVector)CallFunc_Divide_VectorFloat_ReturnValue;
    params.CallFunc_Divide_VectorFloat_ReturnValue_1 = (FVector)CallFunc_Divide_VectorFloat_ReturnValue_1;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Subtract_VectorVector_ReturnValue = (FVector)CallFunc_Subtract_VectorVector_ReturnValue;
    params.CallFunc_Divide_VectorFloat_ReturnValue_2 = (FVector)CallFunc_Divide_VectorFloat_ReturnValue_2;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_FFloor_ReturnValue = (int32_t)CallFunc_FFloor_ReturnValue;
    params.CallFunc_FFloor_ReturnValue_1 = (int32_t)CallFunc_FFloor_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_GetPlayerCharacter_ReturnValue_1 = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_Subtract_VectorVector_ReturnValue_1 = (FVector)CallFunc_Subtract_VectorVector_ReturnValue_1;
    params.CallFunc_Divide_VectorFloat_ReturnValue_3 = (FVector)CallFunc_Divide_VectorFloat_ReturnValue_3;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Fraction_ReturnValue = (float)CallFunc_Fraction_ReturnValue;
    params.CallFunc_Fraction_ReturnValue_1 = (float)CallFunc_Fraction_ReturnValue_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::SetMapOpacity(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.SetMapOpacity"));
    struct Params_SetMapOpacity {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetMapOpacity params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUI_BP_MinimapOverland_C::ShowMap(bool Visibile) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MinimapOverland.UI_BP_MinimapOverland_C.ShowMap"));
    struct Params_ShowMap {
        bool Visibile; // 0x0
    }; // Size: 0x1
    Params_ShowMap params{};
    params.Visibile = (bool)Visibile;
    ProcessEvent(func, &params);
}
