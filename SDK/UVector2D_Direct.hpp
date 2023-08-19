#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UVector2DProvider.hpp"
#pragma pack(push, 1)
class UVector2D_Direct : public UVector2DProvider {
public:
    FVector2D Value; // 0x28
    static UVector2D_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
