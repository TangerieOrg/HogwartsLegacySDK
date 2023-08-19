#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
class UPhoenixImage;
class UPhoenixRichTextBlock;
#pragma pack(push, 1)
class UUI_BP_QuestReward_C : public UPhoenixUserWidget {
public:
    UPhoenixImage* rewardIcon; // 0x328
    UPhoenixRichTextBlock* RewardText; // 0x330
    static UUI_BP_QuestReward_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetRewardData(FString TypeID, FString RewardID, FString TempRewardText, FString TempRewardIcon, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
}; // Size: 0x338
#pragma pack(pop)
