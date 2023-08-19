#pragma once
#include <cstdint>
namespace EPathFollowingRequestResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    Failed = 0,
    AlreadyAtGoal = 1,
    RequestSuccessful = 2,
    EPathFollowingRequestResult_MAX = 3,
};
#pragma pack(pop)
}
