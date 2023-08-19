#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMapIconWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_MapIconWidget_C : public UMapIconWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x288
    UWidgetAnimation* ShrinkRegion; // 0x290
    UWidgetAnimation* FadeRegion; // 0x298
    UWidgetAnimation* HoverRegion; // 0x2a0
    UImage* TextShadow; // 0x2a8
    bool RegionActive; // 0x2b0
    bool RegionFaded; // 0x2b1
    bool RegionWasActive; // 0x2b2
    char pad_2b3[0x5];
    static UUI_BP_MapIconWidget_C* StaticClass();
    void OnHoverRegion(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
    void OnHoverMap(bool TitleSwitch, FString Title, TArray<FString>& LegendStrings);
    void Construct();
    void WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_0();
    void PlayFanfare_Event0();
    void SetIcon(UTexture2D* Texture);
    void RegionIndexEvent(UObject* Caller, int32_t int);
    void ExecuteUbergraph_UI_BP_MapIconWidget(int32_t EntryPoint);
}; // Size: 0x2b8
#pragma pack(pop)
