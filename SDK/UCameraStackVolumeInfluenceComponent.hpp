#pragma once
#include <cstdint>
#include "FCameraStackVolumeInfluence.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UCameraStackVolumeInfluenceComponent : public UActorComponent {
public:
    TArray<FCameraStackVolumeInfluence> Influences; // 0xc8
    static UCameraStackVolumeInfluenceComponent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
