#include "UGameplayTaskResource.hpp"
#include "UObject.hpp"
UGameplayTaskResource* UGameplayTaskResource::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTaskResource");
    return (UGameplayTaskResource*)res;
}
