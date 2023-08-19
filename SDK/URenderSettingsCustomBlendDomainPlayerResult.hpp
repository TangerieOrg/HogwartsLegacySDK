#pragma once
#include <cstdint>
#include "FName_GameLogicBoolResult.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainPlayerResult : public URenderSettingsCustomBlendDomain {
public:
    FName_GameLogicBoolResult PlayerResult; // 0x28
    static URenderSettingsCustomBlendDomainPlayerResult* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
