#include "UAIDataProvider_CreatureScaledCapsuleRadius.hpp"
#include "UAIDataProvider_QueryParams.hpp"
UAIDataProvider_CreatureScaledCapsuleRadius* UAIDataProvider_CreatureScaledCapsuleRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIDataProvider_CreatureScaledCapsuleRadius");
    return (UAIDataProvider_CreatureScaledCapsuleRadius*)res;
}
