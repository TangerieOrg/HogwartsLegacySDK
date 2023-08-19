#pragma once
#include <cstdint>
#include "UAblAbilityEvent.hpp"
#pragma pack(push, 1)
class UAblGeneratedEvent : public UAblAbilityEvent {
public:
    bool bIsActive; // 0x50
    bool bRemovable; // 0x51
    char pad_52[0x6];
    static UAblGeneratedEvent* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
