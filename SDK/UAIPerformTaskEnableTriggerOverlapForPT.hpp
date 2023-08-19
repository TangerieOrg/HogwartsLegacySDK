#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class AActor;
#pragma pack(push, 1)
class UAIPerformTaskEnableTriggerOverlapForPT : public UAIPerformTaskBase {
public:
    bool bShouldActivate; // 0xe0
    char pad_e1[0xf];
    static UAIPerformTaskEnableTriggerOverlapForPT* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
