#pragma once
#include <cstdint>
#include "UChildActorComponent.hpp"
#pragma pack(push, 1)
class UDeferredChildActorComponent : public UChildActorComponent {
public:
    char pad_250[0x20];
    static UDeferredChildActorComponent* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
