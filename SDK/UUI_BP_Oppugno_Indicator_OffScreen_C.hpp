#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UOverlay;
class UObject;
class UPhoenixRichTextBlock;
class UImage;
struct FVector;
#pragma pack(push, 1)
class UUI_BP_Oppugno_Indicator_OffScreen_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UOverlay* ArrowOverlay; // 0x2f0
    UPhoenixRichTextBlock* ButtonPrompt; // 0x2f8
    UImage* TargetArrow; // 0x300
    static UUI_BP_Oppugno_Indicator_OffScreen_C* StaticClass();
    void Construct();
    void RotateIndicator(UObject* Caller, FVector& Vector);
    void ExecuteUbergraph_UI_BP_Oppugno_Indicator_OffScreen(int32_t EntryPoint, float Temp_float_Variable);
}; // Size: 0x308
#pragma pack(pop)
