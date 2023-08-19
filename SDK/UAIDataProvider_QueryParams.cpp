#include "UAIDataProvider.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_QueryParams* UAIDataProvider_QueryParams::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIDataProvider_QueryParams");
    return (UAIDataProvider_QueryParams*)res;
}
