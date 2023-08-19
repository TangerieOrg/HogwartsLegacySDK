#include "UBaseArchitectMonolithicAsset.hpp"
#include "UDataAsset.hpp"
UBaseArchitectMonolithicAsset* UBaseArchitectMonolithicAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.BaseArchitectMonolithicAsset");
    return (UBaseArchitectMonolithicAsset*)res;
}
