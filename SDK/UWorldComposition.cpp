#include "ULevelStreaming.hpp"
#include "UObject.hpp"
#include "UWWorldCompositionSettings.hpp"
#include "UWorldComposition.hpp"
UWorldComposition* UWorldComposition::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WorldComposition");
    return (UWorldComposition*)res;
}
