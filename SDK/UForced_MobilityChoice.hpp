#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "UNPC_MobilityChoice.hpp"
#pragma pack(push, 1)
class UForced_MobilityChoice : public UNPC_MobilityChoice {
public:
    ENPC_Mobility Mobility; // 0x28
    char pad_29[0x7];
    static UForced_MobilityChoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
