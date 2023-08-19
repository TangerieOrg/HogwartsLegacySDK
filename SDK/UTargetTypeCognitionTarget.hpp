#pragma once
#include <cstdint>
#include "ETargetID\Type.hpp"
#include "UTargetTypeLocation.hpp"
class UClass;
class UTargetTracker;
class AActor;
class UTargetTypeBase;
#pragma pack(push, 1)
class UTargetTypeCognitionTarget : public UTargetTypeLocation {
public:
    UClass* Sense; // 0x48
    char pad_50[0x8];
    bool bLookAt; // 0x58
    char pad_59[0x7];
    static UTargetTypeCognitionTarget* StaticClass();
    static UTargetTypeBase* AddTarget_CognitionTarget(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, AActor* InTargetActor, UClass* InSense, bool bLookAt);
}; // Size: 0x60
#pragma pack(pop)
