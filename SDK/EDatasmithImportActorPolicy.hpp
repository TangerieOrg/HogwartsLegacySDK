#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithImportActorPolicy : uint8_t {
    Update = 0,
    Full = 1,
    Ignore = 2,
    EDatasmithImportActorPolicy_MAX = 3,
};
#pragma pack(pop)
