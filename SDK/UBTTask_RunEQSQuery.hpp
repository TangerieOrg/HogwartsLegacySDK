#pragma once
#include <cstdint>
#include "EEnvQueryRunMode\Type.hpp"
#include "FAIDynamicParam.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FEQSParametrizedQueryExecutionRequest.hpp"
#include "FEnvNamedValue.hpp"
#include "UBTTask_BlackboardBase.hpp"
class UEnvQuery;
#pragma pack(push, 1)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
public:
    UEnvQuery* QueryTemplate; // 0x98
    TArray<FEnvNamedValue> QueryParams; // 0xa0
    TArray<FAIDynamicParam> QueryConfig; // 0xb0
    EEnvQueryRunMode::Type RunMode; // 0xc0
    char pad_c1[0x7];
    FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
    bool bUseBBKey; // 0xf0
    char pad_f1[0x7];
    FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
    char pad_140[0x10];
    static UBTTask_RunEQSQuery* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
