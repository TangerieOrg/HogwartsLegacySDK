#pragma once
#include <cstdint>
#include "EAudioSpectrumType.hpp"
#include "EConstantQFFTSizeEnum.hpp"
#include "EConstantQNormalizationEnum.hpp"
#include "EFFTWindowType.hpp"
#include "UAudioSynesthesiaNRTSettings.hpp"
#pragma pack(push, 1)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings {
public:
    float StartingFrequency; // 0x28
    int32_t NumBands; // 0x2c
    float NumBandsPerOctave; // 0x30
    float AnalysisPeriod; // 0x34
    bool bDownmixToMono; // 0x38
    EConstantQFFTSizeEnum FFTSize; // 0x39
    EFFTWindowType WindowType; // 0x3a
    EAudioSpectrumType SpectrumType; // 0x3b
    float BandWidthStretch; // 0x3c
    EConstantQNormalizationEnum CQTNormalization; // 0x40
    char pad_41[0x3];
    float NoiseFloorDb; // 0x44
    static UConstantQNRTSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
