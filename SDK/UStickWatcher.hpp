#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UBaseWatcher.hpp"
#pragma pack(push, 1)
class UStickWatcher : public UBaseWatcher {
public:
    char pad_110[0x20];
    static UStickWatcher* StaticClass();
    void StickY(float AxisVal);
    void StickX(float AxisVal);
    FVector2D GetInputAxes();
    void ActionStop();
    void ActionStart();
    void ActionCancel();
}; // Size: 0x130
#pragma pack(pop)
