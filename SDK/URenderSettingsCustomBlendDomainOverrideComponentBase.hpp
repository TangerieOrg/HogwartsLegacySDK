#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainOverrideComponentBase : public UActorComponent {
public:
    char pad_c8[0x8];
    bool bEnabled; // 0xd0
    char pad_d1[0x7];
    static URenderSettingsCustomBlendDomainOverrideComponentBase* StaticClass();
    void SetEnabled(bool bEnable);
    void IsEnabled(bool& bEnable);
}; // Size: 0xd8
#pragma pack(pop)
