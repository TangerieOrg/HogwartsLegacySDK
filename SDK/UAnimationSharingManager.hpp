#pragma once
#include <cstdint>
#include "UObject.hpp"
class USkeleton;
class UAnimSharingInstance;
class AActor;
class UAnimationSharingSetup;
#pragma pack(push, 1)
class UAnimationSharingManager : public UObject {
public:
    TArray<USkeleton*> Skeletons; // 0x28
    TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
    char pad_48[0x70];
    UAnimationSharingSetup* InitializationSetup; // 0xb8
    static UAnimationSharingManager* StaticClass();
    void RegisterActorWithSkeletonBP(AActor* InActor, USkeleton* SharingSkeleton);
    static UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);
    static bool CreateAnimationSharingManager(UObject* WorldContextObject, UAnimationSharingSetup* Setup);
    static bool AnimationSharingEnabled();
}; // Size: 0xc0
#pragma pack(pop)
