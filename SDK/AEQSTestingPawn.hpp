#pragma once
#include <cstdint>
#include "ACharacter.hpp"
#include "EEnvQueryHightlightMode.hpp"
#include "EEnvQueryRunMode\Type.hpp"
#include "FAIDynamicParam.hpp"
#include "FEnvNamedValue.hpp"
#include "FNavAgentProperties.hpp"
class UEnvQuery;
#pragma pack(push, 1)
class AEQSTestingPawn : public ACharacter {
public:
    UEnvQuery* QueryTemplate; // 0x4e0
    TArray<FEnvNamedValue> QueryParams; // 0x4e8
    TArray<FAIDynamicParam> QueryConfig; // 0x4f8
    float TimeLimitPerStep; // 0x508
    int32_t StepToDebugDraw; // 0x50c
    EEnvQueryHightlightMode HighlightMode; // 0x510
    char pad_511[0x3];
    uint8_t bDrawLabels : 1; // 0x514
    uint8_t bDrawFailedItems : 1; // 0x514
    uint8_t bReRunQueryOnlyOnFinishedMove : 1; // 0x514
    uint8_t bShouldBeVisibleInGame : 1; // 0x514
    uint8_t bTickDuringGame : 1; // 0x514
    uint8_t pad_bitfield_514_5 : 3;
    char pad_515[0x3];
    EEnvQueryRunMode::Type QueryingMode; // 0x518
    char pad_519[0x7];
    FNavAgentProperties NavAgentProperties; // 0x520
    char pad_550[0x20];
    static AEQSTestingPawn* StaticClass();
}; // Size: 0x570
#pragma pack(pop)
