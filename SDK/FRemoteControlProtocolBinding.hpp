#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FRemoteControlProtocolBinding {
    FGuid ID; // 0x0
    FName ProtocolName; // 0x10
    FGuid PropertyId; // 0x18
    FName MappingPropertyName; // 0x28
    char pad_30[0x10];
}; // Size: 0x40
#pragma pack(pop)
