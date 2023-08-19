#include "FGameplayTag.hpp"
#include "UActorProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_Tagged.hpp"
UTransform_Tagged* UTransform_Tagged::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_Tagged");
    return (UTransform_Tagged*)res;
}
