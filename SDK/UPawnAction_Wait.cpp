#include "UPawnAction.hpp"
#include "UPawnAction_Wait.hpp"
UPawnAction_Wait* UPawnAction_Wait::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PawnAction_Wait");
    return (UPawnAction_Wait*)res;
}
