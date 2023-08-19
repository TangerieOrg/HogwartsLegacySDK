#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UInvestigatableComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    int32_t totalInvestigations; // 0xd0
    char pad_d4[0xc];
    static UInvestigatableComponent* StaticClass();
    bool GetInvestigatable();
}; // Size: 0xe0
#pragma pack(pop)
