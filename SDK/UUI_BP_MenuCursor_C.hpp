#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUI_BP_BaseCursor_C.hpp"
#pragma pack(push, 1)
class UUI_BP_MenuCursor_C : public UUI_BP_BaseCursor_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x310
    static UUI_BP_MenuCursor_C* StaticClass();
    void Construct0();
    void Tick0(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_BP_MenuCursor(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
}; // Size: 0x318
#pragma pack(pop)
