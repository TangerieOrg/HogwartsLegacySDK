#include "AActor.hpp"
#include "APlaceholder.hpp"
#include "USceneComponent.hpp"
APlaceholder* APlaceholder::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Placeholder");
    return (APlaceholder*)res;
}
