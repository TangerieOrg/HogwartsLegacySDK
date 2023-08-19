#include "FGameplayTagContainer.hpp"
#include "UAnimTag_Enemy_POIStance.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_Enemy_POIStance* UAnimTag_Enemy_POIStance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_Enemy_POIStance");
    return (UAnimTag_Enemy_POIStance*)res;
}
