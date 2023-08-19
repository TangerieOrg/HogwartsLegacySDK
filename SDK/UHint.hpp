#pragma once
#include <cstdint>
#include "ETutorialPosition.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UHint : public UObject {
public:
    char pad_28[0x68];
    static UHint* StaticClass();
    void GameLogicExpressionChanged(bool bNewValue);
    void Blueprint_QueueForDisplay(float InInitialWaitTime, float InOnScreenTime, float InOffScreenTime, ETutorialPosition InHintPosition);
}; // Size: 0x90
#pragma pack(pop)
