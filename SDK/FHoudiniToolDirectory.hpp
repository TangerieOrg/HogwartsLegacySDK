#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#pragma pack(push, 1)
struct FHoudiniToolDirectory {
    FString Name; // 0x0
    FDirectoryPath Path; // 0x10
    FString ContentDirID; // 0x20
}; // Size: 0x30
#pragma pack(pop)
