#include "UTickSequencerUpdateComponent.hpp"
#include "UTickSequencerUpdateComponentDelegateUpdate.hpp"
UTickSequencerUpdateComponentDelegateUpdate* UTickSequencerUpdateComponentDelegateUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerUpdateComponentDelegateUpdate");
    return (UTickSequencerUpdateComponentDelegateUpdate*)res;
}
