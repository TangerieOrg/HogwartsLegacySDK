#include "FShadowSprintImpulseData.hpp"
#include "UDataAsset.hpp"
#include "UShadowSprintData.hpp"
UShadowSprintData* UShadowSprintData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ShadowSprintData");
    return (UShadowSprintData*)res;
}
