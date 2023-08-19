#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UFancyProgressBar : public UPhoenixUserWidget {
public:
    float DelayBeforeDecay; // 0x328
    float DecayDuration; // 0x32c
    float mProgress; // 0x330
    float mGhostProgress; // 0x334
    float mPreDecayProgress; // 0x338
    float mPreDecayGhostProgress; // 0x33c
    float mInactiveDelayTimer; // 0x340
    float mDecayTimer; // 0x344
    static UFancyProgressBar* StaticClass();
    void SetProgress(float Progress);
    void SetGhostProgress(float GhostProgress);
    void ResetProgress(float Progress);
    void ProgressChanged(float Progress);
    void GhostProgressChanged(float GhostProgress);
    void FilledFeedback();
    void DepletedFeedback();
}; // Size: 0x348
#pragma pack(pop)
