#pragma once
#include <cstdint>
#include "UTimedButtonWatcher.hpp"
class UAISense;
class AActor;
#pragma pack(push, 1)
class UInteractTimedButtonWatcher : public UTimedButtonWatcher {
public:
    static UInteractTimedButtonWatcher* StaticClass();
    void TargetSighted(UAISense* Sense, AActor* Target);
    void TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget);
}; // Size: 0x160
#pragma pack(pop)
