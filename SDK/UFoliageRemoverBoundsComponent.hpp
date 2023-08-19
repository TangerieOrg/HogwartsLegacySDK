#pragma once
#include <cstdint>
#include "UBoxComponent.hpp"
#pragma pack(push, 1)
class UFoliageRemoverBoundsComponent : public UBoxComponent {
public:
    static UFoliageRemoverBoundsComponent* StaticClass();
    void RemoveVegetationInsideBounds();
}; // Size: 0x4b0
#pragma pack(pop)
