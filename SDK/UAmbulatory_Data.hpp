#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAmbulatory_Data : public UDataAsset {
public:
    UCurveFloat* IdleTurnAssistCurve; // 0x30
    UCurveFloat* TurnAssistCurve; // 0x38
    UCurveFloat* SpeedCurve; // 0x40
    UCurveFloat* PlayRateCurve; // 0x48
    UCurveFloat* CPS2SpeedCurve; // 0x50
    char pad_58[0x50];
    static UAmbulatory_Data* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
