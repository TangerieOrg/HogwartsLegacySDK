#pragma once
#include <cstdint>
#include "AActor.hpp"
class ATransfigurationPreviewActor;
#pragma pack(push, 1)
class ATransformationStyleBase : public AActor {
public:
    ATransfigurationPreviewActor* OldPreviewActor; // 0x248
    ATransfigurationPreviewActor* NewPreviewActor; // 0x250
    static ATransformationStyleBase* StaticClass();
    void StartTransformation();
}; // Size: 0x258
#pragma pack(pop)
