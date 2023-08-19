#include "AInteractiveObjectActor.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "UObjectStateComponent.hpp"
AInteractiveObjectActor* AInteractiveObjectActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InteractiveObjectActor");
    return (AInteractiveObjectActor*)res;
}
