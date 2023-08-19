#pragma once
#include <cstdint>
#include "FNCPoolElement.hpp"
#pragma pack(push, 1)
struct FNCPool {
    TArray<FNCPoolElement> FreeElements; // 0x0
}; // Size: 0x10
#pragma pack(pop)
