#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget_LockOnReticle.hpp"
class UImage;
class UCanvasPanel;
#pragma pack(push, 1)
class UUI_BP_AimLock_Reticule_C : public UUserWidget_LockOnReticle {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
    UImage* AimModeCircle; // 0x2f8
    UCanvasPanel* CursorPanel; // 0x300
    UImage* MouseCursorRings_1; // 0x308
    UImage* RedDot; // 0x310
    UImage* sparkles; // 0x318
    UImage* TargetCircle; // 0x320
    UImage* TargetDot; // 0x328
    static UUI_BP_AimLock_Reticule_C* StaticClass();
    void SetAimModeVisibility0(ESlateVisibility InVisibility);
    void SetLockOnVisibility0(ESlateVisibility InVisibility);
    void SetAimModeCircleScale0(float InScale);
    void ExecuteUbergraph_UI_BP_AimLock_Reticule(int32_t EntryPoint, ESlateVisibility K2Node_Event_InVisibility_1, ESlateVisibility K2Node_Event_InVisibility, float K2Node_Event_InScale);
}; // Size: 0x330
#pragma pack(pop)
