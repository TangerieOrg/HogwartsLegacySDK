#pragma once
#include <cstdint>
#include "ERCBindingStatus.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FRemoteControlProtocolEntity {
    char pad_0[0x10];
    FGuid PropertyId; // 0x10
    char pad_20[0x58];
    ERCBindingStatus BindingStatus; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
