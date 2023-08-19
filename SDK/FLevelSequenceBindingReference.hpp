#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FLevelSequenceBindingReference {
    FString PackageName; // 0x0
    FSoftObjectPath ExternalObjectPath; // 0x10
    FString ObjectPath; // 0x28
}; // Size: 0x38
#pragma pack(pop)
