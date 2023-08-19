#include "UBaseArchitectMonolithicAsset.hpp"
#include "UPreLoadArchitectMonolithicAsset.hpp"
UPreLoadArchitectMonolithicAsset* UPreLoadArchitectMonolithicAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.PreLoadArchitectMonolithicAsset");
    return (UPreLoadArchitectMonolithicAsset*)res;
}
