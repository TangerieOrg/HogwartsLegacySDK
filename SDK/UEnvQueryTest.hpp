#pragma once
#include <cstdint>
#include "EEQSNormalizationType.hpp"
#include "EEnvQueryTestClamping\Type.hpp"
#include "EEnvTestFilterOperator\Type.hpp"
#include "EEnvTestFilterType\Type.hpp"
#include "EEnvTestPurpose\Type.hpp"
#include "EEnvTestScoreEquation\Type.hpp"
#include "EEnvTestScoreOperator\Type.hpp"
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "UEnvQueryNode.hpp"
#pragma pack(push, 1)
class UEnvQueryTest : public UEnvQueryNode {
public:
    int32_t TestOrder; // 0x30
    EEnvTestPurpose::Type TestPurpose; // 0x34
    char pad_35[0x3];
    FString TestComment; // 0x38
    EEnvTestFilterOperator::Type MultipleContextFilterOp; // 0x48
    EEnvTestScoreOperator::Type MultipleContextScoreOp; // 0x49
    EEnvTestFilterType::Type FilterType; // 0x4a
    char pad_4b[0x5];
    FAIDataProviderBoolValue BoolValue; // 0x50
    FAIDataProviderFloatValue FloatValueMin; // 0x88
    FAIDataProviderFloatValue FloatValueMax; // 0xc0
    char pad_f8[0x1];
    EEnvTestScoreEquation::Type ScoringEquation; // 0xf9
    EEnvQueryTestClamping::Type ClampMinType; // 0xfa
    EEnvQueryTestClamping::Type ClampMaxType; // 0xfb
    EEQSNormalizationType NormalizationType; // 0xfc
    char pad_fd[0x3];
    FAIDataProviderFloatValue ScoreClampMin; // 0x100
    FAIDataProviderFloatValue ScoreClampMax; // 0x138
    FAIDataProviderFloatValue ScoringFactor; // 0x170
    FAIDataProviderFloatValue ReferenceValue; // 0x1a8
    bool bDefineReferenceValue; // 0x1e0
    char pad_1e1[0xf];
    uint8_t bWorkOnFloatValues : 1; // 0x1f0
    uint8_t pad_bitfield_1f0_1 : 7;
    char pad_1f1[0x7];
    static UEnvQueryTest* StaticClass();
}; // Size: 0x1f8
#pragma pack(pop)
