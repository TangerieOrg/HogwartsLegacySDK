#pragma once
#include <cstdint>
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
#pragma pack(push, 1)
class USkinFXEventTriggerFilteredHermesSimple : public USkinFXEventTriggerFilteredWithDistance {
public:
    FName HermesMessage; // 0x38
    FName MessageData; // 0x40
    static USkinFXEventTriggerFilteredHermesSimple* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
