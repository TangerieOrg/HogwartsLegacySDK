#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UBorder;
class UImage;
class UPhoenixTextBlock;
class UObject;
#pragma pack(push, 1)
class UUI_BP_VaseCounter_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* Intro; // 0x2f0
    UBorder* Border_2; // 0x2f8
    UImage* CounterBG; // 0x300
    UPhoenixTextBlock* CounterText; // 0x308
    UImage* EnemyIcon; // 0x310
    static UUI_BP_VaseCounter_C* StaticClass();
    void Construct();
    void VaseBroken(UObject* Caller, int32_t Int1, int32_t Int2);
    void ShowVaseCounter(UObject* Caller);
    void HideVaseCounter(UObject* Caller);
    void ShowVaseCounterNoIcon(UObject* Caller);
    void ExecuteUbergraph_UI_BP_VaseCounter(int32_t EntryPoint);
}; // Size: 0x318
#pragma pack(pop)
