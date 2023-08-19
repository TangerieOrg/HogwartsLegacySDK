#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UPlatformEventsComponent : public UActorComponent {
public:
    char pad_c8[0x20];
    static UPlatformEventsComponent* StaticClass();
    bool SupportsConvertibleLaptops();
    void PlatformEventDelegate__DelegateSignature();
    bool IsInTabletMode();
    bool IsInLaptopMode();
}; // Size: 0xe8
#pragma pack(pop)
