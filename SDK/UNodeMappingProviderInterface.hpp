#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNodeMappingProviderInterface : public UInterface {
public:
    static UNodeMappingProviderInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
