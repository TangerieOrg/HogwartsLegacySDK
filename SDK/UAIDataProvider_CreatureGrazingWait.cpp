#include "UAIDataProvider_CreatureGrazingWait.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureGrazingWait* UAIDataProvider_CreatureGrazingWait::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureGrazingWait");
    return (UAIDataProvider_CreatureGrazingWait*)res;
}
