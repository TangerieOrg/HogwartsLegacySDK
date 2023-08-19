#pragma once
#include <cstdint>
namespace EEnvTestFilterOperator {
#pragma pack(push, 1)
enum Type : uint8_t {
    AllPass = 0,
    AnyPass = 1,
    EEnvTestFilterOperator_MAX = 2,
};
#pragma pack(pop)
}
