#include "UAIDataProvider_QueryParams.hpp"
#include "UAIDataProvider_Random.hpp"
UAIDataProvider_Random* UAIDataProvider_Random::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIDataProvider_Random");
    return (UAIDataProvider_Random*)res;
}
