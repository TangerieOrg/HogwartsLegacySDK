#pragma once
#include <cstdint>
#include "FRPGUIInfo.hpp"
#include "UModExtension.hpp"
#pragma pack(push, 1)
class URPGModExtensionUI : public UModExtension {
public:
    bool bSendUINotifications; // 0x28
    char pad_29[0x3];
    FRPGUIInfo UIInfo; // 0x2c
    char pad_3c[0x4];
    static URPGModExtensionUI* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
