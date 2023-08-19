#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreditEntryType : uint8_t {
    Header1 = 0,
    Header2 = 1,
    Header3 = 2,
    Header4 = 3,
    Line = 4,
    Multiline = 5,
    Image = 6,
    Spacer = 7,
    ECreditEntryType_MAX = 8,
};
#pragma pack(pop)
