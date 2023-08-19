#pragma once
#include <cstdint>
#include "UAblCustomEventListenerTask.hpp"
#pragma pack(push, 1)
class UAblCustomEventListenerStartEndTask : public UAblCustomEventListenerTask {
public:
    FName StartEventName; // 0x70
    FName EndEventName; // 0x78
    static UAblCustomEventListenerStartEndTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
