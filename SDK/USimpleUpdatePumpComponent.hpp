#pragma once
#include <cstdint>
#include "ESimpleUpdatePumpComponentMode.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class USimpleUpdatePumpComponent : public UActorComponent {
public:
    ESimpleUpdatePumpComponentMode SimpleUpdatePumpMode; // 0xc8
    bool bSuspend; // 0xc9
    char pad_ca[0x16];
    static USimpleUpdatePumpComponent* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
