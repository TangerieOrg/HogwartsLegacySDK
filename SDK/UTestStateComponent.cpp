#include "FObjectStateData.hpp"
#include "FRepairData.hpp"
#include "UActorComponent.hpp"
#include "UTestStateComponent.hpp"
UTestStateComponent* UTestStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TestStateComponent");
    return (UTestStateComponent*)res;
}
