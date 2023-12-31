#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EComponentCreationMethod : uint8_t {
    Native = 0,
    SimpleConstructionScript = 1,
    UserConstructionScript = 2,
    Instance = 3,
    EComponentCreationMethod_MAX = 4,
};
#pragma pack(pop)
