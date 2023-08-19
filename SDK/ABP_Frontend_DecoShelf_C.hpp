#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_DecoShelf_C : public AActor {
public:
    UStaticMeshComponent* SM_HM_Quill_DisplayShelf_C; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    static ABP_Frontend_DecoShelf_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
