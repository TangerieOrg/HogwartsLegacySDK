#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMenuReaderInterruptType : uint8_t {
    InterruptAll = 0,
    InterruptSelf = 1,
    InterruptSpecifiedOwner = 2,
    InterruptNone = 3,
    EMenuReaderInterruptType_MAX = 4,
};
#pragma pack(pop)
