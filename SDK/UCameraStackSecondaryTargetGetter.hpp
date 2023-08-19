#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
class UCameraStack;
#pragma pack(push, 1)
class UCameraStackSecondaryTargetGetter : public UObject {
public:
    float CommitTime; // 0x28
    char pad_2c[0x34];
    static UCameraStackSecondaryTargetGetter* StaticClass();
    void Update(float DeltaSeconds);
    bool IsValid();
    bool HasValidData();
    FVector GetTargetLocation();
    void GetTargetBoundingCylinder(FVector& OutCenterLocation, float& OutHalfHeight, float& OutRadius);
    AActor* GetTargetActor();
    void Activate(UCameraStack* InList);
}; // Size: 0x60
#pragma pack(pop)
