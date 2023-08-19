#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierOptions.hpp"
#pragma pack(push, 1)
class UGroupCoordinatedActorTagOwnersOptions : public UQualifierOptions {
public:
    TArray<FName> TagIDs; // 0x28
    FBlackboardKeySelector SubjectToCheck; // 0x38
    static UGroupCoordinatedActorTagOwnersOptions* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
