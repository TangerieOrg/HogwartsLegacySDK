#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_Mercuna_Reachable.hpp"
UBTDecorator_Mercuna_Reachable* UBTDecorator_Mercuna_Reachable::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.BTDecorator_Mercuna_Reachable");
    return (UBTDecorator_Mercuna_Reachable*)res;
}
