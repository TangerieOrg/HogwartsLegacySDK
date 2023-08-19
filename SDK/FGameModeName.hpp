#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#pragma pack(push, 1)
struct FGameModeName {
    FString Name; // 0x0
    FSoftClassPath GameMode; // 0x10
}; // Size: 0x28
#pragma pack(pop)
