#pragma once
#include <cstdint>
#include "AActor.hpp"
class ATransfigurationPreviewActor;
#pragma pack(push, 1)
class ATransfigurationPlacementAnimator : public AActor {
public:
    char pad_248[0x10];
    static ATransfigurationPlacementAnimator* StaticClass();
    void SelectAnimationIndex();
    int32_t GetSelectedAnimIndex();
    void DetachPreviewObject();
    void AttachPreviewObject(ATransfigurationPreviewActor* InPreviewActor);
}; // Size: 0x258
#pragma pack(pop)
