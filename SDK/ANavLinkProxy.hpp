#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FNavigationLink.hpp"
#include "FNavigationSegmentLink.hpp"
class UNavLinkCustomComponent;
struct FVector;
#pragma pack(push, 1)
class ANavLinkProxy : public AActor {
public:
    char pad_248[0x10];
    TArray<FNavigationLink> PointLinks; // 0x258
    TArray<FNavigationSegmentLink> SegmentLinks; // 0x268
    UNavLinkCustomComponent* SmartLinkComp; // 0x278
    bool bSmartLinkIsRelevant; // 0x280
    char pad_281[0x17];
    static ANavLinkProxy* StaticClass();
    void SetSmartLinkEnabled(bool bEnabled);
    void ResumePathFollowing(AActor* Agent);
    void ReceiveSmartLinkReached(AActor* Agent, FVector& Destination);
    bool IsSmartLinkEnabled();
    bool HasMovingAgents();
}; // Size: 0x298
#pragma pack(pop)
