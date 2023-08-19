#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UNavMovementComponent.hpp"
class APawn;
#pragma pack(push, 1)
class UPawnMovementComponent : public UNavMovementComponent {
public:
    APawn* PawnOwner; // 0x148
    static UPawnMovementComponent* StaticClass();
    FVector K2_GetInputVector();
    bool IsMoveInputIgnored();
    FVector GetPendingInputVector();
    APawn* GetPawnOwner();
    FVector GetLastInputVector();
    FVector ConsumeInputVector();
    void AddInputVector(FVector WorldVector, bool bForce);
}; // Size: 0x150
#pragma pack(pop)
