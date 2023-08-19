#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AMarker : public AActor {
public:
    FName UniqueName; // 0x248
    static AMarker* StaticClass();
    FName GenerateUniqueName(FName InBaseName);
}; // Size: 0x250
#pragma pack(pop)
