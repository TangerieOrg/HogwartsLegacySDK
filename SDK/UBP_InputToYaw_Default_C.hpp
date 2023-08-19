#pragma once
#include <cstdint>
#include "UCameraStackBehaviorInputToYawSpeed.hpp"
#pragma pack(push, 1)
class UBP_InputToYaw_Default_C : public UCameraStackBehaviorInputToYawSpeed {
public:
    static UBP_InputToYaw_Default_C* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
