#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkinFXSocketAdvanced {
    FName UseSpecificComponent; // 0x0
    bool bEvaluateOnlyAtStart; // 0x8
    bool bPreviewOnly; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)
