#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETutorialPersistence : uint8_t {
    Tutorial_Persistence_Restart = 0,
    Tutorial_Persistence_Ignore = 1,
    Tutorial_Persistence_MAX = 2,
};
#pragma pack(pop)
