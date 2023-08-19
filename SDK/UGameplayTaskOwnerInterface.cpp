#include "UGameplayTaskOwnerInterface.hpp"
#include "UInterface.hpp"
UGameplayTaskOwnerInterface* UGameplayTaskOwnerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTasks.GameplayTaskOwnerInterface");
    return (UGameplayTaskOwnerInterface*)res;
}
