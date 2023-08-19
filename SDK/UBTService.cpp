#include "UBTAuxiliaryNode.hpp"
#include "UBTService.hpp"
UBTService* UBTService::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTService");
    return (UBTService*)res;
}
