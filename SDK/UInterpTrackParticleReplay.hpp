#pragma once
#include <cstdint>
#include "FParticleReplayTrackKey.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackParticleReplay : public UInterpTrack {
public:
    TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
    static UInterpTrackParticleReplay* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
