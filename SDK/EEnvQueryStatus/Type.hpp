#pragma once
#include <cstdint>
namespace EEnvQueryStatus {
#pragma pack(push, 1)
enum Type : uint8_t {
    Processing = 0,
    Success = 1,
    Failed = 2,
    Aborted = 3,
    OwnerLost = 4,
    MissingParam = 5,
    EEnvQueryStatus_MAX = 6,
};
#pragma pack(pop)
}
