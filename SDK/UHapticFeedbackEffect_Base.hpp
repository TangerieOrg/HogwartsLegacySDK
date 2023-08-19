#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHapticFeedbackEffect_Base : public UObject {
public:
    static UHapticFeedbackEffect_Base* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
