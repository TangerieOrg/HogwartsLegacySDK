#pragma once
#include <cstdint>
#include "UAblAnimNotifyEvent.hpp"
#pragma pack(push, 1)
class UAblAnimNotifyPureEvent : public UAblAnimNotifyEvent {
public:
    static UAblAnimNotifyPureEvent* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
