#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
class ADoor;
#pragma pack(push, 1)
class UShadowBoxComponent : public UStaticMeshComponent {
public:
    bool UseForBothSidesOfTheDoor; // 0x510
    char pad_511[0x7];
    ADoor* Door; // 0x518
    char pad_520[0x10];
    static UShadowBoxComponent* StaticClass();
}; // Size: 0x530
#pragma pack(pop)
