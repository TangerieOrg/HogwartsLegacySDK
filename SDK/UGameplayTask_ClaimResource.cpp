#include "UGameplayTask.hpp"
#include "UGameplayTask_ClaimResource.hpp"
UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTask_ClaimResource");
    return (UGameplayTask_ClaimResource*)res;
}
void UGameplayTask_ClaimResource::ClaimResources() {}
void UGameplayTask_ClaimResource::ClaimResource() {}
