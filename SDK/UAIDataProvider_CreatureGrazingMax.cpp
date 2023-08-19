#include "UAIDataProvider_CreatureGrazingMax.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureGrazingMax* UAIDataProvider_CreatureGrazingMax::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureGrazingMax");
    return (UAIDataProvider_CreatureGrazingMax*)res;
}
