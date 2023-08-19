#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPropertyEventBroadcaster : public UInterface {
public:
    static UPropertyEventBroadcaster* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
