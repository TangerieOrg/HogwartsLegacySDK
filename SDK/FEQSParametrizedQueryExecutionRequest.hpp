#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "FAIDynamicParam.hpp"
#include "FBlackboardKeySelector.hpp"
class UEnvQuery;
#pragma pack(push, 1)
struct FEQSParametrizedQueryExecutionRequest {
    UEnvQuery* QueryTemplate; // 0x0
    TArray<FAIDynamicParam> QueryConfig; // 0x8
    FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
    EEnvQueryRunMode::Type RunMode; // 0x40
    char pad_41[0x3];
    uint8_t bUseBBKeyForQueryTemplate : 1; // 0x44
    uint8_t pad_bitfield_44_1 : 7;
    char pad_45[0x3];
}; // Size: 0x48
#pragma pack(pop)
