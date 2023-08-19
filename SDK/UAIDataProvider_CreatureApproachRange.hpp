#pragma once
#include <cstdint>
#include "UAIDataProvider_QueryParams.hpp"
#pragma pack(push, 1)
class UAIDataProvider_CreatureApproachRange : public UAIDataProvider_QueryParams {
public:
    bool bRandomizeRange; // 0x40
    char pad_41[0x7];
    static UAIDataProvider_CreatureApproachRange* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
