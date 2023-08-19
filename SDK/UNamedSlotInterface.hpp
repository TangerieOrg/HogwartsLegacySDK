#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNamedSlotInterface : public UInterface {
public:
    static UNamedSlotInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
