#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBlendableInterface : public UInterface {
public:
    static UBlendableInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
