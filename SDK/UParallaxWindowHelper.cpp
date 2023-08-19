#include "FVector.hpp"
#include "UParallaxWindowHelper.hpp"
#include "USceneComponent.hpp"
UParallaxWindowHelper* UParallaxWindowHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ParallaxWindowHelper");
    return (UParallaxWindowHelper*)res;
}
