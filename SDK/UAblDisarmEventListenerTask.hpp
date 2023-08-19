#pragma once
#include <cstdint>
#include "UAblCustomEventListenerOnceTask.hpp"
#pragma pack(push, 1)
class UAblDisarmEventListenerTask : public UAblCustomEventListenerOnceTask {
public:
    static UAblDisarmEventListenerTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
