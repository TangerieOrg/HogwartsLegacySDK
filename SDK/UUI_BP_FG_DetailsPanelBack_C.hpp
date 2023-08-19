#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UUI_BP_FG_VortexPanelBack_C;
#pragma pack(push, 1)
class UUI_BP_FG_DetailsPanelBack_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* PulsePannelBorderGlow; // 0x270
    UWidgetAnimation* PannelBackGoldGlow; // 0x278
    UWidgetAnimation* AppearPannelBack; // 0x280
    UUI_BP_FG_VortexPanelBack_C* UI_BP_FG_VortexPanelBack; // 0x288
    char pad_290[0x10];
    static UUI_BP_FG_DetailsPanelBack_C* StaticClass();
    void Finished_CEA86B8D47884EB0766820A77D184182();
    void Finished_95D51EF749CAF819F91B7A975743CF32();
    void Finished_16C3B93843FC19FFE3ED7199D9C3783D();
    void Finished_9817FB6E4701767E6A6467B36587406B();
    void Finished_408FEFA84EADD356751F4B9017BB4979();
    void PlayPannelBackDisAppearAnim();
    void PannelBackAppearGoldAnim();
    void PlayPannelBackAppearAnim();
    void PannelBackDisAppearGoldAnim();
    void PannelOutlineGlowAnim();
    void PulsePanelBorderGlow();
    void ExecuteUbergraph_UI_BP_FG_DetailsPanelBack(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void OnPanelBackApearanceComplete__DelegateSignature();
}; // Size: 0x2a0
#pragma pack(pop)
