#pragma once
#include <cstdint>
#include "FOdcPathSpec.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPathSpecInterface : public UInterface {
public:
    static UPathSpecInterface* StaticClass();
    FOdcPathSpec GetPathSpec();
    int32_t GetLinkUsageFlags();
    int32_t GetBlockageFlags();
}; // Size: 0x28
#pragma pack(pop)
