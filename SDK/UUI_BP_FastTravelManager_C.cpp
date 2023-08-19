#include "UFastTravelManager.hpp"
#include "UUI_BP_FastTravelManager_C.hpp"
UUI_BP_FastTravelManager_C* UUI_BP_FastTravelManager_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/UI_BP_FastTravelManager.UI_BP_FastTravelManager_C");
    return (UUI_BP_FastTravelManager_C*)res;
}
