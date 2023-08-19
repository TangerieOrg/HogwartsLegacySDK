#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UCombatParryWidget.hpp"
#pragma pack(push, 1)
class UUI_BP_CombatParry_C : public UCombatParryWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x368
    static UUI_BP_CombatParry_C* StaticClass();
    void Construct();
    void ExecuteUbergraph_UI_BP_CombatParry(int32_t EntryPoint);
}; // Size: 0x370
#pragma pack(pop)
