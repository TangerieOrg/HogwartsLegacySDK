#include "UFunction.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_QuestReward_C.hpp"
UUI_BP_QuestReward_C* UUI_BP_QuestReward_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestReward.UI_BP_QuestReward_C");
    return (UUI_BP_QuestReward_C*)res;
}
TArray<FString> UUI_BP_QuestReward_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_QuestReward_C::SetRewardData(FString TypeID, FString RewardID, FString TempRewardText, FString TempRewardIcon, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestReward.UI_BP_QuestReward_C.SetRewardData"));
    struct Params_SetRewardData {
        FString TypeID; // 0x0
        FString RewardID; // 0x10
        FString TempRewardText; // 0x20
        FString TempRewardIcon; // 0x30
        bool K2Node_SwitchString_CmpSuccess; // 0x40
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x41
    }; // Size: 0x42
    Params_SetRewardData params{};
    params.TypeID = (FString)TypeID;
    params.RewardID = (FString)RewardID;
    params.TempRewardText = (FString)TempRewardText;
    params.TempRewardIcon = (FString)TempRewardIcon;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
