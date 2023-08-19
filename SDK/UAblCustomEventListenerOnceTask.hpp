#pragma once
#include <cstdint>
#include "UAblCustomEventListenerTask.hpp"
#pragma pack(push, 1)
class UAblCustomEventListenerOnceTask : public UAblCustomEventListenerTask {
public:
    FName EventName; // 0x70
    static UAblCustomEventListenerOnceTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
