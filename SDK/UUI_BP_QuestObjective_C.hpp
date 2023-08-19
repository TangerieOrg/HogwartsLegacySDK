#pragma once
#include <cstdint>
#include "FFormatArgumentData.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "UPhoenixUserWidget.hpp"
class UImage;
class UPhoenixRichTextBlock;
class UOverlay;
class UTexture2D;
class UObject;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_QuestObjective_C : public UPhoenixUserWidget {
public:
    UImage* iconImage; // 0x328
    UPhoenixRichTextBlock* objectiveText; // 0x330
    UImage* TrackBorder; // 0x338
    UOverlay* TrackedIconOverlay; // 0x340
    UImage* untrackedCarrot; // 0x348
    FSlateBrush StrikeThroughBrush; // 0x350
    bool TaskIsComplete; // 0x3d8
    char pad_3d9[0x7];
    static UUI_BP_QuestObjective_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void GlintTextureLoaded(UTexture2D* GlintTexture, UObject* ObjectParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void InitObjectiveData(FString objectiveText, int32_t RuntimeParam1, int32_t RuntimeParam2, bool IsComplete, bool IsTracked, FString Icon, FString Glint, FLinearColor IconColor, bool Temp_bool_Variable, int32_t CallFunc_SelectInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1);
}; // Size: 0x3e0
#pragma pack(pop)
