#pragma once
#include <cstdint>
#include "ETargetSpeedMode\Type.hpp"
#include "ETargetSpeedPriority\Type.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USpeedModeTracker : public UObject {
public:
    char pad_28[0x60];
    static USpeedModeTracker* StaticClass();
    void SetTargetSpeedMode(ETargetSpeedMode::Type InSpeedMode, ETargetSpeedPriority::Type InPriority, bool bBroadcastChange);
    void SetBaseTargetSpeedMode(ETargetSpeedMode::Type InSpeedMode);
    ETargetSpeedMode::Type GetTargetSpeedMode();
    ETargetSpeedMode::Type GetBaseTargetSpeedMode();
    void ClearTargetSpeedMode(ETargetSpeedPriority::Type InPriority, bool bBroadcastChange);
}; // Size: 0x88
#pragma pack(pop)
