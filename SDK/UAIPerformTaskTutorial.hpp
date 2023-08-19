#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskTutorial : public UAIPerformTaskBase {
public:
    bool bOrientToPlayer; // 0xe0
    char pad_e1[0xf];
    static UAIPerformTaskTutorial* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
