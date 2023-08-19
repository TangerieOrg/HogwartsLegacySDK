#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UCameraStackSettings;
class UClass;
#pragma pack(push, 1)
class UCameraStackComponent : public USceneComponent {
public:
    UClass* OverrideActorClass; // 0x220
    char pad_228[0x8];
    static UCameraStackComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
