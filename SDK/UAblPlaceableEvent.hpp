#pragma once
#include <cstdint>
#include "UAblAbilityEvent.hpp"
#pragma pack(push, 1)
class UAblPlaceableEvent : public UAblAbilityEvent {
public:
    static UAblPlaceableEvent* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
