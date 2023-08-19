#include "UBTTask_PawnActionBase.hpp"
#include "UBTTask_PushPawnAction.hpp"
#include "UPawnAction.hpp"
UBTTask_PushPawnAction* UBTTask_PushPawnAction::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_PushPawnAction");
    return (UBTTask_PushPawnAction*)res;
}
