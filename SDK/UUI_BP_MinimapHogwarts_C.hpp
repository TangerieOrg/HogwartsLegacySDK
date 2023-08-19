#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMinimapHogwarts.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_MinimapHogwarts_C : public UMinimapHogwarts {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4f0
    UImage* MinimapBackground; // 0x4f8
    static UUI_BP_MinimapHogwarts_C* StaticClass();
    void Construct();
    void SetMapOpacity(float Opacity);
    void ShowMap(bool Visibile);
    void ExecuteUbergraph_UI_BP_MinimapHogwarts(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile);
}; // Size: 0x500
#pragma pack(pop)
