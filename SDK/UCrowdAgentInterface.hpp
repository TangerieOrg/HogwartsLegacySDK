#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCrowdAgentInterface : public UInterface {
public:
    static UCrowdAgentInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
