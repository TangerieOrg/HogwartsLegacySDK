#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMinimapHogsmeade.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_MinimapHogsmeade_C : public UMinimapHogsmeade {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4d0
    UImage* MinimapBackground; // 0x4d8
    static UUI_BP_MinimapHogsmeade_C* StaticClass();
    void SetMapOpacity(float Opacity);
    void ShowMap(bool Visibile);
    void ExecuteUbergraph_UI_BP_MinimapHogsmeade(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile);
}; // Size: 0x4e0
#pragma pack(pop)
