#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEdGraphPinDirection : uint8_t {
    EGPD_Input = 0,
    EGPD_Output = 1,
    EGPD_MAX = 2,
};
#pragma pack(pop)
