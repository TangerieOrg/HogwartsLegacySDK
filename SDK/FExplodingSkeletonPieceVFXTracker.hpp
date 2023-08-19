#pragma once
#include <cstdint>
class UNiagaraComponent;
#pragma pack(push, 1)
struct FExplodingSkeletonPieceVFXTracker {
    UNiagaraComponent* FXComponent; // 0x0
    bool bStarted; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
