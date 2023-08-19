#pragma once
#include <cstdint>
#include "AActor.hpp"
class UTextRenderComponent;
#pragma pack(push, 1)
class ATextRenderActor : public AActor {
public:
    UTextRenderComponent* TextRender; // 0x248
    static ATextRenderActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
