#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECRSimPointIntegrateType : uint8_t {
    Verlet = 0,
    SemiExplicitEuler = 1,
    ECRSimPointIntegrateType_MAX = 2,
};
#pragma pack(pop)
