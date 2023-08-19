#include "UObject.hpp"
#include "UOverlapEffectsHandler.hpp"
UOverlapEffectsHandler* UOverlapEffectsHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandler");
    return (UOverlapEffectsHandler*)res;
}
