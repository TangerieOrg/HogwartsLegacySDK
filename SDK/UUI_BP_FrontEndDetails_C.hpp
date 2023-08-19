#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "FSaveGameInfo.hpp"
#include "UPhoenixUserWidget.hpp"
class UVerticalBox;
class UPhoenixTextBlock;
class UImage;
class UHorizontalBox;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UOverlay;
#pragma pack(push, 1)
class UUI_BP_FrontEndDetails_C : public UPhoenixUserWidget {
public:
    UVerticalBox* characterContent; // 0x328
    UHorizontalBox* characterTimeData; // 0x330
    UPhoenixTextBlock* Description; // 0x338
    UOverlay* detailsLegend; // 0x340
    UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x348
    UPhoenixTextBlock* detailsLocation; // 0x350
    UPhoenixTextBlock* detailsTitle; // 0x358
    UVerticalBox* Header; // 0x360
    UImage* headerDivider; // 0x368
    UPhoenixTextBlock* PlayTime; // 0x370
    UPhoenixTextBlock* SaveTime; // 0x378
    static UUI_BP_FrontEndDetails_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void SetButtonDetails(FString ButtonDescription);
    void SetDetailsLegend(TArray<FLegendItemData>& LegendArray);
    void SetCharacterDetails(bool IsNewGame, FString CharacterName, FString Description, FSaveGameInfo LatestSave);
}; // Size: 0x380
#pragma pack(pop)
