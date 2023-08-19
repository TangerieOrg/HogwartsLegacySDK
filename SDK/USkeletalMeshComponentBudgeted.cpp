#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkeletalMeshComponentBudgeted.hpp"
USkeletalMeshComponentBudgeted* USkeletalMeshComponentBudgeted::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
    return (USkeletalMeshComponentBudgeted*)res;
}
void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator"));
    struct Params_SetAutoRegisterWithBudgetAllocator {
        bool bInAutoRegisterWithBudgetAllocator; // 0x0
    }; // Size: 0x1
    Params_SetAutoRegisterWithBudgetAllocator params{};
    params.bInAutoRegisterWithBudgetAllocator = (bool)bInAutoRegisterWithBudgetAllocator;
    ProcessEvent(func, &params);
}
