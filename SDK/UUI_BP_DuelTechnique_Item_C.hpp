#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FSlateBrush.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UBorder;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UUI_BP_DuelTechnique_Item_C : public UUserWidget {
public:
    UWidgetAnimation* MarkFailure; // 0x268
    UWidgetAnimation* MarkSuccess; // 0x270
    UBorder* countBorder; // 0x278
    UPhoenixTextBlock* CurrentCount; // 0x280
    UPhoenixTextBlock* maxCountText; // 0x288
    UPhoenixTextBlock* techniqueTask; // 0x290
    UPhoenixTextBlock* Time; // 0x298
    FName TechniqueID; // 0x2a0
    int32_t MaxCount; // 0x2a8
    bool TaskCompleted; // 0x2ac
    char pad_2ad[0x3];
    FSlateBrush StrikeThroughBrush; // 0x2b0
    static UUI_BP_DuelTechnique_Item_C* StaticClass();
    void GetTechniqueID(FName& ID);
    void MarkTaskFailure(bool IsNew, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void MarkTaskSuccess(bool IsNew, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void UpdateCount(int32_t CurrentCount);
    void UpdateTime();
    void SetTechniqueData(bool ShowCount, bool ShowTime, FString TaskDesc, FName ID, int32_t MaxValue, int32_t Seconds, int32_t Minutes, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1);
}; // Size: 0x338
#pragma pack(pop)
