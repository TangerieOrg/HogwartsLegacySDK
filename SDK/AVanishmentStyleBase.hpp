#pragma once
#include <cstdint>
#include "AActor.hpp"
class ATransfigurationPreviewActor;
#pragma pack(push, 1)
class AVanishmentStyleBase : public AActor {
public:
    ATransfigurationPreviewActor* PreviewActor; // 0x248
    static AVanishmentStyleBase* StaticClass();
    void StartVanishment();
}; // Size: 0x250
#pragma pack(pop)
