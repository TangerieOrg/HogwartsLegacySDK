#include "AActor.hpp"
#include "AGroomActor.hpp"
#include "UGroomComponent.hpp"
AGroomActor* AGroomActor::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomActor");
    return (AGroomActor*)res;
}
