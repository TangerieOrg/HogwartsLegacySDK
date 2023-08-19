#pragma once
#include <cstdint>
#include "FEnvTraceData.hpp"
#include "UEnvQueryGenerator.hpp"
#pragma pack(push, 1)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {
public:
    FEnvTraceData ProjectionData; // 0x50
    static UEnvQueryGenerator_ProjectedPoints* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
