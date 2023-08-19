#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USkinFXAutoTriggerDriver : public UObject {
public:
    bool bDisabled; // 0x28
    char pad_29[0x7];
    static USkinFXAutoTriggerDriver* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
