#pragma once
#include <cstdint>
#include "FAINoiseEvent.hpp"
#include "UAISenseEvent.hpp"
#pragma pack(push, 1)
class UAISenseEvent_Hearing : public UAISenseEvent {
public:
    FAINoiseEvent Event; // 0x28
    static UAISenseEvent_Hearing* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
