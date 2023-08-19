#pragma once
#include <cstdint>
namespace EProxyNormalComputationMethod {
#pragma pack(push, 1)
enum Type : uint8_t {
    AngleWeighted = 0,
    AreaWeighted = 1,
    EqualWeighted = 2,
    EProxyNormalComputationMethod_MAX = 3,
};
#pragma pack(pop)
}
