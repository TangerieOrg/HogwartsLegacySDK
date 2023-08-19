#pragma once
#include <cstdint>
#include "UCameraShakeBase.hpp"
#pragma pack(push, 1)
class UTestCameraShake : public UCameraShakeBase {
public:
    static UTestCameraShake* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
