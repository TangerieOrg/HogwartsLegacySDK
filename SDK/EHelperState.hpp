#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHelperState : uint8_t {
    IDLE = 0,
    START = 1,
    DEPLOY = 2,
    DEPLOY_TURN = 3,
    RUN = 4,
    ATTRACT = 5,
    POP_OUT = 6,
    END = 7,
    EHelperState_MAX = 8,
};
#pragma pack(pop)
