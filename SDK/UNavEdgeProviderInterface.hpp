#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavEdgeProviderInterface : public UInterface {
public:
    static UNavEdgeProviderInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
