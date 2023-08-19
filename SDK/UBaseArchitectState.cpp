#include "FBaseArchitectTransition.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UBaseArchitectState.hpp"
#include "UDataAsset.hpp"
UBaseArchitectState* UBaseArchitectState::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.BaseArchitectState");
    return (UBaseArchitectState*)res;
}
