#pragma once
#include <cstdint>
#include "FPerPlatformBool.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UNoCookComponent : public UActorComponent {
public:
    FPerPlatformBool NoCookActor; // 0xc8
    char pad_c9[0x7];
    static UNoCookComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
