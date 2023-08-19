#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixImage;
class UBorder;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_FG_IDP_GearHeader_C : public UPhoenixUserWidget {
public:
    UPhoenixImage* gearHeaderBackLeft; // 0x328
    UPhoenixImage* gearHeaderBackMiddle; // 0x330
    UPhoenixImage* gearHeaderBackRight; // 0x338
    UBorder* GearRarityFlame; // 0x340
    UPhoenixTextBlock* gearRarityTitle; // 0x348
    UPhoenixTextBlock* gearTitle; // 0x350
    UPhoenixImage* rarityHeaderBack; // 0x358
    UBorder* rarityHeaderBackBorder; // 0x360
    static UUI_BP_FG_IDP_GearHeader_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetHeaderData(FString headerTitle, FString headerQualtiy, FName Rarity, bool& ShowRarityGraphics, FString CallFunc_Conv_NameToString_ReturnValue, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
}; // Size: 0x368
#pragma pack(pop)
