#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FInstancedTrailMember.hpp"
#include "FInstancedTrailMemberBehavior.hpp"
#include "FTransform.hpp"
class UStaticMesh;
class UInstancedStaticMeshComponent;
#pragma pack(push, 1)
class AInstancedTrailActor : public AActor {
public:
    int32_t MaxMeshes; // 0x248
    char pad_24c[0x4];
    UStaticMesh* TrailMemberMesh; // 0x250
    float spacing; // 0x258
    float RandomizeSpacingPercent; // 0x25c
    int32_t Burst; // 0x260
    char pad_264[0xc];
    FTransform FollowOffset; // 0x270
    FInstancedTrailMemberBehavior MemberBehavior; // 0x2a0
    bool bEnabled; // 0x480
    char pad_481[0x7];
    UInstancedStaticMeshComponent* TrailMeshes; // 0x488
    TArray<FInstancedTrailMember> TrailMembers; // 0x490
    int32_t NextTrailMember; // 0x4a0
    char pad_4a4[0x5c];
    static AInstancedTrailActor* StaticClass();
    void Reset();
    void Regenerate();
}; // Size: 0x500
#pragma pack(pop)
