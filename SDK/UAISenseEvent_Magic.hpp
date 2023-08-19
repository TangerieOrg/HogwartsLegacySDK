#pragma once
#include <cstdint>
#include "FAIMagicEvent.hpp"
#include "UAISenseEvent.hpp"
#pragma pack(push, 1)
class UAISenseEvent_Magic : public UAISenseEvent {
public:
    FAIMagicEvent Event; // 0x28
    static UAISenseEvent_Magic* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
