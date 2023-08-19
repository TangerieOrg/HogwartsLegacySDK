#pragma once
#include <cstdint>
#include "FCinematicId.hpp"
#include "FCinematicRenderJob.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCinematicBatch : public UDataAsset {
public:
    FCinematicId ShotgunCinematicID; // 0x30
    TArray<FCinematicRenderJob> Jobs; // 0x38
    static UCinematicBatch* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
