#pragma once
#include <cstdint>
#include "FForceFeedbackAttenuationSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UForceFeedbackAttenuation : public UObject {
public:
    FForceFeedbackAttenuationSettings Attenuation; // 0x28
    static UForceFeedbackAttenuation* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
