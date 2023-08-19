#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkeletalMeshSocket.hpp"
USkeletalMeshSocket* USkeletalMeshSocket::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMeshSocket");
    return (USkeletalMeshSocket*)res;
}
void USkeletalMeshSocket::InitializeSocketFromLocation(USkeletalMeshComponent* skelComp, FVector WorldLocation, FVector WorldNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshSocket.InitializeSocketFromLocation"));
    struct Params_InitializeSocketFromLocation {
        USkeletalMeshComponent* skelComp; // 0x0
        FVector WorldLocation; // 0x8
        FVector WorldNormal; // 0x14
    }; // Size: 0x20
    Params_InitializeSocketFromLocation params{};
    params.skelComp = (USkeletalMeshComponent*)skelComp;
    params.WorldLocation = (FVector)WorldLocation;
    params.WorldNormal = (FVector)WorldNormal;
    ProcessEvent(func, &params);
}
FVector USkeletalMeshSocket::GetSocketLocation(USkeletalMeshComponent* skelComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshSocket.GetSocketLocation"));
    struct Params_GetSocketLocation {
        USkeletalMeshComponent* skelComp; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetSocketLocation params{};
    params.skelComp = (USkeletalMeshComponent*)skelComp;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
