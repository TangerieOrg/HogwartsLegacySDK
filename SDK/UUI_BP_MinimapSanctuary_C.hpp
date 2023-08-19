#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMinimapSanctuary.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_MinimapSanctuary_C : public UMinimapSanctuary {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x530
    UImage* MinimapBackground; // 0x538
    static UUI_BP_MinimapSanctuary_C* StaticClass();
    void SetMapOpacity(float Opacity);
    void ShowMap(bool Visibile);
    void ExecuteUbergraph_UI_BP_MinimapSanctuary(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile);
}; // Size: 0x540
#pragma pack(pop)
