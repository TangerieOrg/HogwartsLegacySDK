#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ATransfigurationSnappingLine : public AActor {
public:
    static ATransfigurationSnappingLine* StaticClass();
    void SetLineLength(float Length);
    void FadeOutAndDestroy();
}; // Size: 0x248
#pragma pack(pop)
