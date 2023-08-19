#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UAkSurfaceReflectorSetComponent;
class UAkLateReverbComponent;
class UAkRoomComponent;
#pragma pack(push, 1)
class AAkSpatialAudioVolume : public AVolume {
public:
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x280
    UAkLateReverbComponent* LateReverb; // 0x288
    UAkRoomComponent* Room; // 0x290
    static AAkSpatialAudioVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
