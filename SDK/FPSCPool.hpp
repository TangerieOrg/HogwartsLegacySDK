#pragma once
#include <cstdint>
#include "FPSCPoolElem.hpp"
#pragma pack(push, 1)
struct FPSCPool {
    TArray<FPSCPoolElem> FreeElements; // 0x0
}; // Size: 0x10
#pragma pack(pop)
