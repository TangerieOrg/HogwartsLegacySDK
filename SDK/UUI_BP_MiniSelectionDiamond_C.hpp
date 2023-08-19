#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UMiniSelectionDiamondBase.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UImage;
#pragma pack(push, 1)
class UUI_BP_MiniSelectionDiamond_C : public UMiniSelectionDiamondBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* UnavailableFeedback; // 0x270
    UWidgetAnimation* toActive; // 0x278
    UImage* Back; // 0x280
    UCanvasPanel* groupPanel; // 0x288
    UImage* statusIndicator; // 0x290
    static UUI_BP_MiniSelectionDiamond_C* StaticClass();
    void LockedDiamondSelected(int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetGroupStatus(int32_t StatusIndex, int32_t Temp_int_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, FVector2D Temp_struct_Variable_2, int32_t Temp_int_Variable_1, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, int32_t Temp_int_Variable_2, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, int32_t Temp_int_Variable_3, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, FVector2D K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3);
    void PreConstruct(bool IsDesignTime);
    void OnSetState0(int32_t NewState);
    void ExecuteUbergraph_UI_BP_MiniSelectionDiamond(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t K2Node_Event_NewState, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
}; // Size: 0x298
#pragma pack(pop)
