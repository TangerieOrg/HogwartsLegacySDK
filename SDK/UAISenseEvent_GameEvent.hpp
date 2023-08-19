#pragma once
#include <cstdint>
#include "FAIGameEvent.hpp"
#include "UAISenseEvent.hpp"
#pragma pack(push, 1)
class UAISenseEvent_GameEvent : public UAISenseEvent {
public:
    FAIGameEvent Event; // 0x28
    static UAISenseEvent_GameEvent* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
