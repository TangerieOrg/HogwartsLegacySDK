#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EMercunaSplineEvent\Type.hpp"
#include "FMercunaPawnUsageFlags.hpp"
class USphereComponent;
class UMercunaSpline;
class AMercunaNavOctree;
#pragma pack(push, 1)
class AMercunaNavTestingActor : public AActor {
public:
    float Radius; // 0x248
    uint8_t bSearchStart : 1; // 0x24c
    uint8_t pad_bitfield_24c_1 : 7;
    char pad_24d[0x3];
    AMercunaNavTestingActor* OtherActor; // 0x250
    FMercunaPawnUsageFlags UsageFlags; // 0x258
    float HeightChangePenalty; // 0x260
    uint8_t bContinuouslyRepath : 1; // 0x264
    uint8_t bDrawSpline : 1; // 0x264
    uint8_t bDrawToScale : 1; // 0x264
    uint8_t pad_bitfield_264_3 : 5;
    char pad_265[0x3];
    float MaxSpeed; // 0x268
    float MaxAcceleration; // 0x26c
    uint8_t bPathExist : 1; // 0x270
    uint8_t bPathIsPartial : 1; // 0x270
    uint8_t bPathIsOutOfNodes : 1; // 0x270
    uint8_t pad_bitfield_270_3 : 5;
    char pad_271[0x3];
    float PathLength; // 0x274
    int32_t PathSections; // 0x278
    float PathFindTime; // 0x27c
    int32_t PathNodesUsed; // 0x280
    char pad_284[0x4];
    USphereComponent* SphereComponent; // 0x288
    UMercunaSpline* Spline; // 0x290
    AMercunaNavOctree* Octree; // 0x298
    char pad_2a0[0x8];
    static AMercunaNavTestingActor* StaticClass();
    void OnSplineUpdate(EMercunaSplineEvent::Type SplineEvent);
    void OnOctreeBuildComplete();
}; // Size: 0x2a8
#pragma pack(pop)
