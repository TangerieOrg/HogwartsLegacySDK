#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHairCardsSourceType : uint8_t {
    Procedural = 0,
    Imported = 1,
    EHairCardsSourceType_MAX = 2,
};
#pragma pack(pop)
