#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FSeedInfo.hpp"
#include "FTimespan.hpp"
#include "UUserWidget.hpp"
class UVerticalBox;
class UPhoenixTextBlock;
class UHerbPlotManager;
#pragma pack(push, 1)
class UUI_BP_HerbologySeedTooltip_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UVerticalBox* Details; // 0x270
    UPhoenixTextBlock* GrowthTimeText; // 0x278
    UPhoenixTextBlock* MultiHarvestText; // 0x280
    UPhoenixTextBlock* PlotSizeText; // 0x288
    FSeedInfo PreviewSeedInfo; // 0x290
    static UUI_BP_HerbologySeedTooltip_C* StaticClass();
    void Init(FSeedInfo Seed_Info, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, UHerbPlotManager* CallFunc_BP_Get_ReturnValue, float CallFunc_GetGrowthTimeMultiplier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_HerbologySeedTooltip(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x2c0
#pragma pack(pop)
