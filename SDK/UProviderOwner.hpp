#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UProviderOwner : public UInterface {
public:
    static UProviderOwner* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
