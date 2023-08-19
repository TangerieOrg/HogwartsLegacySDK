#pragma once
#include <cstdint>
#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UMinimapOverland.hpp"
class UImage;
class UTexture2D;
class UObject;
class ACharacter;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_MinimapOverland_C : public UMinimapOverland {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4d0
    UImage* MinimapBackground; // 0x4d8
    TArray<UTexture2D*> ImageTextureArray; // 0x4e0
    TArray<int32_t> TileIndices; // 0x4f0
    TArray<FString> ImageNames; // 0x500
    UTexture2D* BlackTexture_0; // 0x510
    TArray<FString> ImageNamesTest; // 0x518
    static UUI_BP_MinimapOverland_C* StaticClass();
    void ValidateMapIndex(int32_t MapIndex, bool& IsValid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void MapTileLoaded_LowerRight(UTexture2D* Texture, UObject* Image);
    void MapTileLoaded_LowerLeft(UTexture2D* Texture, UObject* Image);
    void MapTileLoaded_UpperRight(UTexture2D* Texture, UObject* Image);
    void MapTileLoaded_UpperLeft(UTexture2D* TileTexture, UObject* TileImage);
    void UpdateTileIndicesFromImageNames(int32_t UpperLeftIndex, int32_t LowerRightIndex, int32_t LowerLeftIndex, int32_t UpperRightIndex, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue, int32_t Temp_int_Variable, bool CallFunc_ValidateMapIndex_IsValid, bool CallFunc_ValidateMapIndex_IsValid_1, bool CallFunc_ValidateMapIndex_IsValid_2, bool Temp_bool_Variable, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, int32_t CallFunc_Subtract_IntInt_ReturnValue_3, int32_t CallFunc_Percent_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_ValidateMapIndex_IsValid_3);
    void DebugPrintPlayerTile(ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32_t CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32_t CallFunc_FFloor_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array);
    void UpdateTileTextures(UTexture2D* CallFunc_Array_Get_Item, UTexture2D* CallFunc_Array_Get_Item_1, UTexture2D* CallFunc_Array_Get_Item_2, UTexture2D* CallFunc_Array_Get_Item_3, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3);
    void UpdateCurrentMapPosition(float PlayerY, float PlayerX, int32_t NewUpperLeftTileIndex, float NewMapY, float NewMapX, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue_1, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32_t CallFunc_FFloor_ReturnValue, int32_t CallFunc_FFloor_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, FVector CallFunc_Divide_VectorFloat_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Fraction_ReturnValue, float CallFunc_Fraction_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
    void SetMapOpacity(float Opacity);
    void ShowMap(bool Visibile);
    void ExecuteUbergraph_UI_BP_MinimapOverland(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile);
}; // Size: 0x528
#pragma pack(pop)
