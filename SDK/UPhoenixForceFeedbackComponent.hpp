#pragma once
#include <cstdint>
#include "UForceFeedbackComponent.hpp"
#pragma pack(push, 1)
class UPhoenixForceFeedbackComponent : public UForceFeedbackComponent {
public:
    static UPhoenixForceFeedbackComponent* StaticClass();
    void SetCadenceMultiplier(float NewCadenceMultiplier);
}; // Size: 0x300
#pragma pack(pop)
