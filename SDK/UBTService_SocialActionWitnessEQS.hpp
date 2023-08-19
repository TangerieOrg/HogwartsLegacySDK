#pragma once
#include <cstdint>
#include "UBTService_RunEQS.hpp"
#pragma pack(push, 1)
class UBTService_SocialActionWitnessEQS : public UBTService_RunEQS {
public:
    char pad_f0[0x30];
    static UBTService_SocialActionWitnessEQS* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
