#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EToolMessageLevel {
    Internal = 0,
    UserMessage = 1,
    UserNotification = 2,
    UserWarning = 3,
    UserError = 4,
    EToolMessageLevel_MAX = 5,
};
#pragma pack(pop)
