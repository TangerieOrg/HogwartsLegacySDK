#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavAgentInterface : public UInterface {
public:
    static UNavAgentInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
