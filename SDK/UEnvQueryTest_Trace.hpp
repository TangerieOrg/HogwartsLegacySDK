#pragma once
#include <cstdint>
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FEnvTraceData.hpp"
#include "UEnvQueryTest.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryTest_Trace : public UEnvQueryTest {
public:
    FEnvTraceData TraceData; // 0x1f8
    FAIDataProviderBoolValue TraceFromContext; // 0x228
    FAIDataProviderFloatValue ItemHeightOffset; // 0x260
    FAIDataProviderFloatValue ContextHeightOffset; // 0x298
    UClass* Context; // 0x2d0
    static UEnvQueryTest_Trace* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
