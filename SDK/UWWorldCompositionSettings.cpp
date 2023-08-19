#include "UObject.hpp"
#include "UWWorldCompositionSettings.hpp"
UWWorldCompositionSettings* UWWorldCompositionSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WWorldCompositionSettings");
    return (UWWorldCompositionSettings*)res;
}
