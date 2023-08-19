#include "UAIDataProvider_CreatureGrazingMin.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureGrazingMin* UAIDataProvider_CreatureGrazingMin::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureGrazingMin");
    return (UAIDataProvider_CreatureGrazingMin*)res;
}
