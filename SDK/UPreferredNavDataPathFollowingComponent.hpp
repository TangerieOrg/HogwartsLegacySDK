#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UPathFollowingComponent.hpp"
#pragma pack(push, 1)
class UPreferredNavDataPathFollowingComponent : public UPathFollowingComponent {
public:
    FSoftClassPath PreferredNavData; // 0x268
    FSoftClassPath ReplacedNavData; // 0x280
    static UPreferredNavDataPathFollowingComponent* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
