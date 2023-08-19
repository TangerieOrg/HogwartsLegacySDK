#include "AActor.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UPawnAction.hpp"
#include "UPawnAction_Move.hpp"
UPawnAction_Move* UPawnAction_Move::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PawnAction_Move");
    return (UPawnAction_Move*)res;
}
