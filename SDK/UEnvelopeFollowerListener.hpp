#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UEnvelopeFollowerListener : public UActorComponent {
public:
    char pad_c8[0x20];
    static UEnvelopeFollowerListener* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
