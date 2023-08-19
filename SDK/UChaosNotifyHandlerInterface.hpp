#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UChaosNotifyHandlerInterface : public UInterface {
public:
    static UChaosNotifyHandlerInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
