#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UAIPerceptionListenerInterface : public UInterface {
public:
    static UAIPerceptionListenerInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
