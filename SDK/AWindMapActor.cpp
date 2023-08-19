#include "AInfo.hpp"
#include "AWindMapActor.hpp"
#include "UWindMapComponent.hpp"
AWindMapActor* AWindMapActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindMapActor");
    return (AWindMapActor*)res;
}
