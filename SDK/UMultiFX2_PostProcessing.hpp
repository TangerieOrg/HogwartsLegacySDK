#pragma once
#include <cstdint>
#include "EFXPostProcessingDuplicateAction.hpp"
#include "UMultiFX2_Filtered.hpp"
class UMultiFX2_PostProcessingDefinition;
#pragma pack(push, 1)
class UMultiFX2_PostProcessing : public UMultiFX2_Filtered {
public:
    UMultiFX2_PostProcessingDefinition* Definition; // 0x68
    float AutoBlendInTime; // 0x70
    float AutoBlendOutTime; // 0x74
    float DefaultBlendOutTime; // 0x78
    bool bUseAutoBlendIn; // 0x7c
    bool bUseAutoBlendOut; // 0x7d
    char pad_7e[0x2];
    float Priority; // 0x80
    EFXPostProcessingDuplicateAction IfAlreadyRunning; // 0x84
    char pad_85[0x3];
    static UMultiFX2_PostProcessing* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
