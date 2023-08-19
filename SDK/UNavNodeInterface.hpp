#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavNodeInterface : public UInterface {
public:
    static UNavNodeInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
