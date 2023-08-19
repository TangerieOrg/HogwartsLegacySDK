#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UInteractiveFoliageComponent : public UStaticMeshComponent {
public:
    char pad_510[0x10];
    static UInteractiveFoliageComponent* StaticClass();
}; // Size: 0x520
#pragma pack(pop)
