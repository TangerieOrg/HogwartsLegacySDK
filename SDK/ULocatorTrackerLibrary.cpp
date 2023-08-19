#include "AActor.hpp"
#include "FActorTracker.hpp"
#include "FBoneTracker.hpp"
#include "FLocatorTracker.hpp"
#include "FRefPoseTracker.hpp"
#include "FSocketTracker.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULocatorTrackerLibrary.hpp"
#include "USceneComponent.hpp"
ULocatorTrackerLibrary* ULocatorTrackerLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.LocatorTrackerLibrary");
    return (ULocatorTrackerLibrary*)res;
}
void ULocatorTrackerLibrary::MakeSocketTracker(AActor* Actor, FName SocketName, FSocketTracker& Tracker, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.MakeSocketTracker"));
    struct Params_MakeSocketTracker {
        AActor* Actor; // 0x0
        FName SocketName; // 0x8
        FSocketTracker Tracker; // 0x10
        bool bTrackerValid; // 0x30
    }; // Size: 0x31
    Params_MakeSocketTracker params{};
    params.Actor = (AActor*)Actor;
    params.SocketName = (FName)SocketName;
    params.Tracker = (FSocketTracker)Tracker;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::MakeRefPoseTracker(AActor* Actor, FName BoneName, FRefPoseTracker& Tracker, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.MakeRefPoseTracker"));
    struct Params_MakeRefPoseTracker {
        AActor* Actor; // 0x0
        FName BoneName; // 0x8
        FRefPoseTracker Tracker; // 0x10
        bool bTrackerValid; // 0x60
    }; // Size: 0x61
    Params_MakeRefPoseTracker params{};
    params.Actor = (AActor*)Actor;
    params.BoneName = (FName)BoneName;
    params.Tracker = (FRefPoseTracker)Tracker;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::MakeComponentTracker(USceneComponent* Component, FLocatorTracker& Tracker, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.MakeComponentTracker"));
    struct Params_MakeComponentTracker {
        USceneComponent* Component; // 0x0
        FLocatorTracker Tracker; // 0x8
        bool bTrackerValid; // 0x10
    }; // Size: 0x11
    Params_MakeComponentTracker params{};
    params.Component = (USceneComponent*)Component;
    params.Tracker = (FLocatorTracker)Tracker;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::GetLocatorTrackerVelocity(FLocatorTracker& Tracker, FVector& Velocity, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.GetLocatorTrackerVelocity"));
    struct Params_GetLocatorTrackerVelocity {
        FLocatorTracker Tracker; // 0x0
        FVector Velocity; // 0x8
        bool bTrackerValid; // 0x14
    }; // Size: 0x15
    Params_GetLocatorTrackerVelocity params{};
    params.Tracker = (FLocatorTracker)Tracker;
    params.Velocity = (FVector)Velocity;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bTrackerValid = params.bTrackerValid;
    Velocity = params.Velocity;
    Tracker = params.Tracker;
}
void ULocatorTrackerLibrary::MakeBoneTracker(AActor* Actor, FName BoneName, FBoneTracker& Tracker, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.MakeBoneTracker"));
    struct Params_MakeBoneTracker {
        AActor* Actor; // 0x0
        FName BoneName; // 0x8
        FBoneTracker Tracker; // 0x10
        bool bTrackerValid; // 0x38
    }; // Size: 0x39
    Params_MakeBoneTracker params{};
    params.Actor = (AActor*)Actor;
    params.BoneName = (FName)BoneName;
    params.Tracker = (FBoneTracker)Tracker;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bTrackerValid = params.bTrackerValid;
    Tracker = params.Tracker;
}
void ULocatorTrackerLibrary::MakeActorTracker(AActor* Actor, FActorTracker& Tracker, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.MakeActorTracker"));
    struct Params_MakeActorTracker {
        AActor* Actor; // 0x0
        FActorTracker Tracker; // 0x8
        bool bTrackerValid; // 0x18
    }; // Size: 0x19
    Params_MakeActorTracker params{};
    params.Actor = (AActor*)Actor;
    params.Tracker = (FActorTracker)Tracker;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::GetRefPoseTransform(AActor* Actor, FName BoneName, FTransform& Transform, bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.GetRefPoseTransform"));
    struct Params_GetRefPoseTransform {
        AActor* Actor; // 0x0
        FName BoneName; // 0x8
        FTransform Transform; // 0x10
        bool bValid; // 0x40
    }; // Size: 0x41
    Params_GetRefPoseTransform params{};
    params.Actor = (AActor*)Actor;
    params.BoneName = (FName)BoneName;
    params.Transform = (FTransform)Transform;
    params.bValid = (bool)bValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    bValid = params.bValid;
}
void ULocatorTrackerLibrary::GetLocatorTrackerValid(FLocatorTracker& Tracker, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.GetLocatorTrackerValid"));
    struct Params_GetLocatorTrackerValid {
        FLocatorTracker Tracker; // 0x0
        bool bTrackerValid; // 0x8
    }; // Size: 0x9
    Params_GetLocatorTrackerValid params{};
    params.Tracker = (FLocatorTracker)Tracker;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::GetLocatorTrackerTransform(FLocatorTracker& Tracker, FTransform& Transform, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.GetLocatorTrackerTransform"));
    struct Params_GetLocatorTrackerTransform {
        FLocatorTracker Tracker; // 0x0
        char pad_8[0x8];
        FTransform Transform; // 0x10
        bool bTrackerValid; // 0x40
    }; // Size: 0x41
    Params_GetLocatorTrackerTransform params{};
    params.Tracker = (FLocatorTracker)Tracker;
    params.Transform = (FTransform)Transform;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    Transform = params.Transform;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::GetLocatorTrackerSceneComponent(FLocatorTracker& Tracker, USceneComponent*& SceneComponent, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.GetLocatorTrackerSceneComponent"));
    struct Params_GetLocatorTrackerSceneComponent {
        FLocatorTracker Tracker; // 0x0
        USceneComponent* SceneComponent; // 0x8
        bool bTrackerValid; // 0x10
    }; // Size: 0x11
    Params_GetLocatorTrackerSceneComponent params{};
    params.Tracker = (FLocatorTracker)Tracker;
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Tracker = params.Tracker;
    SceneComponent = params.SceneComponent;
    bTrackerValid = params.bTrackerValid;
}
void ULocatorTrackerLibrary::GetLocatorTrackerActor(FLocatorTracker& Tracker, AActor*& Actor, bool& bTrackerValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.LocatorTrackerLibrary.GetLocatorTrackerActor"));
    struct Params_GetLocatorTrackerActor {
        FLocatorTracker Tracker; // 0x0
        AActor* Actor; // 0x8
        bool bTrackerValid; // 0x10
    }; // Size: 0x11
    Params_GetLocatorTrackerActor params{};
    params.Tracker = (FLocatorTracker)Tracker;
    params.Actor = (AActor*)Actor;
    params.bTrackerValid = (bool)bTrackerValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Actor = params.Actor;
    Tracker = params.Tracker;
    bTrackerValid = params.bTrackerValid;
}
