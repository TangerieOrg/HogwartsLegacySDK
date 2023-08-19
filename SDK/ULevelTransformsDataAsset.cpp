#include "FTransform.hpp"
#include "UDataAsset.hpp"
#include "ULevelTransformsDataAsset.hpp"
ULevelTransformsDataAsset* ULevelTransformsDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/StreamingComplexityToolRuntime.LevelTransformsDataAsset");
    return (ULevelTransformsDataAsset*)res;
}
