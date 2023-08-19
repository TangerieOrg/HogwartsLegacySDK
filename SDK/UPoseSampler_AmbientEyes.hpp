#pragma once
#include <cstdint>
#include "UPoseSampler.hpp"
#pragma pack(push, 1)
class UPoseSampler_AmbientEyes : public UPoseSampler {
public:
    char pad_28[0x20];
    int32_t LODThreshold; // 0x48
    char pad_4c[0x184];
    static UPoseSampler_AmbientEyes* StaticClass();
    void OnDialogueLineAnimStarted(FName DialogueID, float WorldTime);
    void OnDialogueLineAnimFinished(bool bCancelled);
}; // Size: 0x1d0
#pragma pack(pop)
