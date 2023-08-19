#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FLocatorTracker;
struct FSocketTracker;
struct FRefPoseTracker;
struct FActorTracker;
class USceneComponent;
struct FBoneTracker;
struct FTransform;
struct FVector;
#pragma pack(push, 1)
class ULocatorTrackerLibrary : public UBlueprintFunctionLibrary {
public:
    static ULocatorTrackerLibrary* StaticClass();
    static void MakeSocketTracker(AActor* Actor, FName SocketName, FSocketTracker& Tracker, bool& bTrackerValid);
    static void MakeRefPoseTracker(AActor* Actor, FName BoneName, FRefPoseTracker& Tracker, bool& bTrackerValid);
    static void MakeComponentTracker(USceneComponent* Component, FLocatorTracker& Tracker, bool& bTrackerValid);
    static void MakeBoneTracker(AActor* Actor, FName BoneName, FBoneTracker& Tracker, bool& bTrackerValid);
    static void MakeActorTracker(AActor* Actor, FActorTracker& Tracker, bool& bTrackerValid);
    static void GetRefPoseTransform(AActor* Actor, FName BoneName, FTransform& Transform, bool& bValid);
    static void GetLocatorTrackerVelocity(FLocatorTracker& Tracker, FVector& Velocity, bool& bTrackerValid);
    static void GetLocatorTrackerValid(FLocatorTracker& Tracker, bool& bTrackerValid);
    static void GetLocatorTrackerTransform(FLocatorTracker& Tracker, FTransform& Transform, bool& bTrackerValid);
    static void GetLocatorTrackerSceneComponent(FLocatorTracker& Tracker, USceneComponent*& SceneComponent, bool& bTrackerValid);
    static void GetLocatorTrackerActor(FLocatorTracker& Tracker, AActor*& Actor, bool& bTrackerValid);
}; // Size: 0x28
#pragma pack(pop)
