#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGenericTeamAgentInterface : public UInterface {
public:
    static UGenericTeamAgentInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
