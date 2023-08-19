#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#pragma pack(push, 1)
class URenderSettingsCustomBlendDomainPlayerRequirement : public URenderSettingsCustomBlendDomain {
public:
    FName_GameLogicVarBool PlayerRequirement; // 0x28
    static URenderSettingsCustomBlendDomainPlayerRequirement* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
