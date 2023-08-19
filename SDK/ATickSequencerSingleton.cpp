#include "AActor.hpp"
#include "ATickSequencerSingleton.hpp"
#include "ETickSequencerGroup.hpp"
#include "FDynamicBucketGroupStack.hpp"
#include "FTickSequencerUpdateBucketList.hpp"
#include "UFunction.hpp"
#include "UTickSequencerBucketSetup.hpp"
#include "UTickSequencerUpdateComponent.hpp"
#include "UTickSequencerUpdateComponentDelegateUpdate.hpp"
ATickSequencerSingleton* ATickSequencerSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/TickSequencer.TickSequencerSingleton");
    return (ATickSequencerSingleton*)res;
}
void ATickSequencerSingleton::ForceTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TickSequencer.TickSequencerSingleton.ForceTick"));
    struct Params_ForceTick {
    }; // Size: 0x0
    Params_ForceTick params{};
    ProcessEvent(func, &params);
}
