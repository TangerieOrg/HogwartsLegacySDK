#include "EBTBlackboardRestart\Type.hpp"
#include "UBTDecorator_Blackboard.hpp"
#include "UBTDecorator_BlackboardBase.hpp"
UBTDecorator_Blackboard* UBTDecorator_Blackboard::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_Blackboard");
    return (UBTDecorator_Blackboard*)res;
}
