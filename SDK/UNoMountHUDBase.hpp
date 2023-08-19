#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UNoMountHUDBase : public UHUDElementGroup {
public:
    bool IsAnimating; // 0x2e8
    char pad_2e9[0x7];
    static UNoMountHUDBase* StaticClass();
    void OnUseStateChanged(bool Show);
}; // Size: 0x2f0
#pragma pack(pop)
