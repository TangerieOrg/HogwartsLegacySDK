#include "UDataAsset.hpp"
#include "USendTargetData.hpp"
USendTargetData* USendTargetData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SendTargetData");
    return (USendTargetData*)res;
}
