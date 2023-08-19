#pragma once
#include <cstdint>
#include "FOdcObstacleData.hpp"
#include "USceneComponent.hpp"
class UActorComponent;
#pragma pack(push, 1)
class UOdcObstacleComponent : public USceneComponent {
public:
    char pad_220[0x20];
    bool bExcludeIfParentHasAuthoredObstacle; // 0x240
    char pad_241[0x1f];
    static UOdcObstacleComponent* StaticClass();
    void SetFlag(FName FlagName);
    void ClearFlag(FName FlagName);
    void AddComponentObstaclesBP(TArray<UActorComponent*> IncludeComponents, bool RemoveUnknownObstacles);
    void AddActorComponentObstaclesBP(bool RemoveUnknownObstacles, TArray<UActorComponent*> ExcludeComponents);
}; // Size: 0x260
#pragma pack(pop)
