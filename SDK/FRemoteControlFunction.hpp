#pragma once
#include <cstdint>
#include "FRemoteControlField.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FRemoteControlFunction : public FRemoteControlField {
    char pad_130[0x10];
    bool bIsCallableInPackaged; // 0x140
    char pad_141[0x7];
    FSoftObjectPath FunctionPath; // 0x148
    char pad_160[0x8];
}; // Size: 0x168
#pragma pack(pop)
