#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UCharacterBoneProjector;
#pragma pack(push, 1)
class UCharacterBoneProjectorComponent : public UActorComponent {
public:
    UCharacterBoneProjector* Projector; // 0xc8
    bool bDebugDraw; // 0xd0
    char pad_d1[0x7];
    static UCharacterBoneProjectorComponent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
