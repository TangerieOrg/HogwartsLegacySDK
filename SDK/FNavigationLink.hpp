#pragma once
#include <cstdint>
#include "FNavigationLinkBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNavigationLink : public FNavigationLinkBase {
    FVector Left; // 0x30
    FVector Right; // 0x3c
}; // Size: 0x48
#pragma pack(pop)
