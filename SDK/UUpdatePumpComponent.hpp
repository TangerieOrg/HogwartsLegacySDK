#pragma once
#include <cstdint>
#include "EUpdatePumpComponentMode.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UUpdatePumpComponent : public UActorComponent {
public:
    EUpdatePumpComponentMode UpdatePumpMode; // 0xc8
    bool bSuspend; // 0xc9
    char pad_ca[0x16];
    static UUpdatePumpComponent* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
