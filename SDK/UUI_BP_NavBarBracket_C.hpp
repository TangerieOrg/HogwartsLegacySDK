#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UScaleBox;
#pragma pack(push, 1)
class UUI_BP_NavBarBracket_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UScaleBox* Base; // 0x270
    UScaleBox* End; // 0x278
    UScaleBox* middle; // 0x280
    float ScaleValue; // 0x288
    char pad_28c[0x4];
    static UUI_BP_NavBarBracket_C* StaticClass();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_NavBarBracket(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x290
#pragma pack(pop)
