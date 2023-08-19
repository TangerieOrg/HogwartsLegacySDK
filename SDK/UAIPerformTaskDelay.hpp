#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskDelay : public UAIPerformTaskBase {
public:
    char pad_e0[0x10];
    static UAIPerformTaskDelay* StaticClass();
    void OnDelayFinished();
}; // Size: 0xf0
#pragma pack(pop)
