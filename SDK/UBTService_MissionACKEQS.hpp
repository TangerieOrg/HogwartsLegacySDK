#pragma once
#include <cstdint>
#include "UBTService_RunEQS.hpp"
#pragma pack(push, 1)
class UBTService_MissionACKEQS : public UBTService_RunEQS {
public:
    char pad_f0[0x18];
    static UBTService_MissionACKEQS* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
