#pragma once
#include <cstdint>
#include "ENPC_AbilityChannel.hpp"
#include "FGameplayTagContainer.hpp"
class UClass;
#pragma pack(push, 1)
struct FNPC_AbilityChannel {
    ENPC_AbilityChannel Channel; // 0x0
    bool bEnable; // 0x1
    char pad_2[0x2];
    int32_t OnState; // 0x4
    int32_t OnAnims; // 0x8
    int32_t OnContext; // 0xc
    FGameplayTagContainer TagContainer; // 0x10
    UClass* ChannelAbilityPtr; // 0x30
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
