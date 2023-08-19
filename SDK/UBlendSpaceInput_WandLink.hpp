#pragma once
#include <cstdint>
#include "UBlendSpaceInputProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UBlendSpaceInput_WandLink : public UBlendSpaceInputProvider {
public:
    UActorProvider* Provider; // 0x28
    bool bPlayer; // 0x30
    char pad_31[0x7];
    static UBlendSpaceInput_WandLink* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
