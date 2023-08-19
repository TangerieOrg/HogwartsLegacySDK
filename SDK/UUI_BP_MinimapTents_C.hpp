#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMinimapTents.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_MinimapTents_C : public UMinimapTents {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4e0
    UImage* MinimapBackground; // 0x4e8
    static UUI_BP_MinimapTents_C* StaticClass();
    void SetMapOpacity(float Opacity);
    void ShowMap(bool Visibile);
    void ExecuteUbergraph_UI_BP_MinimapTents(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile);
}; // Size: 0x4f0
#pragma pack(pop)
