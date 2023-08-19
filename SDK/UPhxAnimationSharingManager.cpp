#include "UAnimationSharingManager.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPhxAnimationSharingManager.hpp"
#include "UWorld.hpp"
UPhxAnimationSharingManager* UPhxAnimationSharingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxAnimationSharingManager");
    return (UPhxAnimationSharingManager*)res;
}
UPhxAnimationSharingManager* UPhxAnimationSharingManager::GetPhxAnimationSharingManager(UWorld* InWorld, UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhxAnimationSharingManager.GetPhxAnimationSharingManager"));
    struct Params_GetPhxAnimationSharingManager {
        UWorld* InWorld; // 0x0
        UClass* InClass; // 0x8
        UPhxAnimationSharingManager* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPhxAnimationSharingManager params{};
    params.InWorld = (UWorld*)InWorld;
    params.InClass = (UClass*)InClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPhxAnimationSharingManager*)params.ReturnValue;
}
