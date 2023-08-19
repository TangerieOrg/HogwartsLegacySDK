#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UARTrackableNotifyComponent : public UActorComponent {
public:
    char pad_c8[0x150];
    static UARTrackableNotifyComponent* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
