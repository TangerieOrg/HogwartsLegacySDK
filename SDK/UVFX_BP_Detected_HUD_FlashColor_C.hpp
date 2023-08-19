#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UImage;
#pragma pack(push, 1)
class UVFX_BP_Detected_HUD_FlashColor_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* Flash_On_Off; // 0x270
    UImage* DEtected_Flash; // 0x278
    static UVFX_BP_Detected_HUD_FlashColor_C* StaticClass();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x280
#pragma pack(pop)
