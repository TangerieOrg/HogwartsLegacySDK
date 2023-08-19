#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "ECreaturePerceptionVolumeType.hpp"
class AActor;
#pragma pack(push, 1)
class ACreaturePerceptionVolume : public AVolume {
public:
    ECreaturePerceptionVolumeType VolumeType; // 0x280
    char pad_284[0x14];
    static ACreaturePerceptionVolume* StaticClass();
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x298
#pragma pack(pop)
