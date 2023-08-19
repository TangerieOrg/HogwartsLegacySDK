#pragma once
#include <cstdint>
class ALerpVolumesSingleton;
class ULerpVolumesLocalEvaluationComponent;
#pragma pack(push, 1)
struct FLerpVolumesWorldInfo {
    ALerpVolumesSingleton* Singleton; // 0x0
    TArray<ULerpVolumesLocalEvaluationComponent*> LocalEvaluators; // 0x8
    TArray<void*> Volumes; // 0x18
}; // Size: 0x28
#pragma pack(pop)
