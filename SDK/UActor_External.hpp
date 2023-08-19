#pragma once
#include <cstdint>
#include "EExternalActorRole.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_External : public UActorProvider {
public:
    EExternalActorRole Role; // 0x38
    char pad_39[0x3];
    int32_t RoleIndex; // 0x3c
    static UActor_External* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
