#include "AActor.hpp"
#include "AEmissiveAdaptation.hpp"
AEmissiveAdaptation* AEmissiveAdaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EmissiveAdaptation");
    return (AEmissiveAdaptation*)res;
}
