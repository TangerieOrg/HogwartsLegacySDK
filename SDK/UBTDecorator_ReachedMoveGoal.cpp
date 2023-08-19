#include "UBTDecorator.hpp"
#include "UBTDecorator_ReachedMoveGoal.hpp"
UBTDecorator_ReachedMoveGoal* UBTDecorator_ReachedMoveGoal::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_ReachedMoveGoal");
    return (UBTDecorator_ReachedMoveGoal*)res;
}
