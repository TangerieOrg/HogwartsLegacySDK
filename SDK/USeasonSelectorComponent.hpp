#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class USeasonSelectorComponent : public USceneComponent {
public:
    char pad_220[0x48];
    TArray<void*> SpringMaterials; // 0x268
    TArray<void*> SummerMaterials; // 0x278
    TArray<void*> FallMaterials; // 0x288
    TArray<void*> WinterMaterials; // 0x298
    char pad_2a8[0x8];
    static USeasonSelectorComponent* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
