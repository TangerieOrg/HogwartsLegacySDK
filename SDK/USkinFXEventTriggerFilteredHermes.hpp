#pragma once
#include <cstdint>
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
#pragma pack(push, 1)
class USkinFXEventTriggerFilteredHermes : public USkinFXEventTriggerFilteredWithDistance {
public:
    FName HermesMessage; // 0x38
    static USkinFXEventTriggerFilteredHermes* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
