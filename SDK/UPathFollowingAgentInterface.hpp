#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPathFollowingAgentInterface : public UInterface {
public:
    static UPathFollowingAgentInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
