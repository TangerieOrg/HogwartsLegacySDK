#include "AActor.hpp"
#include "AMunitionType_Base.hpp"
#include "FBox.hpp"
#include "FHitResult.hpp"
#include "FIsmDesInstance.hpp"
#include "UFunction.hpp"
#include "UIsmDestructionManager.hpp"
#include "UObject.hpp"
UIsmDestructionManager* UIsmDestructionManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IsmDestructionManager");
    return (UIsmDestructionManager*)res;
}
void UIsmDestructionManager::RegisterMapping() {}
UIsmDestructionManager* UIsmDestructionManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IsmDestructionManager.Get"));
    struct Params_Get {
        UIsmDestructionManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UIsmDestructionManager*)params.ReturnValue;
}
bool UIsmDestructionManager::ConvertInstanceIfNecessary(AActor* HitTarget, FBox& Box, float Damage, FHitResult& HitResult, AActor* Instigator, AMunitionType_Base* Munition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IsmDestructionManager.ConvertInstanceIfNecessary"));
    struct Params_ConvertInstanceIfNecessary {
        AActor* HitTarget; // 0x0
        FBox Box; // 0x8
        float Damage; // 0x24
        FHitResult HitResult; // 0x28
        AActor* Instigator; // 0xb0
        AMunitionType_Base* Munition; // 0xb8
        bool ReturnValue; // 0xc0
    }; // Size: 0xc1
    Params_ConvertInstanceIfNecessary params{};
    params.HitTarget = (AActor*)HitTarget;
    params.Box = (FBox)Box;
    params.Damage = (float)Damage;
    params.HitResult = (FHitResult)HitResult;
    params.Instigator = (AActor*)Instigator;
    params.Munition = (AMunitionType_Base*)Munition;
    ProcessEvent(func, &params);
    Box = params.Box;
    HitResult = params.HitResult;
    return (bool)params.ReturnValue;
}
