#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_PostProcessing : public USceneRigActionState {
public:
    char pad_50[0x10];
    FPostProcessSettings PostProcessSettings; // 0x60
    float CurrentBlend; // 0x650
    float InsertedPriority; // 0x654
    bool bInserted; // 0x658
    char pad_659[0x7];
    static USceneActionState_PostProcessing* StaticClass();
}; // Size: 0x660
#pragma pack(pop)
