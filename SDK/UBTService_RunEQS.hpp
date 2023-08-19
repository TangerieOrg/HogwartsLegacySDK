#pragma once
#include <cstdint>
#include "FEQSParametrizedQueryExecutionRequest.hpp"
#include "UBTService_BlackboardBase.hpp"
#pragma pack(push, 1)
class UBTService_RunEQS : public UBTService_BlackboardBase {
public:
    FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
    char pad_e0[0x10];
    static UBTService_RunEQS* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
