#include "UTickSequencerUpdateComponent.hpp"
#include "UTickSequencerUpdateComponentPostPhysics.hpp"
UTickSequencerUpdateComponentPostPhysics* UTickSequencerUpdateComponentPostPhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerUpdateComponentPostPhysics");
    return (UTickSequencerUpdateComponentPostPhysics*)res;
}
