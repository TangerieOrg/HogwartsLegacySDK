#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_ListenForActorDamaged.hpp"
UBTService_ListenForActorDamaged* UBTService_ListenForActorDamaged::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_ListenForActorDamaged");
    return (UBTService_ListenForActorDamaged*)res;
}
