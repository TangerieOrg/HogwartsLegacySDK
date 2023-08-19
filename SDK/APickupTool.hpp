#pragma once
#include <cstdint>
#include "AItemTool.hpp"
#pragma pack(push, 1)
class APickupTool : public AItemTool {
public:
    char pad_2f0[0x8];
    FName UnequipAction; // 0x2f8
    bool AccioCatchable; // 0x300
    char pad_301[0x7];
    static APickupTool* StaticClass();
    void OnUseReleased();
    void OnUsePressed();
    void OnDeactivateReleased();
    void OnDeactivatePressed();
    void DeactivateTool();
}; // Size: 0x308
#pragma pack(pop)
