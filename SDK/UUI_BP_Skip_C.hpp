#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUI_BP_Legend_Horizontal_Screen_C;
class ULegendItem;
#pragma pack(push, 1)
class UUI_BP_Skip_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* HideAnimation; // 0x330
    UWidgetAnimation* ShowAnimation; // 0x338
    UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x340
    FTimerHandle TimerEventHandle; // 0x348
    static UUI_BP_Skip_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_Skip_0(UUI_BP_Legend_Horizontal_Screen_C* Legend);
    ULegendItem* GetSkipLegendItem(ULegendItem* CallFunc_GetLegendItem_ReturnValue);
    void Refresh_Timer();
    bool Should_Animate_Forward(UWidgetAnimation* InAnimation, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
    void Construct();
    void Destruct();
    void Show();
    void Hide();
    void OnSkipHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void OnLegendHidden(UUI_BP_Legend_Horizontal_Screen_C* Legend);
    void ExecuteUbergraph_UI_BP_Skip(int32_t EntryPoint);
}; // Size: 0x350
#pragma pack(pop)
