#include "FOverlapEffectsHandlerConditions.hpp"
#include "UOverlapEffectsHandler.hpp"
#include "UOverlapEffectsHandlerWithConditions.hpp"
UOverlapEffectsHandlerWithConditions* UOverlapEffectsHandlerWithConditions::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerWithConditions");
    return (UOverlapEffectsHandlerWithConditions*)res;
}
