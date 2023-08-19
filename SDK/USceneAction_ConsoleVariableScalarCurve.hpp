#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_ConsoleBase.hpp"
#pragma pack(push, 1)
class USceneAction_ConsoleVariableScalarCurve : public USceneAction_ConsoleBase {
public:
    FName Variable; // 0x88
    FRuntimeFloatCurve Curve; // 0x90
    bool bStretchToDuration; // 0x118
    bool bInShippingToo; // 0x119
    char pad_11a[0x6];
    static USceneAction_ConsoleVariableScalarCurve* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
