#include "UTickSequencerUpdateComponent.hpp"
#include "UTickSequencerUpdateComponentPrePhysics.hpp"
UTickSequencerUpdateComponentPrePhysics* UTickSequencerUpdateComponentPrePhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerUpdateComponentPrePhysics");
    return (UTickSequencerUpdateComponentPrePhysics*)res;
}
