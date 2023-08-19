#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UWindSourceDebugUpdateComponent : public UActorComponent {
public:
    int32_t UpdatesPerSecond; // 0xc8
    bool bOnlyTickAfterBeginPlay; // 0xcc
    char pad_cd[0x3];
    static UWindSourceDebugUpdateComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
