#include "UTickSequencerUpdateComponent.hpp"
#include "UTickSequencerUpdateComponentDuringPhysics.hpp"
UTickSequencerUpdateComponentDuringPhysics* UTickSequencerUpdateComponentDuringPhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerUpdateComponentDuringPhysics");
    return (UTickSequencerUpdateComponentDuringPhysics*)res;
}
