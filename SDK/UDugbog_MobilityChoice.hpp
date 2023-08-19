#pragma once
#include <cstdint>
#include "UNPC_MobilityChoice.hpp"
#pragma pack(push, 1)
class UDugbog_MobilityChoice : public UNPC_MobilityChoice {
public:
    char pad_28[0x8];
    static UDugbog_MobilityChoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
