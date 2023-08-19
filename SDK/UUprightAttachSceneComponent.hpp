#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UUprightAttachSceneComponent : public USceneComponent {
public:
    FTransform AttachmentLocalOffset; // 0x220
    bool bUseActorForward; // 0x250
    char pad_251[0xf];
    static UUprightAttachSceneComponent* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
