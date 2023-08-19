#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UVRNotificationsComponent : public UActorComponent {
public:
    char pad_c8[0x90];
    static UVRNotificationsComponent* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
