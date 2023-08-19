#include "UBP_PathNavigationManager_C.hpp"
#include "UPathNavigationManager.hpp"
UBP_PathNavigationManager_C* UBP_PathNavigationManager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/AnimalGuide/BP_PathNavigationManager.BP_PathNavigationManager_C");
    return (UBP_PathNavigationManager_C*)res;
}
