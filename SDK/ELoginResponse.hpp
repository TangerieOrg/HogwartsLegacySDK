#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELoginResponse {
    SuccessNoWWID = 0,
    SuccessAndWWID = 1,
    Incomplete = 2,
    SilentFailure = 3,
    Invalid = 4,
    Failure = 5,
    ELoginResponse_MAX = 6,
};
#pragma pack(pop)
