#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UProviderStateHost : public UInterface {
public:
    static UProviderStateHost* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
