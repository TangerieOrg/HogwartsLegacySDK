#pragma once
#include <cstdint>
#include "UCameraShakeBase.hpp"
#pragma pack(push, 1)
class UDefaultCameraShakeBase : public UCameraShakeBase {
public:
    static UDefaultCameraShakeBase* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
