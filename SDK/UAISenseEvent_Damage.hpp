#pragma once
#include <cstdint>
#include "FAIDamageEvent.hpp"
#include "UAISenseEvent.hpp"
#pragma pack(push, 1)
class UAISenseEvent_Damage : public UAISenseEvent {
public:
    FAIDamageEvent Event; // 0x28
    static UAISenseEvent_Damage* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
