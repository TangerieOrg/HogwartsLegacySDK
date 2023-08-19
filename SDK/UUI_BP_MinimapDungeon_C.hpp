#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMinimapDungeon.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_MinimapDungeon_C : public UMinimapDungeon {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x578
    UImage* MinimapBackground; // 0x580
    static UUI_BP_MinimapDungeon_C* StaticClass();
    void Construct();
    void SetMapOpacity(float Opacity);
    void ShowMap(bool Visibile);
    void ExecuteUbergraph_UI_BP_MinimapDungeon(int32_t EntryPoint, float K2Node_Event_Opacity, bool K2Node_Event_Visibile);
}; // Size: 0x588
#pragma pack(pop)
