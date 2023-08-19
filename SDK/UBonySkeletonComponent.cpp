#include "FBoneParticleTracker.hpp"
#include "FBonySkeletonTimerProfile.hpp"
#include "FBonySkeletonTimerProfiles.hpp"
#include "UActorComponent.hpp"
#include "UBonySkeletonComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinFXComponent.hpp"
UBonySkeletonComponent* UBonySkeletonComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BonySkeletonComponent");
    return (UBonySkeletonComponent*)res;
}
void UBonySkeletonComponent::Abort() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BonySkeletonComponent.Abort"));
    struct Params_Abort {
    }; // Size: 0x0
    Params_Abort params{};
    ProcessEvent(func, &params);
}
bool UBonySkeletonComponent::Initialize(FName ProfileName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BonySkeletonComponent.Initialize"));
    struct Params_Initialize {
        FName ProfileName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Initialize params{};
    params.ProfileName = (FName)ProfileName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
