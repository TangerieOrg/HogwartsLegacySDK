#pragma once
#include <cstdint>
#include "UAIPerformTaskBase.hpp"
class UClass;
#pragma pack(push, 1)
class UAIPerformTaskJumpDown : public UAIPerformTaskBase {
public:
    static UAIPerformTaskJumpDown* StaticClass();
    void JumpFinished();
}; // Size: 0xe0
#pragma pack(pop)
