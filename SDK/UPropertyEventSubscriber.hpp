#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPropertyEventSubscriber : public UInterface {
public:
    static UPropertyEventSubscriber* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
