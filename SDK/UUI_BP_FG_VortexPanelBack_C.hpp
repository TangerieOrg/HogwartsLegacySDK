#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
#pragma pack(push, 1)
class UUI_BP_FG_VortexPanelBack_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* AppearPannelBack_Gold; // 0x270
    UWidgetAnimation* AppearPannelBack; // 0x278
    UImage* detailsPanelVortex_0; // 0x280
    UImage* detailsPanelVortex_1; // 0x288
    UImage* detailsPanelVortex_2; // 0x290
    UImage* detailsPanelVortex_3; // 0x298
    UImage* overlayStarGlow; // 0x2a0
    static UUI_BP_FG_VortexPanelBack_C* StaticClass();
    void PannelVortexDisAppearAnim();
    void PannelVortexAppearGold();
    void PannelVortexAppearAnim();
    void PannelVortexDisAppearGold();
    void ExecuteUbergraph_UI_BP_FG_VortexPanelBack(int32_t EntryPoint, float CallFunc_PauseAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
}; // Size: 0x2a8
#pragma pack(pop)
