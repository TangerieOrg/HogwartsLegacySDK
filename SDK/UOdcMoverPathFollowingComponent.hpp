#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UPathFollowingComponent.hpp"
#pragma pack(push, 1)
class UOdcMoverPathFollowingComponent : public UPathFollowingComponent {
public:
    FSoftClassPath ReplacedNavDataClass; // 0x268
    char pad_280[0x10];
    static UOdcMoverPathFollowingComponent* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
