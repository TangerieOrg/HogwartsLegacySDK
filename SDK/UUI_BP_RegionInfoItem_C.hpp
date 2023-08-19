#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UImage;
class UObject;
#pragma pack(push, 1)
class UUI_BP_RegionInfoItem_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* RegionInfoLeft; // 0x330
    UWidgetAnimation* RegionInfoRight; // 0x338
    UPhoenixTextBlock* CompletedText0; // 0x340
    UPhoenixTextBlock* CompletedText1; // 0x348
    UPhoenixTextBlock* DividerText0; // 0x350
    UPhoenixTextBlock* DividerText1; // 0x358
    UImage* Icon; // 0x360
    UImage* Icon_1; // 0x368
    UPhoenixTextBlock* ItemtypeText; // 0x370
    UPhoenixTextBlock* TotalText0; // 0x378
    UPhoenixTextBlock* TotalText1; // 0x380
    bool IsLeft; // 0x388
    char pad_389[0x7];
    static UUI_BP_RegionInfoItem_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings);
    void SetRegionInfoRight(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetRegionInfoLeft(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetCompleted(int32_t Completed, FString CallFunc_Conv_IntToString_ReturnValue);
    void SetTotal(int32_t Total, FString CallFunc_Conv_IntToString_ReturnValue);
    void SetIcon(FString IconName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1);
    void SetItemName(FString ItemName);
    void Construct();
    void RegionInfoItemLeft(UObject* Caller);
    void RegionInfoItemRight(UObject* Caller);
    void ExecuteUbergraph_UI_BP_RegionInfoItem(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
